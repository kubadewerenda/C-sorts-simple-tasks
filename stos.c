#include <stdio.h>
#include <stdlib.h>
#define N 500

void Push(int el);
int Pop();
int IsEmpty();
int IsFull();
void Clear();
void PrintStack();

int stack[N];
int top=-1;

int main() 
{
    int wybor;
    int el;

    do
	{
        printf("\nMenu:\n");
        
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.IsEmpty\n");
        printf("4.IsFull\n");
        printf("5.Clear\n");
        printf("6.PrintStack\n");
        printf("7.Wyjscie\n");
        
        printf("Co wybierasz?: ");
        scanf("%d", &wybor);

        switch (wybor)
		{
            case 1:
                printf("Co dodajesz? ");
                scanf("%d", &el);
                Push(el);
                break;
            case 2:
                Pop();
                break;
            case 3:
                if(IsEmpty()) 
				{
                    printf("Stos pusty.\n");
                }else 
				{
                    printf("Stos nie jest pusty.\n");
                }
                break;
            case 4:
                if (IsFull()) 
				{
                    printf("Stos jest pelny.\n");
                } else {
                    printf("Stos nie jest pelny.\n");
                }
                break;
            case 5:
                Clear();
                break;
            case 6:
                PrintStack();
                break;
            case 7:
                printf("Koniec!\n");
                break;
            default:
                printf("Nieprawidlowy wyb�r.\n");
        }
    }while(wybor != 7);

    return 0;
}
void Push(int el) 
{
    if(top>=N-1)
	{
        printf("Stos jest pelny. Nie mozna dodac elementu.\n");
    }else
	{
        top++;
        stack[top]=el;
        printf("Dodano element: %d\n",el);
    }
}

int Pop() 
{
    if(top<0)
	{
        printf("Stos jest pusty. Nie mozna zdjac elementu.\n");
        return -1;
    }else
	{
        int el=stack[top];
        top--;
        printf("Zdjecie elementu: %d\n",el);
        return el;
    }
}

int IsEmpty() 
{
    return (top<0);
}

int IsFull() 
{
    return (top>=N-1);
}

void Clear()
{
    top=-1;
    printf("Stos zostal wyczyszczony.\n");
}

void PrintStack() 
{
	int i;
    if(IsEmpty()) 
	{
        printf("Stos jest pusty.\n");
    }else 
	{
        printf("Aktualna zawartosc stosu:\n");
        for(i=top;i>=0;i--) 
		{
            printf("%d\n", stack[i]);
        }
    }
}
