#include "ChainResponsibility.hpp"

//���԰���
int main()
{	
	Manager *general = new GeneralManager(NULL, "A"); //�����ϼ����ܾ���û���ϼ�
	Manager *majordomo = new Majordomo(general, "B"); //�����ϼ�
	Manager *common = new CommonManager(majordomo, "C"); //�����ϼ�
	common->DealWithRequest("D",300);   //Ա��DҪ���н
	common->DealWithRequest("E", 600);
	common->DealWithRequest("F", 1000);
	delete common; delete majordomo; delete general;
	return 0;
}
