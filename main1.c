#include <stdio.h>
#define KEY int
int main() {
	printf("Enter size of matrix(N*N): ");
	int N;
	scanf("%d",&N);

	KEY A[N][N];
	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			printf("Enter A[%d][%d]: ",i,j);
			scanf("%d",&A[i][j]);
		}
	}
	for(int i = 0; i < N; i++)
		for(int j = N-1; j>i; j--)
			if(A[j][0]<A[j-1][0]) {
				KEY tmp[N];
				for(int k = 0; k < N; k++)
					tmp[k] = A[j][k];
				for(int k = 0; k < N; k++)
					A[j][k] = A[j-1][k];
				for(int k = 0; k < N; k++)
					A[j-1][k] = tmp[k];
			}
	for(int i = 0; i < N; i++)
		printf("%d ",A[i][i]);
}