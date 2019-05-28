#include <stdio.h>

#define KEY int

int binarysearch(int a, int mass[], int n)
{
    int low, high, middle;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (a < mass[middle])
            high = middle - 1;
        else if (a > mass[middle])
            low = middle + 1;
        else 
            return middle;
    }
    return -1;
}

int main() {
	printf("Enter size of array: ");
	int n;
	scanf("%d",&n);
	KEY massiv[n];
	for(int i = 0; i < n; i++) {
		printf("Enter massiv[%d]: ",i);
		scanf("%d",&massiv[i]);
	}
	printf("Enter number to search: ");
	int number;
	scanf("%d",&number);
	if(binarysearch(number,massiv,n))
		printf("yes\n");
		else
		printf("no\n");
}