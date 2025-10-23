#include <iostream>

int main(void)
{
	int nInput1, nInput2;
	int nResult = 0;
	
	nInput1 = 0;
	nInput2 = 0;
	
	std::cin >> nInput1 >> nInput2;
	
	nResult = nInput1 + nInput2;
	
	std::cout << nResult;
	
	
	return 0;
}
