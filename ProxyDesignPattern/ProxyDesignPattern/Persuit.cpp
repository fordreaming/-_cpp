#include "Persuit.h"

CPersuit::CPersuit(CSchoolGirl *pSchoolGirl)
{
	this->m_schoolGirl = *pSchoolGirl;
}

void CPersuit::GiveDolls()
{
	printf("%s����������\n", m_schoolGirl.m_name.c_str());
} 

void CPersuit::GiveFlowers()
{
	printf("%s���㻨\n", m_schoolGirl.m_name.c_str());
}

void CPersuit::GiveChocolate()
{
	printf("%s�����ɿ���\n", m_schoolGirl.m_name.c_str());
}
