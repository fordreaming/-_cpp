//Ψһ�Ĺ������������������ͺŵĴ������ˣ����ڲ��ж� 
//�򵥹���ģʽ���ڹ����������жϣ��Ӷ�������Ӧ�Ĳ�Ʒ
//�����²�Ʒ������Ҫ�޸Ĺ�����
//Υ�����ŷ��ԭ��
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
	SingleCore* CreateSingleCore(enum CTYPE ctype)  
	{  
		if(ctype == COREA) //�����ڲ��ж�  
		{
			return new SingleCoreA(); //������A 
		}
		else if(ctype == COREB)  
		{
			return new SingleCoreB(); //������B  
		}			
		else 
		{
			return NULL; 
		}			
	}  
};  
#endif