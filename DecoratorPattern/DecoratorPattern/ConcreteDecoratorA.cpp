#include "ConcreteDecoratorA.h"

CConcreteDecoratorA::CConcreteDecoratorA(void)
{
}

CConcreteDecoratorA::~CConcreteDecoratorA(void)
{
}

void CConcreteDecoratorA::Operation()
{
	m_pComponent->Operation();
	m_addedState = "New State";
	printf("����װ�ζ���A�Ĳ���\n");
}
