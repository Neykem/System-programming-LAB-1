#include "stdafx.h"
#include "Processor.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Processor intel_hu_ta = Processor();
	std::cout << intel_hu_ta.pr_addition(2, 3) << std::endl;
	std::cout << intel_hu_ta.pr_inversion(0) << std::endl;
	std::cout << intel_hu_ta.pr_mixing_register(12, 0) << std::endl;
	getchar();
	return 0;
}

//���� - 1 ��� 3 ��� 
//