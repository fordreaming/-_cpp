#include <iostream>
#include "Work.h"

using namespace std;

int main()
{
	Work* emergencyProjects = new Work();
	emergencyProjects->m_hour = 12;
	emergencyProjects->WriteProgram();

	return 0;
}