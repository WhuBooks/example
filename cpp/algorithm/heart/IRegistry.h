// Generated by the 'ai.aai.core/scripts/autogen/generate_cm.py' script.
// If you make any local change, they will be lost.

#pragma once

#include <string>
#include <memory>
#include <chrono>
#include <future>
#include <boost/optional.hpp>



#include <automotive_ai/world/new_traffic_service.grpc.pb.h>


namespace aai_heart {

//
// automotive_ai.world.NewTrafficService (automotive_ai/world/new_traffic_service.proto)
//

/**
 * @brief basic interface of new traffic service, is an asynchronous version of grpc service 
 * 
 */
struct IServiceNewTraffic
{
    virtual ~IServiceNewTraffic() = default;

    virtual void OnGetTraffic(
        const ::google::protobuf::Empty& request,
        std::promise<::automotive_ai::common::NewTrafficVehicles> promise) = 0;

    virtual void OnReportTraffic(
        const ::automotive_ai::common::NewTrafficVehicles& request,
        std::promise<::google::protobuf::Empty> promise) = 0;

    virtual void OnStepNextEnd(
        const ::google::protobuf::Empty& request,
        std::promise<::google::protobuf::Empty> promise) = 0;
};

/**
 * @brief initialize ServiceNewTrafficFromGrpc with a grpc service as proxy, return IServiceNewTraffic interface because ServiceNewTrafficFromGrpc inherit from IServiceNewTraffic
 * 
 * @param proxy 
 * @return std::unique_ptr<IServiceNewTraffic> 
 */
std::unique_ptr<IServiceNewTraffic> makeServiceNewTrafficFromGrpc(std::shared_ptr<::automotive_ai::world::NewTrafficService::Service> proxy);

/**
 * @brief basic interface of new traffic client, is an asynchronous version
 * 
 */
struct IStubNewTraffic
{
    virtual ~IStubNewTraffic() = default;

    virtual ::automotive_ai::common::NewTrafficVehicles
        GetTraffic(
            const ::google::protobuf::Empty& request,
            boost::optional<std::chrono::system_clock::time_point> deadline = boost::none) = 0;

    virtual std::future<::automotive_ai::common::NewTrafficVehicles>
        GetTrafficAsync(
            const ::google::protobuf::Empty& request,
            boost::optional<std::chrono::system_clock::time_point> deadline = boost::none) = 0;

    virtual ::google::protobuf::Empty
        ReportTraffic(
            const ::automotive_ai::common::NewTrafficVehicles& request,
            boost::optional<std::chrono::system_clock::time_point> deadline = boost::none) = 0;

    virtual std::future<::google::protobuf::Empty>
        ReportTrafficAsync(
            const ::automotive_ai::common::NewTrafficVehicles& request,
            boost::optional<std::chrono::system_clock::time_point> deadline = boost::none) = 0;

    virtual ::google::protobuf::Empty
        StepNextEnd(
            const ::google::protobuf::Empty& request,
            boost::optional<std::chrono::system_clock::time_point> deadline = boost::none) = 0;

    virtual std::future<::google::protobuf::Empty>
        StepNextEndAsync(
            const ::google::protobuf::Empty& request,
            boost::optional<std::chrono::system_clock::time_point> deadline = boost::none) = 0;
};

/**
 * @brief initialize GrpcFromStubNewTraffic with IStubNewTraffic as proxy, return a grpc StubInterface pointer because GrpcFromStubNewTraffic inherit StubInterface
 * 
 * @param proxy 
 * @return std::unique_ptr<::automotive_ai::world::NewTrafficService::StubInterface> 
 */
std::unique_ptr<::automotive_ai::world::NewTrafficService::StubInterface> makeGrpcFromStubNewTraffic(std::shared_ptr<IStubNewTraffic> proxy);

//
// Registry
//

/**
 * @brief basic registry interface class, which define the public interface of register new traffic service and client
 * 
 */
struct IRegistry
{
    virtual ~IRegistry() = default;

    // NewTraffic: automotive_ai.world.NewTrafficService (automotive_ai/world/new_traffic_service.proto)

    /**
     * @brief register a new GrpcFromServiceNewTraffic with name which use service as proxy
     * 
     * @param name 
     * @param service 
     */
    virtual void registerServiceNewTraffic(const std::string& name, std::shared_ptr<IServiceNewTraffic> service) = 0;

    /**
     * @brief register a new ProxyStubNewTraffic with name into mStubsNewTraffic, or just return the ProxyStubNewTraffic with name
     * 
     * @param name 
     * @return std::shared_ptr<IStubNewTraffic> 
     */
    virtual std::shared_ptr<IStubNewTraffic> registerStubNewTraffic(const std::string& name) = 0;

};

}
