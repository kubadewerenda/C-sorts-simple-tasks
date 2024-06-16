#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 15

void print(int *t);
void quicksort(int *t,int min,int max);
int partition(int *t,int min,int max);
void complete(int *t);

int main()
{
	int t[N];
	srand((unsigned)time(NULL));
	complete(t);
	print(t);

	quicksort(t,0,N-1);
	print(t);

return 0;
}
void complete(int *t)
{
	int i;
	for(i=0;i<N;i++)
	{
		t[i]=rand()%50;
	}
}

void print(int *t)
{
	int i;
	printf("Tablica:\n");
	for(i=0;i<N;i++) 
	{
		printf("%d ",t[i]);
	}
	printf("\n");

}
void quicksort(int *t,int min,int max)
{
	int w;
	if(min<max)
	{
		w=partition(t,min,max);
		quicksort(t,min,w-1);
		quicksort(t,w+1,max);
	}
}
int partition(int *t, int min, int max)
{
	int w= t[max];
    int i=min-1;
    int j=min;
    int temp;

    while(j<=max-1) 
	{
        if(t[j]<=w) 
		{
            i++;
            temp=t[i];
            t[i]=t[j];
            t[j]=temp;
        }
        j++;
    }
    temp=t[i+1];
    t[i+1]=t[max];
    t[max]=temp;
    
    return i+1;
}
