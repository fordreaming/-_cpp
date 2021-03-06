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
//作者：tandesir 
//来源：CSDN 
//原文：https://blog.csdn.net/tandesir/article/details/8635301 
//版权声明：本文为博主原创文章，转载请附上博文链接！