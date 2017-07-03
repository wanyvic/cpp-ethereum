#pragma once
#include<Windows.h>
#include<boost/thread/win32/condition_variable.hpp>
namespace pack{
	extern bool isInitOver;
	extern int deviceCount;
	extern boost::condition_variable cond;
}