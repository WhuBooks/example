//
// Created by books on 2020/6/8.
//

#include <fstream>
#include <iostream>

#include <cereal/archives/json.hpp>
#include <cereal/cereal.hpp>
#include <cereal/types/memory.hpp>
#include <cereal/types/vector.hpp>

#include <gtest/gtest.h>

#include "MyData.h"

TEST(CEREAL_JSON, read_write)
{
  std::string file = "data.json";
  {
    std::ofstream ofs(file, std::ios::trunc);
    cereal::JSONOutputArchive archive(ofs);

    MyDATA d1;
    d1.x = 3;
    d1.y = 1;
    d1.z = 9.9;
    int men = 5;
    double age = 2;

    archive(CEREAL_NVP(d1), men, cereal::make_nvp("age", age));
  }

  {
    std::ifstream ifs(file);
    if (!ifs.is_open()) return;

    cereal::JSONInputArchive archive(ifs);

    MyDATA m1;
    int someInt = 0;
    double d = 0;

    archive(m1, someInt, d);  // NVPs not strictly necessary when loading
    // but could be used (even out of order)

    EXPECT_EQ(m1.x, 3);
    EXPECT_EQ(m1.y, 1);
    EXPECT_EQ(m1.z, 9.9);
    EXPECT_EQ(someInt, 5);
    EXPECT_EQ(d, 2);
  }
}

TEST(CEREAL_JSON, read_write_recursive)
{
  std::string file = "recurse_data.json";
  {
    std::ofstream ofs(file, std::ios::trunc);
    cereal::JSONOutputArchive archive(ofs);

    MyDATA d1;
    d1.x = 3;
    d1.y = 1;
    d1.z = 9.9;
    int men = 5;
    double age = 2;

    MyType t1;
    t1.data = d1;
    t1.length = 3.0;
    t1.width = 2.5;

    archive(CEREAL_NVP(t1), men, age);
  }

  {
    std::ifstream ifs(file);
    if (!ifs.is_open()) return;

    cereal::JSONInputArchive archive(ifs);

    MyType t1;
    MyDATA m1;
    int someInt = 0;
    double d = 0;

    archive(t1, someInt, d);  // NVPs not strictly necessary when loading
    // but could be used (even out of order)
    m1 = t1.data;
    EXPECT_EQ(m1.x, 3);
    EXPECT_EQ(m1.y, 1);
    EXPECT_EQ(m1.z, 9.9);
    EXPECT_EQ(someInt, 5);
    EXPECT_EQ(d, 2);
  }
}

TEST(CEREAL_JSON, read_write_pointer)
{
  std::string file = "data_ptr.json";
  {
    std::ofstream ofs(file, std::ios::trunc);
    cereal::JSONOutputArchive archive(ofs);

    std::shared_ptr<MyPointer> ptr(new MyPointer(1, 2));

    archive(CEREAL_NVP(ptr));
  }

  {
    std::ifstream ifs(file);
    if (!ifs.is_open()) return;

    cereal::JSONInputArchive archive(ifs);

    std::shared_ptr<MyPointer> ptr;
    archive(ptr);

    EXPECT_EQ(ptr->x, 1);
    EXPECT_EQ(ptr->y, 2);
  }
}

TEST(CEREAL_JSON, write_type)
{
  std::vector<std::vector<MyType>> vec;

  for (int i = 0; i < 10; i++) {
    MyType tmp;
    tmp.length = 1.0 * i;
    tmp.width = -1.0 * i;
    tmp.data.x = i;
    tmp.data.y = i * 2;
    tmp.data.z = i * 3;
    vec.push_back({tmp, tmp, tmp});
  }

  std::string file = "tmp.json";

  {
    std::ofstream ofs(file, std::ios::trunc);
    cereal::JSONOutputArchive archive(ofs);
    for (int i = 0; i < vec.size(); i++) {
      archive(cereal::make_nvp(std::to_string(i), vec[i]));
    }
  }
}

TEST(CEREAL_JSON, read_type)
{
  std::vector<std::vector<MyType>> vec;
  std::string file = "tmp.json";

  {
    std::ifstream ifs(file);
    cereal::JSONInputArchive archive(ifs);
    for (int i = 0; i < 10; i++) {
      std::vector<MyType> tmp;
      std::cout<<archive.getNodeName()<<"\t";
      archive(tmp);
      std::cout << tmp.size() << "\t"
                << tmp.front().length << std::endl;
    }
    std::cout << archive.getNodeName() << std::endl;
  }
}
