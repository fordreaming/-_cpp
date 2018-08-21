//https://blog.csdn.net/wuzhekai1985/article/details/6660462
//Ψһ�Ĺ������������������ͺŵĴ������ˣ����ڲ��ж� 
//����ģʽ��
//����һ�����ڴ�������Ľӿڣ����������ʵ�����ĸ���
//ʹ���ʵ�����ӳٵ�����

//ȱ�㣺ÿ����һ�ֲ�Ʒ����Ҫ����һ������Ĺ���
//����ڼ򵥹���ģʽ������ģʽ��Ҫ������ඨ�壻


//���󹤳���
//�ṩһ������һϵ����ػ��໥��������Ľӿڣ�������ָ�����Ǿ������


#ifndef _CORE_FACTORY_H_
#define _CORE_FACTORY_H_

#include "SingleCore.h"
#include "MultiCore.h"

enum CTYPE
{
	COREA, 
	COREB
};

class CoreFactory
{  
public:   
	virtual SingleCore* CreateSingleCore() = 0;
	virtual MultiCore* CreateMultiCore() = 0;
};  
#endif