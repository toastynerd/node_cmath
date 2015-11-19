#include <node.h>
#include "node_cmath.h"

namespace NodeCMath {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;
using v8::Number;
using v8::Exception;


void Pow(const FunctionCallbackInfo<Value>& args) {
  Isolate *isolate = args.GetIsolate();
  if (args.Length() != 2) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "function pow requires two arguments")
    ));
    return;
  }

  if (!args[0]->IsNumber() || !args[1]->IsNumber()) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "arguments must be numbers")
    ));
    return;
  }

  double result = pow(args[0]->NumberValue(), args[1]->NumberValue());
  Local<Number> num = Number::New(isolate, result);
  args.GetReturnValue().Set(num);
};

void Sqrt(const FunctionCallbackInfo<Value>& args) {
  Isolate *isolate = args.GetIsolate();

  if (args.Length() != 1) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "function sqrt takes exactly one argument")
    ));
    return;
  }

  if (!args[0]->IsNumber()) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "argument not a number")
    ));
    return;
  }

  double result = sqrt(args[0]->NumberValue());
  Local<Number> num = Number::New(isolate, result);
  args.GetReturnValue().Set(num);
};

void Cbrt(const FunctionCallbackInfo<Value>& args) {
  Isolate *isolate = args.GetIsolate();

  if (args.Length() != 1) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "function cbrt takes exactly one argument")
    ));
    return;
  }

  if (!args[0]->IsNumber()) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "function cbrt needs a number")
    ));
    return;
  }

  double result = cbrt(args[0]->NumberValue());
  Local<Number> num = Number::New(isolate, result);
  args.GetReturnValue().Set(num); 
};

void Hypot(const FunctionCallbackInfo<Value>& args) {
  Isolate *isolate = args.GetIsolate();

  if (args.Length() != 2) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "function hypot takes exactly two arguments")
    ));
    return;
  } 

  if (!args[0]->IsNumber() || !args[0]->IsNumber()) {
    isolate->ThrowException(Exception::TypeError(
      String::NewFromUtf8(isolate, "hypot only works on numbers, duh")
    )); 
    return;
  }

  double result = hypot(args[0]->NumberValue(), args[1]->NumberValue());
  Local<Number> num = Number::New(isolate, result);
  args.GetReturnValue().Set(num);
}

}
