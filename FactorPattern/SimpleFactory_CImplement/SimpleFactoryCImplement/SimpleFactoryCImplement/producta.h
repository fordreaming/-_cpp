#ifndef __PRODUCTA_H__
#define __PRODUCTA_H__

#include "product.h"

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct _Add Add;

	typedef Result* (*AddResultFunc)(int a, int b);
	typedef void (*AddDestroyFunc)(Add* thiz);

	struct _Add
	{
		AddResultFunc add_result;
		AddDestroyFunc add_destroy;
	};

	Add *oper_add_create(void);

#ifdef __cplusplus
}
#endif

#endif
//--------------------- 
//���ߣ�tandesir 
//��Դ��CSDN 
//ԭ�ģ�https://blog.csdn.net/tandesir/article/details/8635301 
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�