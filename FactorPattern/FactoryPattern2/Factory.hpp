//Ψһ�Ĺ������������������ͺŵĴ������ˣ����ڲ��ж� 
//����ģʽ��
//����һ�����ڴ�������Ľӿڣ����������ʵ�����ĸ���
//ʹ���ʵ�����ӳٵ�����

//ȱ�㣺ÿ����һ�ֲ�Ʒ����Ҫ����һ������Ĺ���
//����ڼ򵥹���ģʽ������ģʽ��Ҫ������ඨ�壻

#ifndef _FACTORY_H_
#define _FACTORY_H_
#include "SingleCoreA.hpp"
#include "SingleCoreB.hpp"
#include "SingleCore.h"

enum CTYPE
{
	COREA, 
	COREB
};

class Factory  
{  
public:   
	virtual SingleCore* CreateSingleCore() = 0;
};  
#endif