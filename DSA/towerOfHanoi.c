#include <stdio.h>
void towerOfHanoi(int n, char A, char C, char B)
{
	if (n == 1)
	{
		printf("\n Move disk 1 from rod %c to rod %c", A, C);
		return;
	}
	towerOfHanoi(n-1, A, B, C);   //recall function
	printf("\n Move disc %d from rod %c to rod %c", n, A, C);
	towerOfHanoi(n-1, B, C, A);
}

int main()
{
	int n;
    printf("Enter the size of disk:");
    scanf("%d",&n);
	towerOfHanoi(n, 'A', 'C', 'B');
	return 0;
}
