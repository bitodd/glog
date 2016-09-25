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
  FLAGS_logbufsecs = 0;
  //google::LogMessage::Flush();
  google::SetLogDestination(0, "./test.log");
  //google::SetLogDestination(1, "./WARNING.log");
  LOG(INFO) << "hello glog!";
  LOG(INFO) << "hello google!";
  LOG(WARNING) << "hello world";
}