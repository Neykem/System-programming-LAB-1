#include "stdafx.h"
#include "Processor.h"

int _tmain(int argc, _TCHAR* argv[])
{
	std::string f = "10121";
	Processor intel_hu_ta = Processor();
	std::cout << intel_hu_ta.turn_pro() << std::endl;
	//std::cout << intel_hu_ta.pr_addition(2, 3) << std::endl;
	//std::cout << intel_hu_ta.pr_inversion(f) << std::endl;
	//std::cout << intel_hu_ta.pr_mixing_register(12, 5) << std::endl;
	getchar();
	return 0;
}

//проц - 1 фнк 3 фнк 
//