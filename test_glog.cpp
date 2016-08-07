// test_glog.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "src\windows\glog\logging.h"

int main(int argc, char* argv[])
{
	//Initialize Google's logging library
	google::InitGoogleLogging(argv[0]);
	google::SetLogDestination(0, "./error.log");
	LOG(INFO) << "hello glog!" ;
	getchar();
    return 0;
}

