#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

void wczytaj(int *t);
void drukuj(int *t);
void sort(int *t);
int szukanie_bin(int *t,int n1,int n2,int k);

int main() 
{
	int tab[N],w,k;
	printf("Podaj szukana liczbe k:");
	scanf("%d",&k);
	wczytaj(tab);
	drukuj(tab);
	sort(tab);
	drukuj(tab);
	w=szukanie_bin(tab,0,N-1,k);
	if(w!=-1)
	{
		printf("\nElement %d znajduje sie pod indeksem %d",k,w);
	}else printf("\nElementu %d nie ma w tablicy",k);
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
void sort(int *t)
{
	int i,j;
	for(i=0;i<N;i++)
	{
	    for(j=1;j<N-i;j++)
	    {
		
		    if(t[j-1]>t[j])
		    {
		    	int temp=t[j-1];
		    	t[j-1]=t[j];
				t[j]=temp;
			}
		}
	}			
}
int szukanie_bin(int *t,int n1,int n2,int k)
{
	int s,i,j;
	s=(n1+n2)/2;
	if(t[s]==k)
	{
		return s;
	}
	if(t[s]>k)
	{
		for(i=n1;i<s;i++)
		if(t[i]==k)
		{
			return i;
		}
	}
	if(t[s]<k)
	{
		for(j=s;j<=n2;j++)
		if(t[j]==k)
		{
			return j;
		}	
	}
	return -1;
}




















































