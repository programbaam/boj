#include <cstdio>

int main()
{
	int nTestCases = 0;
	int nInput1 = 0, nInput2 = 0;
	int nResult = 0;
	
	scanf("%d", &nTestCases);
	for(int i = 0; i < nTestCases; i++)
	{
		scanf("%d %d", &nInput1, &nInput2);
		nResult = nInput1 + nInput2;
		printf("%d\n", nResult);
	}
	
	return 0;
}