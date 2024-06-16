#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5

void wczytaj(int *t);
void drukuj(int *t);
void SelectionSort(int T[], int n);

int main() 
{
	int tab[N],w,k;
	wczytaj(tab);
	drukuj(tab);
	SelectionSort(tab,N);
	printf("\nSortowanie...");
	drukuj(tab);	
	return 0;
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
void drukuj(int *t)
{
	printf("\nTABLICA:\n");
	int i;
	for(i=0;i<N;i++)
	{
		printf("%3d",t[i]);
	}
}
void SelectionSort(int T[], int n)
{
	int i,j,min;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(T[min]>T[j])
			{
				min=j;
			}
		}
		int temp=T[i];
		T[i]=T[min];
		T[min]=temp;
	}
}























































