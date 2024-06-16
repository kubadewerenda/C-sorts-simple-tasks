#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

void BubbleSort(int T[], int n);
void print(int *t);
void wczytaj(int *t);

int main() 
{
	int t[N];
	wczytaj(t);
	print(t);
	BubbleSort(t,N);
	printf("\nPo sortowaniu:\n");
	print(t);
	
	return 0;
}
void BubbleSort(int T[], int n)
{
	int i,j,temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(T[j]>T[j+1])
			{
				temp=T[j];
				T[j]=T[j+1];
				T[j+1]=temp;
			}
		}
	}
	
}

void wczytaj(int *t)
{
	srand((unsigned) time(NULL));
	int i;
	for(i=0;i<N;i++)
	{
		t[i]=rand()%10;
	}
}
void print(int *t)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("%3d",t[i]);
	}
}



