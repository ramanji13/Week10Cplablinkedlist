#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node* next;
};
int main()
{
struct node *head=NULL,*newnode,*temp,*pnode;
int i,n,pos;
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
}
i=1;
temp=head;
while(temp!=0){
printf("%d\n",temp->data);
temp=temp->next;
}temp=head;
while(temp->next!=0){
pnode=temp;
temp=temp->next;
}pnode->next=0;
free(temp);
temp=head;
printf("the new list after deleting last element is\n");
while(temp!=0){
printf("%d\n",temp->data);
temp=temp->next;
}
return 0;
}
