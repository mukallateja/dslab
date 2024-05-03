#include<stdio.h>
int stack[100],i,j,choice=0,n,top=-1;
void push();
void pop();
void show();
void main()
{
printf("enter the number of elements in the stack");
scanf("%d",&n);
printf("********stack operation using array ********");
printf("\n---------------------------------------\n");
while (choice!=4)
{
printf("choose one from the below option ");
printf("\n 1.push \n 2.pop\n3.show\n4exit\n");
printf("\n enter your choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
show();
break;
}
case 4:
{
printf("existing....");
}
}
}
}
void push()
{
int val;
if(top==n)
printf("\n over flow");
else
{
printf("enter the values");
scanf("%d",&val);
top=top+1;
stack[top]=val;
}
}
void pop()
{
if(top==-1)
printf("under flow");
else
top=top-1;
}
void show()
{
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
if(top==-1)
{
printf("stack is empty");
}
}
