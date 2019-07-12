#include <iostream>
#include "Company.h"
#include "ConcreteCompany.h"
#include "FinanceDepartment.h"
#include "HRDepartment.h"

using namespace std;


int main()
{
	CConcreteCompany* root = new CConcreteCompany("�����ܹ�˾");
	root->Add(new CHRDepartment("�ܹ�˾������Դ��"));
	root->Add(new CFinanceDepartment("�ܹ�˾����"));

	CConcreteCompany* comp = new CConcreteCompany("�Ϻ������ֹ�˾");
	comp->Add(new CHRDepartment("�Ϻ������ֹ�˾������Դ��"));
	comp->Add(new CFinanceDepartment("�Ϻ������ֹ�˾����"));
	root->Add(comp);

	CConcreteCompany* comp1 = new CConcreteCompany("�Ͼ����´�");
	comp1->Add(new CHRDepartment("�Ͼ����´�������Դ��"));
	comp1->Add(new CFinanceDepartment("�Ͼ����´�����"));
	root->Add(comp1);

	CConcreteCompany* comp2 = new CConcreteCompany("���ݰ��´�");
	comp2->Add(new CHRDepartment("���ݰ��´�������Դ��"));
	comp2->Add(new CFinanceDepartment("���ݰ��´�����"));
	root->Add(comp2);

	cout << "�ṹͼ" << endl;
	root->Display(1);

	cout << "ְ��" << endl;
	root->LineOfDuty();

	return 0;
}