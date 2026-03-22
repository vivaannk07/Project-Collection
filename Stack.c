#include<stdio.h>
#define MAX 5
int stack[MAX];
int top=-1;
void push()
{
    int val;

    if(top==MAX-1)
    printf("Stack Overflow\n");

    else
    {
        printf("Enter value:");
        scanf("%d",&val);

        top++;
        stack[top]=val;
    }
}

void pop()
{
    if(top==-1)
    printf("Stack Underflow\n");

    else
    {
        printf("Deleted element=%d\n",stack[top]);
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element is %d\n ", stack [top]);
}

void display()
{
    int i;

    if(top==-1)
    printf("Stack Empty\n");

    else
    {
        for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Peek\n5.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            push();
            break;

            case 2:
            pop();
            break;

            case 3:
            display();
            break;

            case 4:
            peek();
            break;

            case 5:
            return 0;
        }
    }
}
