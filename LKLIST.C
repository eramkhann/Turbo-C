#include<stdio.h>                                                                                                                                                                                                                                                                                                                                                                                                                                      #include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct lklist
{
int info;
struct lklist *next;
}
node;
void main()
{
int ch,data;
node *head=NULL;
node *temp,*ptr;
clrscr();
while(1)
{
printf("\n1.insert at begging");
printf("\n2.taversimng");
printf("\n3.insert at end");
printf("\n4.exit");
printf("enter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("enter element to insert");
scanf("%d",&data);
temp=(node *)malloc(sizeof(node));
temp->info=data;
temp->next=head;
head=temp;
printf("node inserted successfully");
break;
case 2:temp=head;
while(temp!=NULL)
{
printf("%d",temp->info);
temp=temp->next;
}
break;
case 3:temp=head;
printf("enter element to insert");
scanf("%d",&data);
ptr=(node*)malloc(sizeof(node));
ptr->info=data;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=ptr;
ptr->next=NULL;
break;
case 4:exit();
break;
}
}
getch();
}
