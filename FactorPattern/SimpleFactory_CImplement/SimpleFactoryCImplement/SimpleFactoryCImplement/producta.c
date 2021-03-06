#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "producta.h"
#include "typedef.h"

static Result *oper_add_result(int a, int b)
{
	Result *result = malloc(sizeof(Result));
	if(result != NULL)
	{
		result->val = a + b;
	}
	return result;
}

static void oper_add_destroy(Add *thiz)
{
	if(thiz != NULL)
	{
		SAFE_FREE(thiz);
	}

	return ;
}

Add *oper_add_create(void)
{
	Add *thiz = malloc(sizeof(Add));

	if(thiz != NULL)
	{
		thiz->add_result = oper_add_result;
		thiz->add_destroy = oper_add_destroy;
	}

	return thiz;
}
//--------------------- 
//作者：tandesir 
//来源：CSDN 
//原文：https://blog.csdn.net/tandesir/article/details/8635301 
//版权声明：本文为博主原创文章，转载请附上博文链接！