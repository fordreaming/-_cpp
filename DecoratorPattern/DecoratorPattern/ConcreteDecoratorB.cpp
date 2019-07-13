#include "ConcreteDecoratorB.h"
#include <stdio.h>

CConcreteDecoratorB::CConcreteDecoratorB(void)
{
}

CConcreteDecoratorB::~CConcreteDecoratorB(void)
{
}

void CConcreteDecoratorB::Operation()
{
	m_pComponent->Operation();
	AddedBehavior();
	printf("����װ�ζ���B�Ĳ���\n");
}

void CConcreteDecoratorB::AddedBehavior()
{
	m_addedState = "New B State";
	printf("����װ�ζ���B����Ӳ���\n");
}
