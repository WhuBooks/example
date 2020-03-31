// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: video.proto
#ifndef GRPC_video_2eproto__INCLUDED
#define GRPC_video_2eproto__INCLUDED

#include "video.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace books {

class VideoService final {
 public:
  static constexpr char const* service_full_name() {
    return "books.VideoService";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    std::unique_ptr< ::grpc::ClientReaderInterface< ::books::VideoResponse>> Foo(::grpc::ClientContext* context, const ::books::VideoRequest& request) {
      return std::unique_ptr< ::grpc::ClientReaderInterface< ::books::VideoResponse>>(FooRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::books::VideoResponse>> AsyncFoo(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::books::VideoResponse>>(AsyncFooRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::books::VideoResponse>> PrepareAsyncFoo(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReaderInterface< ::books::VideoResponse>>(PrepareAsyncFooRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void Foo(::grpc::ClientContext* context, ::books::VideoRequest* request, ::grpc::ClientReadReactor< ::books::VideoResponse>* reactor) = 0;
      #else
      virtual void Foo(::grpc::ClientContext* context, ::books::VideoRequest* request, ::grpc::experimental::ClientReadReactor< ::books::VideoResponse>* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientReaderInterface< ::books::VideoResponse>* FooRaw(::grpc::ClientContext* context, const ::books::VideoRequest& request) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::books::VideoResponse>* AsyncFooRaw(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncReaderInterface< ::books::VideoResponse>* PrepareAsyncFooRaw(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    std::unique_ptr< ::grpc::ClientReader< ::books::VideoResponse>> Foo(::grpc::ClientContext* context, const ::books::VideoRequest& request) {
      return std::unique_ptr< ::grpc::ClientReader< ::books::VideoResponse>>(FooRaw(context, request));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::books::VideoResponse>> AsyncFoo(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::books::VideoResponse>>(AsyncFooRaw(context, request, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncReader< ::books::VideoResponse>> PrepareAsyncFoo(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncReader< ::books::VideoResponse>>(PrepareAsyncFooRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void Foo(::grpc::ClientContext* context, ::books::VideoRequest* request, ::grpc::ClientReadReactor< ::books::VideoResponse>* reactor) override;
      #else
      void Foo(::grpc::ClientContext* context, ::books::VideoRequest* request, ::grpc::experimental::ClientReadReactor< ::books::VideoResponse>* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientReader< ::books::VideoResponse>* FooRaw(::grpc::ClientContext* context, const ::books::VideoRequest& request) override;
    ::grpc::ClientAsyncReader< ::books::VideoResponse>* AsyncFooRaw(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncReader< ::books::VideoResponse>* PrepareAsyncFooRaw(::grpc::ClientContext* context, const ::books::VideoRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_Foo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status Foo(::grpc::ServerContext* context, const ::books::VideoRequest* request, ::grpc::ServerWriter< ::books::VideoResponse>* writer);
  };
  template <class BaseClass>
  class WithAsyncMethod_Foo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_Foo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_Foo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Foo(::grpc::ServerContext* /*context*/, const ::books::VideoRequest* /*request*/, ::grpc::ServerWriter< ::books::VideoResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFoo(::grpc::ServerContext* context, ::books::VideoRequest* request, ::grpc::ServerAsyncWriter< ::books::VideoResponse>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_Foo<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_Foo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_Foo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackServerStreamingHandler< ::books::VideoRequest, ::books::VideoResponse>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::books::VideoRequest* request) { return this->Foo(context, request); }));
    }
    ~ExperimentalWithCallbackMethod_Foo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Foo(::grpc::ServerContext* /*context*/, const ::books::VideoRequest* /*request*/, ::grpc::ServerWriter< ::books::VideoResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerWriteReactor< ::books::VideoResponse>* Foo(
      ::grpc::CallbackServerContext* /*context*/, const ::books::VideoRequest* /*request*/)
    #else
    virtual ::grpc::experimental::ServerWriteReactor< ::books::VideoResponse>* Foo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::books::VideoRequest* /*request*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_Foo<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_Foo<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_Foo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_Foo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_Foo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Foo(::grpc::ServerContext* /*context*/, const ::books::VideoRequest* /*request*/, ::grpc::ServerWriter< ::books::VideoResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_Foo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_Foo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_Foo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Foo(::grpc::ServerContext* /*context*/, const ::books::VideoRequest* /*request*/, ::grpc::ServerWriter< ::books::VideoResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestFoo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncWriter< ::grpc::ByteBuffer>* writer, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncServerStreaming(0, context, request, writer, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_Foo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_Foo() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackServerStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const::grpc::ByteBuffer* request) { return this->Foo(context, request); }));
    }
    ~ExperimentalWithRawCallbackMethod_Foo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status Foo(::grpc::ServerContext* /*context*/, const ::books::VideoRequest* /*request*/, ::grpc::ServerWriter< ::books::VideoResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerWriteReactor< ::grpc::ByteBuffer>* Foo(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)
    #else
    virtual ::grpc::experimental::ServerWriteReactor< ::grpc::ByteBuffer>* Foo(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/)
    #endif
      { return nullptr; }
  };
  typedef Service StreamedUnaryService;
  template <class BaseClass>
  class WithSplitStreamingMethod_Foo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithSplitStreamingMethod_Foo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::SplitServerStreamingHandler< ::books::VideoRequest, ::books::VideoResponse>(std::bind(&WithSplitStreamingMethod_Foo<BaseClass>::StreamedFoo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithSplitStreamingMethod_Foo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status Foo(::grpc::ServerContext* /*context*/, const ::books::VideoRequest* /*request*/, ::grpc::ServerWriter< ::books::VideoResponse>* /*writer*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with split streamed
    virtual ::grpc::Status StreamedFoo(::grpc::ServerContext* context, ::grpc::ServerSplitStreamer< ::books::VideoRequest,::books::VideoResponse>* server_split_streamer) = 0;
  };
  typedef WithSplitStreamingMethod_Foo<Service > SplitStreamedService;
  typedef WithSplitStreamingMethod_Foo<Service > StreamedService;
};

}  // namespace books


#endif  // GRPC_video_2eproto__INCLUDED
