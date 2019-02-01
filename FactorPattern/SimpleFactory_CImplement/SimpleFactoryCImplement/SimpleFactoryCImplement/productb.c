#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "productb.h"
#include "typedef.h"

static Result *oper_minus_result(int a, int b)
{
	Result *result = malloc(sizeof(Result));
	if(result != NULL)
	{
		result->val = a - b;
	}
	return result;
}

static void oper_minus_destroy(Minus *thiz)
{
	if(thiz != NULL)
	{
		SAFE_FREE(thiz);
	}
}

Minus *oper_minus_create(void)
{
	Minus *thiz = malloc(sizeof(Minus));

	if(thiz != NULL)
	{
		thiz->minus_result = oper_minus_result;
		thiz->minus_destroy = oper_minus_destroy;
	}

	return thiz;
}
//--------------------- 
//���ߣ�tandesir 
//��Դ��CSDN 
//ԭ�ģ�https://blog.csdn.net/tandesir/article/details/8635301 
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�