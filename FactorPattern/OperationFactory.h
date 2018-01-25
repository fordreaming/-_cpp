#pragma once
#ifndef _OPERATION_FACTORY_H_
#define _OPERATION_FACTORY_H_
#include "Operation.h"
#include <iostream>
#include <string>
using std::string;

class OperationFactory
{
public:
	//ע���C#�Ĳ�֮ͬ��
    //C++��Ҫͨ��ָ����в���
	//C#��new�����ö��������ֵ����Ҳ��������������
	static Operation *CreateOperate(char operate);

};
#endif _OPERATION_FACTORY_H_