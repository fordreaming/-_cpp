#include "OperationDiv.h"

double OperationDiv::GetResult()
{
	double result = 0;
	if(m_numberB == 0)
	{
		throw("��������Ϊ0");
	}
	result = m_numberA/m_numberB;
	return result;
}