#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node* next;
};
int main()
{
struct node *head=NULL,*newnode,*temp;
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
}
temp=head;
head=head->next;
free(temp);
temp=head;
printf("the new list after deleting first element is\n");
while(temp!=0){
printf("%d\n",temp->data);
temp=temp->next;
}
return 0;
}
