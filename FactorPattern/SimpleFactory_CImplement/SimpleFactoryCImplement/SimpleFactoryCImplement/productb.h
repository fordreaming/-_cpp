#ifndef __PRODUCTB_H__
#define __PRODUCTB_H__

#include "product.h"

#ifdef __cplusplus
extern "C" {
#endif

	struct _Minus;
	typedef struct _Minus Minus;

	typedef Result* (*MinusResultFunc)(int a, int b);
	typedef void (*MinusDestroyFunc)(Minus* thiz);

	struct _Minus
	{
		MinusResultFunc minus_result;
		MinusDestroyFunc minus_destroy;
	};

	Minus *oper_minus_create(void);

#ifdef __cplusplus
}
#endif

#endif
//--------------------- 
//���ߣ�tandesir 
//��Դ��CSDN 
//ԭ�ģ�https://blog.csdn.net/tandesir/article/details/8635301 
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�