/*
  Copyright (c) 2016 by unibosy@gmail.com 
  This file is part of the unibosy library. https://github.com/bitodd

  This software is distributed under a license. The full license
  agreement can be found in the file LICENSE in this distribution.
  This software may not be copied, modified, sold or distributed
  other than expressed in the named license agreement.

  This software is distributed without any warranty.
*/
#ifndef TEST_h__
#define TEST_h__

#include "src\windows\glog\logging.h"

class Test
{
public:
	~Test();

	static Test* GetInstance() 
	{
		if (instance == nullptr)
			instance = new Test;
		return instance;
	}
	void initGlog(const char* p);
private:
	static Test* instance;
	//Test();
};

#endif // TEST_h__
