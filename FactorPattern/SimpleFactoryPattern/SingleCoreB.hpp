#ifndef _SINGLE_COREB_H_
#define _SINGLE_COREB_H_
#include "Factory.hpp"
#include "SingleCoreB.hpp"
//����B  
class SingleCoreB: public SingleCore  
{  
public:
	void Show() 
	{ 
		cout<<"SingleCore B"<<endl; 
	}  
};  
#endif