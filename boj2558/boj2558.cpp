#include <cstdio>

int main(void)
{
	int nInput1, nInput2;
	int nResult = 0;
	
	nInput1 = 0;
	nInput2 = 0;
	
	scanf("%d %d", &nInput1, &nInput2);
	
	nResult = nInput1 + nInput2;
	
	printf("%d", nResult);
	
	return 0;
}