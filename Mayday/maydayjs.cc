#include <node.h>
#include <nan.h>
#include <v8.h>
#include "keyboard.h"
#include "WMKeys.h"
using namespace v8;

NAN_METHOD(SendKey)
{
	NanScope();
	SendKey(H);
}

void init(Handle<Object> target)
{

	target->Set(NanNew<String>("SendKey"),
		NanNew<FunctionTemplate>(SendKey)->GetFunction());
}
NODE_MODULE(MaydayJS, init)