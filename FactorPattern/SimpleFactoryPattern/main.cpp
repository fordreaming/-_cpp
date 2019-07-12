/******************************************************** 
	* @file    : main.cpp
	* @brief   : �����򵥹���ģʽ��������
	* @details : 
	* @author  : fordreaming1@yeah.net
	* @date    : 2019-1-23
*********************************************************/

#include <iostream>
#include "Factory.hpp"

using namespace std;

int main()
{
	SingleCore* singleCore;
	Factory* factory = new Factory;
	singleCore = factory->CreateSingleCore(COREA);
	singleCore->Show();
	return 0;
}   
 
