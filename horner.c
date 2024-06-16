#include <stdio.h>
#include <stdlib.h>

int horner(int n,int *t,int x);

int main() 
{
    int n,i,x,*t;
    
    printf("Stopien wielomianu:");
    scanf("%d", &n);
    
    t=(int*)malloc((n+1)*sizeof(int));
    
    printf("Podaj wartosc x: ");
    scanf("%d", &x);
    
    printf("Wspolczynniki wielomianu(a0,...,an):\n");
    for (i=0;i<=n;i++) 
	{
        printf("a%d=",i);
        scanf("%d",&t[i]);
    }
    
    printf("Wielomian od x=%d wynosi: %d\n",x,horner(n,t,x));
    
    return 0;
}
int horner(int n,int *t,int x) 
{
    if(n==0) 
	{
        return t[0];
    }
    
    return x*horner(n-1,t,x)+t[n];
}



