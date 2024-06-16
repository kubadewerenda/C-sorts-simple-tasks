#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int isEmpty();
int isFull();
void clear();
void enqueue(int item);
int dequeue();
void printQueue();
void wczytaj(int *t);

int queue[N];
int front=0;
int back=0;


int main() 
{
	int t[N];
	int i,j;
	wczytaj(t);
	
	for(i=0;i<N-5;i++)
	{
		enqueue(t[i]);
	}
    printQueue(); 

    for(j=0;j<5;j++)
    {
    	dequeue();
	}
    printQueue();
	 
    wczytaj(t);
    for(i=0;i<4;i++)
	{
		enqueue(t[i]);
	}    
    printQueue(); 

    clear();
    

    return 0;
}
void wczytaj(int *t)
{
	srand((unsigned) time(NULL));
	int i;
	for(i=0;i<N;i++)
	{
		t[i]=rand()%100-50;
	}
}
int isEmpty() 
{
    return front==back;
}

int isFull() 
{
    return (back+1)%N==front;
}

void enqueue(int item) 
{
    if(isFull()) 
	{
        printf("Blad: Kolejka jest pelna.\n");
    }else
	{
        queue[back]=item;
        back=(back+1)%N;
    }
}

int dequeue() 
{
    if(isEmpty()) 
	{
        printf("Blad: Kolejka jest pusta.\n");
        return -1;
    }else 
	{
        int item=queue[front];
        front=(front+1)%N;
        return item;
    }
}

void clear() 
{
    front=0;
    back=0;
    printf("Kolejka pusta!\n");
}

void printQueue() 
{
    printf("Kolejka: ");
    int i=front;
    while(i!=back) 
	{
        printf("%3d ",queue[i]);
        i=(i+1)%N;
    }
    printf("\n");
}

