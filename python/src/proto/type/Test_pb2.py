# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: Test.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='Test.proto',
  package='books',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\nTest.proto\x12\x05\x62ooks\"V\n\x06Person\x12\x0c\n\x04name\x18\x01 \x01(\t\x12\x0b\n\x03\x61ge\x18\x02 \x01(\x05\x12\x0b\n\x03sex\x18\x03 \x01(\x05\x12\r\n\x03hgt\x18\x04 \x01(\x05H\x00\x12\r\n\x03wgt\x18\x05 \x01(\x05H\x00\x42\x06\n\x04\x61ttrb\x06proto3')
)




_PERSON = _descriptor.Descriptor(
  name='Person',
  full_name='books.Person',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='name', full_name='books.Person.name', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='age', full_name='books.Person.age', index=1,
      number=2, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='sex', full_name='books.Person.sex', index=2,
      number=3, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='hgt', full_name='books.Person.hgt', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='wgt', full_name='books.Person.wgt', index=4,
      number=5, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
    _descriptor.OneofDescriptor(
      name='attr', full_name='books.Person.attr',
      index=0, containing_type=None, fields=[]),
  ],
  serialized_start=21,
  serialized_end=107,
)

_PERSON.oneofs_by_name['attr'].fields.append(
  _PERSON.fields_by_name['hgt'])
_PERSON.fields_by_name['hgt'].containing_oneof = _PERSON.oneofs_by_name['attr']
_PERSON.oneofs_by_name['attr'].fields.append(
  _PERSON.fields_by_name['wgt'])
_PERSON.fields_by_name['wgt'].containing_oneof = _PERSON.oneofs_by_name['attr']
DESCRIPTOR.message_types_by_name['Person'] = _PERSON
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Person = _reflection.GeneratedProtocolMessageType('Person', (_message.Message,), {
  'DESCRIPTOR' : _PERSON,
  '__module__' : 'Test_pb2'
  # @@protoc_insertion_point(class_scope:books.Person)
  })
_sym_db.RegisterMessage(Person)


# @@protoc_insertion_point(module_scope)
