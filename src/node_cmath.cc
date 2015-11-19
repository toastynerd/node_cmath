#include <node.h>
#include "node_cmath.h"

namespace NodeCMath {

void Init(v8::Local<v8::Object> exports) {
  //power functions
  NODE_SET_METHOD(exports, "pow", Pow);
  NODE_SET_METHOD(exports, "sqrt", Sqrt);
  NODE_SET_METHOD(exports, "cbrt", Cbrt);
  NODE_SET_METHOD(exports, "hypot", Hypot);
};

NODE_MODULE(node_cmath, Init);

}
