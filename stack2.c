
#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int arr[MAX];
int top=-1;
void push(int d);
void push(int d)
{
    if(top==MAX-1)
    {
        printf("stack overflow");
        exit(1);
    }
    top++;
    arr[top]=d;
}
int display();
int display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
int pop();
int pop()
{
    if(top==-1)
    {
        printf(" stack under flow");
    }
    int temp;
    temp=top;
    top--;
    return temp;
}
int main()
{
    push(12);
    push(13);
    push(14);
    pop();
    display();
    return 0;
}
