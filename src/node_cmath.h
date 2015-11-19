#ifndef NODE_CMATH_H
#define NODE_CMATH_H

#include <node.h>
#include <math.h>

namespace NodeCMath {

void Pow(const v8::FunctionCallbackInfo<v8::Value>& args);
void Sqrt(const v8::FunctionCallbackInfo<v8::Value>& args);
void Cbrt(const v8::FunctionCallbackInfo<v8::Value>& args);
void Hypot(const v8::FunctionCallbackInfo<v8::Value>& args);

}

#endif
