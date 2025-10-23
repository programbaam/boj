#include <cstdio>

#define TRUE 1

int main() {
	int nInput1 = 0, nInput2 = 0;
	int nResult = 0;
	int nInputReturnValue = 0;
	
	while(TRUE)
	{
		nInputReturnValue = scanf("%d %d", &nInput1, &nInput2);
		
		if(nInputReturnValue == EOF) break;// EOF = -1
		
		nResult = nInput1 + nInput2;
		printf("%d\n", nResult);
	}
	return 0;
}