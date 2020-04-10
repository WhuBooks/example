// Generated by the 'ai.aai.core/scripts/autogen/generate_cm.py' script.
// If you make any local change, they will be lost.

#include <aai_heart_src/Heart.h>


namespace aai_heart { namespace detail {

::automotive_ai::common::NewTrafficVehicles
    DummyServiceNewTraffic::OnGetTraffic(
    const ::google::protobuf::Empty& request
)
{
    return {};
}

void DummyServiceNewTraffic::OnGetTraffic(
    const ::google::protobuf::Empty& request,
    std::promise<::automotive_ai::common::NewTrafficVehicles> promise
)
{
    try
    {
        promise.set_value(OnGetTraffic(request));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

::google::protobuf::Empty
    DummyServiceNewTraffic::OnReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request
)
{
    return {};
}

void DummyServiceNewTraffic::OnReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    std::promise<::google::protobuf::Empty> promise
)
{
    try
    {
        promise.set_value(OnReportTraffic(request));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

::google::protobuf::Empty
    DummyServiceNewTraffic::OnStepNextEnd(
    const ::google::protobuf::Empty& request
)
{
    return {};
}

void DummyServiceNewTraffic::OnStepNextEnd(
    const ::google::protobuf::Empty& request,
    std::promise<::google::protobuf::Empty> promise
)
{
    try
    {
        promise.set_value(OnStepNextEnd(request));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

::automotive_ai::common::NewTrafficVehicles
    GrpcDummyServiceNewTraffic::GetTraffic(
    const ::google::protobuf::Empty& request
)
{
    return {};
}

grpc::Status GrpcDummyServiceNewTraffic::GetTraffic(
    grpc::ServerContext* context,
    const ::google::protobuf::Empty* request,
    ::automotive_ai::common::NewTrafficVehicles* response
)
{
    (void) context;
    try
    {
        *response = GetTraffic(*request);
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

::google::protobuf::Empty
    GrpcDummyServiceNewTraffic::ReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request
)
{
    return {};
}

grpc::Status GrpcDummyServiceNewTraffic::ReportTraffic(
    grpc::ServerContext* context,
    const ::automotive_ai::common::NewTrafficVehicles* request,
    ::google::protobuf::Empty* response
)
{
    (void) context;
    try
    {
        *response = ReportTraffic(*request);
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

::google::protobuf::Empty
    GrpcDummyServiceNewTraffic::StepNextEnd(
    const ::google::protobuf::Empty& request
)
{
    return {};
}

grpc::Status GrpcDummyServiceNewTraffic::StepNextEnd(
    grpc::ServerContext* context,
    const ::google::protobuf::Empty* request,
    ::google::protobuf::Empty* response
)
{
    (void) context;
    try
    {
        *response = StepNextEnd(*request);
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

GrpcFromServiceNewTraffic::GrpcFromServiceNewTraffic(std::shared_ptr<IServiceNewTraffic> proxy)
    : mProxy(std::move(proxy))
{
}

void GrpcFromServiceNewTraffic::setProxy(std::shared_ptr<IServiceNewTraffic> proxy)
{
    mProxy = std::move(proxy);
}

::automotive_ai::common::NewTrafficVehicles
    GrpcFromServiceNewTraffic::GetTraffic(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    std::promise<::automotive_ai::common::NewTrafficVehicles> promise;
    auto future = promise.get_future();
    mProxy->OnGetTraffic(request, std::move(promise));
    if (deadline && future.wait_until(*deadline) != std::future_status::ready)
        throw std::runtime_error("Timeout");
    return future.get();
}

grpc::Status GrpcFromServiceNewTraffic::GetTraffic(
    grpc::ServerContext* context,
    const ::google::protobuf::Empty* request,
    ::automotive_ai::common::NewTrafficVehicles* response
)
{
    try
    {
        *response = GetTraffic(*request, context->deadline());
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

::google::protobuf::Empty
    GrpcFromServiceNewTraffic::ReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    std::promise<::google::protobuf::Empty> promise;
    auto future = promise.get_future();
    mProxy->OnReportTraffic(request, std::move(promise));
    if (deadline && future.wait_until(*deadline) != std::future_status::ready)
        throw std::runtime_error("Timeout");
    return future.get();
}

grpc::Status GrpcFromServiceNewTraffic::ReportTraffic(
    grpc::ServerContext* context,
    const ::automotive_ai::common::NewTrafficVehicles* request,
    ::google::protobuf::Empty* response
)
{
    try
    {
        *response = ReportTraffic(*request, context->deadline());
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

::google::protobuf::Empty
    GrpcFromServiceNewTraffic::StepNextEnd(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    std::promise<::google::protobuf::Empty> promise;
    auto future = promise.get_future();
    mProxy->OnStepNextEnd(request, std::move(promise));
    if (deadline && future.wait_until(*deadline) != std::future_status::ready)
        throw std::runtime_error("Timeout");
    return future.get();
}

grpc::Status GrpcFromServiceNewTraffic::StepNextEnd(
    grpc::ServerContext* context,
    const ::google::protobuf::Empty* request,
    ::google::protobuf::Empty* response
)
{
    try
    {
        *response = StepNextEnd(*request, context->deadline());
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

GrpcProxyServiceNewTraffic::GrpcProxyServiceNewTraffic(std::shared_ptr<IStubNewTraffic> proxy)
    : mProxy(std::move(proxy))
{
}

void GrpcProxyServiceNewTraffic::setProxy(std::shared_ptr<IStubNewTraffic> proxy)
{
    mProxy = std::move(proxy);
}

::automotive_ai::common::NewTrafficVehicles
    GrpcProxyServiceNewTraffic::GetTraffic(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->GetTraffic(request, deadline);
}

grpc::Status GrpcProxyServiceNewTraffic::GetTraffic(
    grpc::ServerContext* context,
    const ::google::protobuf::Empty* request,
    ::automotive_ai::common::NewTrafficVehicles* response
)
{
    try
    {
        *response = GetTraffic(*request, context->deadline());
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

::google::protobuf::Empty
    GrpcProxyServiceNewTraffic::ReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->ReportTraffic(request, deadline);
}

grpc::Status GrpcProxyServiceNewTraffic::ReportTraffic(
    grpc::ServerContext* context,
    const ::automotive_ai::common::NewTrafficVehicles* request,
    ::google::protobuf::Empty* response
)
{
    try
    {
        *response = ReportTraffic(*request, context->deadline());
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

::google::protobuf::Empty
    GrpcProxyServiceNewTraffic::StepNextEnd(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->StepNextEnd(request, deadline);
}

grpc::Status GrpcProxyServiceNewTraffic::StepNextEnd(
    grpc::ServerContext* context,
    const ::google::protobuf::Empty* request,
    ::google::protobuf::Empty* response
)
{
    try
    {
        *response = StepNextEnd(*request, context->deadline());
    }
    catch(...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

ServiceNewTrafficFromGrpc::ServiceNewTrafficFromGrpc(std::shared_ptr<::automotive_ai::world::NewTrafficService::Service> proxy)
    : mProxy(std::move(proxy))
{
}

void ServiceNewTrafficFromGrpc::setProxy(std::shared_ptr<::automotive_ai::world::NewTrafficService::Service> proxy)
{
    mProxy = std::move(proxy);
}

void ServiceNewTrafficFromGrpc::OnGetTraffic(
    const ::google::protobuf::Empty& request,
    std::promise<::automotive_ai::common::NewTrafficVehicles> promise
)
{
    try
    {
        grpc::ServerContext context;
        ::automotive_ai::common::NewTrafficVehicles response;
        const grpc::Status status = mProxy->GetTraffic(&context, &request, &response);
        if(!status.ok())
            throw Error("OnGetTraffic failed - {}", status.error_message());
        promise.set_value(std::move(response));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

void ServiceNewTrafficFromGrpc::OnReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    std::promise<::google::protobuf::Empty> promise
)
{
    try
    {
        grpc::ServerContext context;
        ::google::protobuf::Empty response;
        const grpc::Status status = mProxy->ReportTraffic(&context, &request, &response);
        if(!status.ok())
            throw Error("OnReportTraffic failed - {}", status.error_message());
        promise.set_value(std::move(response));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

void ServiceNewTrafficFromGrpc::OnStepNextEnd(
    const ::google::protobuf::Empty& request,
    std::promise<::google::protobuf::Empty> promise
)
{
    try
    {
        grpc::ServerContext context;
        ::google::protobuf::Empty response;
        const grpc::Status status = mProxy->StepNextEnd(&context, &request, &response);
        if(!status.ok())
            throw Error("OnStepNextEnd failed - {}", status.error_message());
        promise.set_value(std::move(response));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

ServiceNewTrafficFromGrpcStub::ServiceNewTrafficFromGrpcStub(std::unique_ptr<::automotive_ai::world::NewTrafficService::StubInterface> proxy)
    : mProxy(std::move(proxy))
{
}

void ServiceNewTrafficFromGrpcStub::setProxy(std::unique_ptr<::automotive_ai::world::NewTrafficService::StubInterface> proxy)
{
    mProxy = std::move(proxy);
}

void ServiceNewTrafficFromGrpcStub::OnGetTraffic(
    const ::google::protobuf::Empty& request,
    std::promise<::automotive_ai::common::NewTrafficVehicles> promise
)
{
    try
    {
        grpc::ClientContext context;
        ::automotive_ai::common::NewTrafficVehicles response;
        const grpc::Status status = mProxy.load()->GetTraffic(&context, request, &response);
        if(!status.ok())
            throw Error("OnGetTraffic failed - {}", status.error_message());
        promise.set_value(std::move(response));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

void ServiceNewTrafficFromGrpcStub::OnReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    std::promise<::google::protobuf::Empty> promise
)
{
    try
    {
        grpc::ClientContext context;
        ::google::protobuf::Empty response;
        const grpc::Status status = mProxy.load()->ReportTraffic(&context, request, &response);
        if(!status.ok())
            throw Error("OnReportTraffic failed - {}", status.error_message());
        promise.set_value(std::move(response));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

void ServiceNewTrafficFromGrpcStub::OnStepNextEnd(
    const ::google::protobuf::Empty& request,
    std::promise<::google::protobuf::Empty> promise
)
{
    try
    {
        grpc::ClientContext context;
        ::google::protobuf::Empty response;
        const grpc::Status status = mProxy.load()->StepNextEnd(&context, request, &response);
        if(!status.ok())
            throw Error("OnStepNextEnd failed - {}", status.error_message());
        promise.set_value(std::move(response));
    }
    catch (...)
    {
        promise.set_exception(std::current_exception());
    }
}

::automotive_ai::common::NewTrafficVehicles
    DummyStubNewTraffic::GetTraffic(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return {};
}

std::future<::automotive_ai::common::NewTrafficVehicles>
    DummyStubNewTraffic::GetTrafficAsync(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    std::promise<::automotive_ai::common::NewTrafficVehicles> promise;
    promise.set_value({});
    return promise.get_future();
}

::google::protobuf::Empty
    DummyStubNewTraffic::ReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return {};
}

std::future<::google::protobuf::Empty>
    DummyStubNewTraffic::ReportTrafficAsync(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    std::promise<::google::protobuf::Empty> promise;
    promise.set_value({});
    return promise.get_future();
}

::google::protobuf::Empty
    DummyStubNewTraffic::StepNextEnd(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return {};
}

std::future<::google::protobuf::Empty>
    DummyStubNewTraffic::StepNextEndAsync(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    std::promise<::google::protobuf::Empty> promise;
    promise.set_value({});
    return promise.get_future();
}

grpc::Status GrpcDummyStubNewTraffic::GetTraffic(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    ::automotive_ai::common::NewTrafficVehicles* response
)
{
    return grpc::Status::OK;
}

grpc::Status GrpcDummyStubNewTraffic::ReportTraffic(
    grpc::ClientContext* context,
    const ::automotive_ai::common::NewTrafficVehicles& request,
    ::google::protobuf::Empty* response
)
{
    return grpc::Status::OK;
}

grpc::Status GrpcDummyStubNewTraffic::StepNextEnd(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    ::google::protobuf::Empty* response
)
{
    return grpc::Status::OK;
}

grpc::ClientAsyncResponseReaderInterface<::automotive_ai::common::NewTrafficVehicles>*
    GrpcDummyStubNewTraffic::AsyncGetTrafficRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("AsyncGetTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::automotive_ai::common::NewTrafficVehicles>*
    GrpcDummyStubNewTraffic::PrepareAsyncGetTrafficRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("PrepareAsyncGetTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcDummyStubNewTraffic::AsyncReportTrafficRaw(
    grpc::ClientContext* context,
    const ::automotive_ai::common::NewTrafficVehicles& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("AsyncReportTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcDummyStubNewTraffic::PrepareAsyncReportTrafficRaw(
    grpc::ClientContext* context,
    const ::automotive_ai::common::NewTrafficVehicles& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("PrepareAsyncReportTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcDummyStubNewTraffic::AsyncStepNextEndRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("AsyncStepNextEndRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcDummyStubNewTraffic::PrepareAsyncStepNextEndRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("PrepareAsyncStepNextEndRaw is unsupported");
}

GrpcProxyStubNewTraffic::GrpcProxyStubNewTraffic(grpc::CompletionQueue& cq, const std::shared_ptr<grpc::Channel>& channel)
    : mCq(cq)
    , mProxy(::automotive_ai::world::NewTrafficService::NewStub(channel))
{
}

::automotive_ai::common::NewTrafficVehicles
    GrpcProxyStubNewTraffic::GetTraffic(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    ::automotive_ai::common::NewTrafficVehicles response;

    grpc::ClientContext context;
    if (deadline)
        context.set_deadline(*deadline);

    const grpc::Status status = mProxy->GetTraffic(&context, request, &response);
    if (!status.ok())
        throw Error("({:d}) {}", status.error_code(), status.error_message());

    return response;
}

std::future<::automotive_ai::common::NewTrafficVehicles>
    GrpcProxyStubNewTraffic::GetTrafficAsync(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return postStubAsyncMethod(
        mCq, *mProxy,
        &::automotive_ai::world::NewTrafficService::Stub::AsyncGetTraffic,
        request, deadline
    );
}

::google::protobuf::Empty
    GrpcProxyStubNewTraffic::ReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    ::google::protobuf::Empty response;

    grpc::ClientContext context;
    if (deadline)
        context.set_deadline(*deadline);

    const grpc::Status status = mProxy->ReportTraffic(&context, request, &response);
    if (!status.ok())
        throw Error("({:d}) {}", status.error_code(), status.error_message());

    return response;
}

std::future<::google::protobuf::Empty>
    GrpcProxyStubNewTraffic::ReportTrafficAsync(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return postStubAsyncMethod(
        mCq, *mProxy,
        &::automotive_ai::world::NewTrafficService::Stub::AsyncReportTraffic,
        request, deadline
    );
}

::google::protobuf::Empty
    GrpcProxyStubNewTraffic::StepNextEnd(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    ::google::protobuf::Empty response;

    grpc::ClientContext context;
    if (deadline)
        context.set_deadline(*deadline);

    const grpc::Status status = mProxy->StepNextEnd(&context, request, &response);
    if (!status.ok())
        throw Error("({:d}) {}", status.error_code(), status.error_message());

    return response;
}

std::future<::google::protobuf::Empty>
    GrpcProxyStubNewTraffic::StepNextEndAsync(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return postStubAsyncMethod(
        mCq, *mProxy,
        &::automotive_ai::world::NewTrafficService::Stub::AsyncStepNextEnd,
        request, deadline
    );
}

GrpcFromStubNewTraffic::GrpcFromStubNewTraffic(std::shared_ptr<IStubNewTraffic> proxy)
    : mProxy(std::move(proxy))
{
}

void GrpcFromStubNewTraffic::setProxy(std::shared_ptr<IStubNewTraffic> proxy)
{
    mProxy = std::move(proxy);
}

grpc::Status GrpcFromStubNewTraffic::GetTraffic(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    ::automotive_ai::common::NewTrafficVehicles* response
)
{
    try
    {
        *response = mProxy->GetTraffic(request, context->deadline());
    }
    catch (...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

grpc::Status GrpcFromStubNewTraffic::ReportTraffic(
    grpc::ClientContext* context,
    const ::automotive_ai::common::NewTrafficVehicles& request,
    ::google::protobuf::Empty* response
)
{
    try
    {
        *response = mProxy->ReportTraffic(request, context->deadline());
    }
    catch (...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

grpc::Status GrpcFromStubNewTraffic::StepNextEnd(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    ::google::protobuf::Empty* response
)
{
    try
    {
        *response = mProxy->StepNextEnd(request, context->deadline());
    }
    catch (...)
    {
        return makeGrpcStatusFromException(std::current_exception(), BOOST_CURRENT_FUNCTION);
    }
    return grpc::Status::OK;
}

grpc::ClientAsyncResponseReaderInterface<::automotive_ai::common::NewTrafficVehicles>*
    GrpcFromStubNewTraffic::AsyncGetTrafficRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("AsyncGetTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::automotive_ai::common::NewTrafficVehicles>*
    GrpcFromStubNewTraffic::PrepareAsyncGetTrafficRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("PrepareAsyncGetTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcFromStubNewTraffic::AsyncReportTrafficRaw(
    grpc::ClientContext* context,
    const ::automotive_ai::common::NewTrafficVehicles& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("AsyncReportTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcFromStubNewTraffic::PrepareAsyncReportTrafficRaw(
    grpc::ClientContext* context,
    const ::automotive_ai::common::NewTrafficVehicles& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("PrepareAsyncReportTrafficRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcFromStubNewTraffic::AsyncStepNextEndRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("AsyncStepNextEndRaw is unsupported");
}

grpc::ClientAsyncResponseReaderInterface<::google::protobuf::Empty>*
    GrpcFromStubNewTraffic::PrepareAsyncStepNextEndRaw(
    grpc::ClientContext* context,
    const ::google::protobuf::Empty& request,
    grpc::CompletionQueue* cq
)
{
    throw Error("PrepareAsyncStepNextEndRaw is unsupported");
}

ProxyStubNewTraffic::ProxyStubNewTraffic(std::shared_ptr<IStubNewTraffic> proxy)
    : mProxy(std::move(proxy))
{
}

void ProxyStubNewTraffic::setProxy(std::shared_ptr<IStubNewTraffic> proxy)
{
    mProxy = std::move(proxy);
}

::automotive_ai::common::NewTrafficVehicles
    ProxyStubNewTraffic::GetTraffic(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->GetTraffic(request, deadline);
}

std::future<::automotive_ai::common::NewTrafficVehicles>
    ProxyStubNewTraffic::GetTrafficAsync(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->GetTrafficAsync(request, deadline);
}

::google::protobuf::Empty
    ProxyStubNewTraffic::ReportTraffic(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->ReportTraffic(request, deadline);
}

std::future<::google::protobuf::Empty>
    ProxyStubNewTraffic::ReportTrafficAsync(
    const ::automotive_ai::common::NewTrafficVehicles& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->ReportTrafficAsync(request, deadline);
}

::google::protobuf::Empty
    ProxyStubNewTraffic::StepNextEnd(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->StepNextEnd(request, deadline);
}

std::future<::google::protobuf::Empty>
    ProxyStubNewTraffic::StepNextEndAsync(
    const ::google::protobuf::Empty& request,
    boost::optional<std::chrono::system_clock::time_point> deadline
)
{
    return mProxy->StepNextEndAsync(request, deadline);
}

const std::map<Registry::Name, Registry::Type>& Registry::getStubs() const
{
    return mStubs;
}
const std::map<Registry::Name, Registry::Type>& Registry::getServices() const
{
    return mServices;
}

std::shared_ptr<IStubNewTraffic> Registry::registerStubNewTraffic(const Name& name)
{
    auto parib = mStubs.emplace(name, "NewTraffic");
    if(parib.second)
    {
        // fmt::print("StubNewTraffic '{}' (pid: {:d})\n", name, boost::this_process::get_id());
        return mStubsNewTraffic.emplace(name, std::make_shared<ProxyStubNewTraffic>()).first->second;
    }

    const Type& type = parib.first->second;
    if(type != "NewTraffic")
        throw Error("Stub '{}' already registered as '{}' (not 'NewTraffic').", name, type);

    return mStubsNewTraffic.at(name);
}

void Registry::registerServiceNewTraffic(const Name& name, std::shared_ptr<IServiceNewTraffic> service)
{
    auto parib = mServices.emplace(name, "NewTraffic");
    if(!parib.second)
        throw Error("Service '{}' for 'NewTraffic' already registered as '{}'.", name, parib.first->second);

    // fmt::print("ServiceNewTraffic '{}' (pid: {:d})\n", name, boost::this_process::get_id());
    mServicesNewTraffic.emplace(name, std::make_shared<GrpcFromServiceNewTraffic>(std::move(service)));
}


std::map<Registry::Addr, grpc::ServerBuilder> Registry::applyServiceMapping(
    const ::google::protobuf::Map<std::string, std::string>& mapping
)
{
    std::map<Addr, grpc::ServerBuilder> result;

    #pragma region ServiceMapping

    for (auto& i : mServicesNewTraffic)
        result[mapping.at(i.first)].RegisterService(i.second.get());

    #pragma endregion

    return result;
}

void Registry::applyStubMapping(
    grpc::CompletionQueue& cq,
    const ::google::protobuf::Map<std::string, std::string>& mapping,
    const std::map<Addr, std::shared_ptr<grpc::Channel>>& channels
)
{
    #pragma region StubMapping

    for (auto& i : mStubsNewTraffic)
        i.second->setProxy(std::make_shared<GrpcProxyStubNewTraffic>(cq, channels.at(mapping.at(i.first))));

    #pragma endregion
}

void Registry::reset()
{
    mStubs.clear();
    mServices.clear();

    #pragma region Reset

    for (auto& i : mStubsNewTraffic)
        i.second->setProxy(std::make_shared<DummyStubNewTraffic>());
    mStubsNewTraffic.clear();

    mServicesNewTraffic.clear();

    #pragma endregion
}

} }

namespace aai_heart {

std::unique_ptr<IServiceNewTraffic> makeServiceNewTrafficFromGrpc(std::shared_ptr<::automotive_ai::world::NewTrafficService::Service> proxy)
{
    return std::make_unique<detail::ServiceNewTrafficFromGrpc>(std::move(proxy));
}

std::unique_ptr<::automotive_ai::world::NewTrafficService::StubInterface> makeGrpcFromStubNewTraffic(std::shared_ptr<IStubNewTraffic> proxy)
{
    return std::make_unique<detail::GrpcFromStubNewTraffic>(std::move(proxy));
}


}