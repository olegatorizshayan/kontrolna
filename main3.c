#include <stdio.h>

#define n 3
#define m 4

int S;

int main() {
	int X[] = {2,2,2};
	int Y[] = {3,3,3,3};
	int A[n][m] = {
		{1,1,1,1},
		{1,1,1,1},
		{1,1,1,1}
	};
	for(int i=0;i<n;i++) {
		int s = 0;
		for(int k = 0; k < m; k++)
			s+=A[i][k]*Y[k];
		S+=s*X[i];
	}
	printf("S = %d",S);
}