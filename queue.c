#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
void peek();
struct node
{
    int d;
    struct node*next;
};
struct node*front=0;
struct node*rear=0;
void enqueue(int x)
{
struct node*newnode;
newnode=(struct node*)malloc(sizeof(struct node));
newnode->d=x;
newnode->next=0;
if(front==0 && rear==0)
{
    front=rear=newnode;
}
else
{
    rear->next=newnode;
    rear=newnode;
}
}
void dequeue()
{
    struct node*temp;
    temp=front;
    if (front==0 && rear==0)
    {
        printf("queue uderflow");
    }
    else 
    {
        printf("\ndeleted element is %d\n",front->d);
        front=front->next;
        free(temp);
    }
}
void display()
{
    struct node*temp;
    temp=front;
    if (front==0 && rear==0)
     {
        printf("queue is empty");
    }
    else 
    {
       while(temp->next!=0)
      {
       printf("data is %d",temp->d);
       temp=temp->next;
    }
    }
}
void peek()
{
      if (front==0 && rear==0)
    {
        printf("queue is empty");
    }
    else
    {
        printf("\nfront is %d\n",front->d);
        exit(0);
    }
}
void main()
{
    enqueue(1);
    enqueue(7);
    enqueue(9);
    enqueue(10);
    enqueue(19);
    dequeue();
    dequeue();
    peek();
    display();
}
