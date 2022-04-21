// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: todo.proto
#ifndef GRPC_todo_2eproto__INCLUDED
#define GRPC_todo_2eproto__INCLUDED

#include "todo.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
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

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

namespace protos {

// Create a TodoManager service with the following RPCs:
// - AddTodo: takes a TodoItem and returns a TodoResponse
// - EditTodo: takes a TodoItem and returns a TodoResponse
// - GetTodo: takes an Empty message and returns a TodoList
//
class TodoManager final {
 public:
  static constexpr char const* service_full_name() {
    return "protos.TodoManager";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status AddTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::protos::TodoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>> AsyncAddTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>>(AsyncAddTodoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>> PrepareAsyncAddTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>>(PrepareAsyncAddTodoRaw(context, request, cq));
    }
    virtual ::grpc::Status EditTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::protos::TodoResponse* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>> AsyncEditTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>>(AsyncEditTodoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>> PrepareAsyncEditTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>>(PrepareAsyncEditTodoRaw(context, request, cq));
    }
    virtual ::grpc::Status GetTodo(::grpc::ClientContext* context, const ::protos::Empty& request, ::protos::TodoList* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoList>> AsyncGetTodo(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoList>>(AsyncGetTodoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoList>> PrepareAsyncGetTodo(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoList>>(PrepareAsyncGetTodoRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void AddTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void AddTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void AddTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void AddTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void EditTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void EditTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) = 0;
      virtual void EditTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void EditTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void GetTodo(::grpc::ClientContext* context, const ::protos::Empty* request, ::protos::TodoList* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoList* response, std::function<void(::grpc::Status)>) = 0;
      virtual void GetTodo(::grpc::ClientContext* context, const ::protos::Empty* request, ::protos::TodoList* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void GetTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoList* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>* AsyncAddTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>* PrepareAsyncAddTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>* AsyncEditTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoResponse>* PrepareAsyncEditTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoList>* AsyncGetTodoRaw(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::protos::TodoList>* PrepareAsyncGetTodoRaw(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status AddTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::protos::TodoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>> AsyncAddTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>>(AsyncAddTodoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>> PrepareAsyncAddTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>>(PrepareAsyncAddTodoRaw(context, request, cq));
    }
    ::grpc::Status EditTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::protos::TodoResponse* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>> AsyncEditTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>>(AsyncEditTodoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>> PrepareAsyncEditTodo(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>>(PrepareAsyncEditTodoRaw(context, request, cq));
    }
    ::grpc::Status GetTodo(::grpc::ClientContext* context, const ::protos::Empty& request, ::protos::TodoList* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoList>> AsyncGetTodo(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoList>>(AsyncGetTodoRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoList>> PrepareAsyncGetTodo(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::protos::TodoList>>(PrepareAsyncGetTodoRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void AddTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) override;
      void AddTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) override;
      void AddTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void AddTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void EditTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) override;
      void EditTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, std::function<void(::grpc::Status)>) override;
      void EditTodo(::grpc::ClientContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void EditTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoResponse* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void GetTodo(::grpc::ClientContext* context, const ::protos::Empty* request, ::protos::TodoList* response, std::function<void(::grpc::Status)>) override;
      void GetTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoList* response, std::function<void(::grpc::Status)>) override;
      void GetTodo(::grpc::ClientContext* context, const ::protos::Empty* request, ::protos::TodoList* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void GetTodo(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::protos::TodoList* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
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
    ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>* AsyncAddTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>* PrepareAsyncAddTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>* AsyncEditTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::TodoResponse>* PrepareAsyncEditTodoRaw(::grpc::ClientContext* context, const ::protos::TodoItem& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::TodoList>* AsyncGetTodoRaw(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::protos::TodoList>* PrepareAsyncGetTodoRaw(::grpc::ClientContext* context, const ::protos::Empty& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_AddTodo_;
    const ::grpc::internal::RpcMethod rpcmethod_EditTodo_;
    const ::grpc::internal::RpcMethod rpcmethod_GetTodo_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status AddTodo(::grpc::ServerContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response);
    virtual ::grpc::Status EditTodo(::grpc::ServerContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response);
    virtual ::grpc::Status GetTodo(::grpc::ServerContext* context, const ::protos::Empty* request, ::protos::TodoList* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_AddTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_AddTodo() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_AddTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AddTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAddTodo(::grpc::ServerContext* context, ::protos::TodoItem* request, ::grpc::ServerAsyncResponseWriter< ::protos::TodoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_EditTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_EditTodo() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_EditTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EditTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestEditTodo(::grpc::ServerContext* context, ::protos::TodoItem* request, ::grpc::ServerAsyncResponseWriter< ::protos::TodoResponse>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_GetTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_GetTodo() {
      ::grpc::Service::MarkMethodAsync(2);
    }
    ~WithAsyncMethod_GetTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTodo(::grpc::ServerContext* /*context*/, const ::protos::Empty* /*request*/, ::protos::TodoList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTodo(::grpc::ServerContext* context, ::protos::Empty* request, ::grpc::ServerAsyncResponseWriter< ::protos::TodoList>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_AddTodo<WithAsyncMethod_EditTodo<WithAsyncMethod_GetTodo<Service > > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_AddTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_AddTodo() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::protos::TodoItem, ::protos::TodoResponse>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response) { return this->AddTodo(context, request, response); }));}
    void SetMessageAllocatorFor_AddTodo(
        ::grpc::experimental::MessageAllocator< ::protos::TodoItem, ::protos::TodoResponse>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::protos::TodoItem, ::protos::TodoResponse>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_AddTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AddTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* AddTodo(::grpc::experimental::CallbackServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_EditTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_EditTodo() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::protos::TodoItem, ::protos::TodoResponse>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::protos::TodoItem* request, ::protos::TodoResponse* response) { return this->EditTodo(context, request, response); }));}
    void SetMessageAllocatorFor_EditTodo(
        ::grpc::experimental::MessageAllocator< ::protos::TodoItem, ::protos::TodoResponse>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::protos::TodoItem, ::protos::TodoResponse>*>(
          ::grpc::Service::experimental().GetHandler(1))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_EditTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EditTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* EditTodo(::grpc::experimental::CallbackServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_GetTodo() {
      ::grpc::Service::experimental().MarkMethodCallback(2,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::protos::Empty, ::protos::TodoList>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::protos::Empty* request, ::protos::TodoList* response) { return this->GetTodo(context, request, response); }));}
    void SetMessageAllocatorFor_GetTodo(
        ::grpc::experimental::MessageAllocator< ::protos::Empty, ::protos::TodoList>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::protos::Empty, ::protos::TodoList>*>(
          ::grpc::Service::experimental().GetHandler(2))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTodo(::grpc::ServerContext* /*context*/, const ::protos::Empty* /*request*/, ::protos::TodoList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* GetTodo(::grpc::experimental::CallbackServerContext* /*context*/, const ::protos::Empty* /*request*/, ::protos::TodoList* /*response*/) { return nullptr; }
  };
  typedef ExperimentalWithCallbackMethod_AddTodo<ExperimentalWithCallbackMethod_EditTodo<ExperimentalWithCallbackMethod_GetTodo<Service > > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_AddTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_AddTodo() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_AddTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AddTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_EditTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_EditTodo() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_EditTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EditTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_GetTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_GetTodo() {
      ::grpc::Service::MarkMethodGeneric(2);
    }
    ~WithGenericMethod_GetTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTodo(::grpc::ServerContext* /*context*/, const ::protos::Empty* /*request*/, ::protos::TodoList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_AddTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_AddTodo() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_AddTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AddTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAddTodo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_EditTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_EditTodo() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_EditTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EditTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestEditTodo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_GetTodo() {
      ::grpc::Service::MarkMethodRaw(2);
    }
    ~WithRawMethod_GetTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTodo(::grpc::ServerContext* /*context*/, const ::protos::Empty* /*request*/, ::protos::TodoList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetTodo(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(2, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_AddTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_AddTodo() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->AddTodo(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_AddTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AddTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* AddTodo(::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_EditTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_EditTodo() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->EditTodo(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_EditTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status EditTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* EditTodo(::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_GetTodo() {
      ::grpc::Service::experimental().MarkMethodRawCallback(2,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->GetTodo(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_GetTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetTodo(::grpc::ServerContext* /*context*/, const ::protos::Empty* /*request*/, ::protos::TodoList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* GetTodo(::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AddTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_AddTodo() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::protos::TodoItem, ::protos::TodoResponse>(std::bind(&WithStreamedUnaryMethod_AddTodo<BaseClass>::StreamedAddTodo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AddTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AddTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAddTodo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::TodoItem,::protos::TodoResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_EditTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_EditTodo() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::protos::TodoItem, ::protos::TodoResponse>(std::bind(&WithStreamedUnaryMethod_EditTodo<BaseClass>::StreamedEditTodo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_EditTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status EditTodo(::grpc::ServerContext* /*context*/, const ::protos::TodoItem* /*request*/, ::protos::TodoResponse* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedEditTodo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::TodoItem,::protos::TodoResponse>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetTodo : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_GetTodo() {
      ::grpc::Service::MarkMethodStreamed(2,
        new ::grpc::internal::StreamedUnaryHandler< ::protos::Empty, ::protos::TodoList>(std::bind(&WithStreamedUnaryMethod_GetTodo<BaseClass>::StreamedGetTodo, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_GetTodo() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetTodo(::grpc::ServerContext* /*context*/, const ::protos::Empty* /*request*/, ::protos::TodoList* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetTodo(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::protos::Empty,::protos::TodoList>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_AddTodo<WithStreamedUnaryMethod_EditTodo<WithStreamedUnaryMethod_GetTodo<Service > > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_AddTodo<WithStreamedUnaryMethod_EditTodo<WithStreamedUnaryMethod_GetTodo<Service > > > StreamedService;
};

}  // namespace protos


#endif  // GRPC_todo_2eproto__INCLUDED
