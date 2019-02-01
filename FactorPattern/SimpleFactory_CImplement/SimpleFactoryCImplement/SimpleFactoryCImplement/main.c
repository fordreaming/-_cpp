#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "factory.h"
#include "product.h"

int main(int argc, char **argv)
{
	Factory *factory = FactoryCreate();
	Operation *oper = factory_create_oper('+');
	Result* result = oper_result(oper, 3, 5);
	printf("%d\n", result->val);
	oper_destroy(oper);
	factory->destroy(factory);
	return 0;
}
//--------------------- 
//���ߣ�tandesir 
//��Դ��CSDN 
//ԭ�ģ�https://blog.csdn.net/tandesir/article/details/8635301 
//��Ȩ����������Ϊ����ԭ�����£�ת���븽�ϲ������ӣ�