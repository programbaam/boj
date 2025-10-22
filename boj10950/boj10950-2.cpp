#include <cstdio>

int main()
{
	int nTestCases = 0;
	int nInput1 = 0, nInput2 = 0;
	int nResult = 0;
	
	scanf("%d", &nTestCases);
	while(nTestCases--) // nTestCases가 0이 될 때까지 반복
	{
		scanf("%d %d", &nInput1, &nInput2);
		nResult = nInput1 + nInput2;
		printf("%d\n", nResult);
	}
	
	return 0;
}