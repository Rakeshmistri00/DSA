#include<stdio.h>
#include<stdlib.h>

int stack[100];
int top = -1;
int size;

void push()
{
    int x;
    if(top == size-1)
    {
        printf("Overflow\n");
        return;
    }
    printf("Enter value: ");
    scanf("%d", &x);
    top++;
    stack[top] = x;
}

void pop()
{
    if(top == -1)
    {
        printf("Underflow\n");
        return;
    }
    printf("Deleted value = %d\n", stack[top]);
    top--;
}

void peek()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top value = %d\n", stack[top]);
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements:\n");
    for(i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main()
{
    int choice;
    printf("Enter stack size: ");
    scanf("%d", &size);

    while(1)
    {
        printf("\n1.Push 2.Pop 3.Peek 4.Display 5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid choice\n");
        }
    }
}
