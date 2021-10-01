#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define size 10000

#define rep(i,a,b) for(int i = a; i<b; i++)
#define p printf(
#define s scanf(
#define f )
#define printf("\n") m

int a[size];

swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n;
	scanf("%d", &n);
	rep(i,0,n) scanf("%d", &a[i]);
	rep(i,0,n-1)
	{
		int j = i;
		while (j >= 0 && a[j]>a[j + 1])
		{
			swap(&a[j], &a[j + 1]);
			j--;
		}
	}
	for (int i = 0; i < n; i++)
		p "%d ", a[i] f;
	
	m;
}
