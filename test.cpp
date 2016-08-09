#include "test.h"

Test* Test::instance = nullptr;

//Test::Test()
//{
//}

Test::~Test()
{
	if(instance)
	{
		delete instance;
		instance = nullptr;
	}
}

void Test::initGlog(const char* p)
{
	google::InitGoogleLogging(p);
	google::SetLogDestination(0, "./test.log");
	LOG(INFO) << "hello glog!";
}