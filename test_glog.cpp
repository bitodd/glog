// test_glog.cpp : Defines the entry point for the console application.
//

#include "test.h"


#include "string"
#include "iostream"


int main(int argc, char* argv[])
{
	//Initialize Google's logging library
	Test::GetInstance()->initGlog(argv[0]);
	std::cout << "end~" << std::endl;
	getchar();
    return 0;
}

