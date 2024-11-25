#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node* next;
};
int main()
{
struct node *head=NULL,*newnode,*temp;
int i,n;
printf("enter a value for how many numbers you want to store");
scanf("%d",&n);
for(i=1;i<=n;i++){
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&newnode->data);
newnode->next=0;
if(head==NULL) head =temp = newnode;
else{
temp->next=newnode;
temp=newnode;
}
}temp=head;
while(temp!=0){
printf("%d\n",temp->data);
temp=temp->next;
}newnode=(struct node*)malloc(sizeof(struct node));
printf("enter a value");
scanf("%d",&newnode->data);
newnode->next=head;
head=newnode;
temp=head;
while(temp!=0){
printf("%d\n",&temp->data);
temp=temp->next;
}
return 0;
}
