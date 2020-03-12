/*
Cesar Oropeza
CSC 251
3/11/2020
Exam1
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 20
void rolls(int a[SIZE]);
void printer(int a[SIZE]);
int main(void)
{
	int array[SIZE]={0};
	rolls(array);
	printer(array);
}
void rolls(int a[SIZE])
{
	int roll;
	srand(time(NULL));
	printf("Enter the number of rolls: ");
	scanf("%d", &roll);
}
void printer(int a[SIZE])
{
	int i = 1;
	srand(time(NULL));
	int b = rand()%20+1;
	for(i = 1;i<=SIZE;i++)
	{
		printf("%d = %d\n",i,b);
	}
}
