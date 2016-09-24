#include "test.h"


#include "glog/logging.h"


Test* Test::instance = nullptr;

Test::Test()
{
}

Test::~Test()
{
  if (instance)
  {
    delete instance;
    instance = nullptr;
  }
}

void Test::initGlog(const char* p)
{
  google::InitGoogleLogging(p);
  FLAGS_minloglevel = 0;
  //google::LogMessage::Flush();
  google::SetLogDestination(0, "./INFO.log");
  google::SetLogDestination(1, "./WARNING.log");
  LOG(INFO) << "hello glog!";
  LOG(WARNING) << "hello world";
}