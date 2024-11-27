#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* next;
    struct node* prev;
};
int main()
{
    struct node *head=NULL,*newnode,*temp,*pnode,*nnode;
    int i,n,pos,count=0;
    printf("enter a value for how many numbers you want to store");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter a value");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==NULL) head =temp = newnode;
        else {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
    }printf("enter the position which you want to add");
    scanf("%d",&pos);
    if(pos>n) printf("invalid input");
    else{
    i=1;
    temp=head;
    while (i<pos-1){
    temp=temp->next;
    i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter a value what you want to add at position");
        scanf("%d",&newnode->data);
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
      }
    temp=head;
    while(temp!=0) {
        printf("%d\n",temp->data);
        printf("next%d\n",temp->next);
        printf("prev%d\n",temp->prev);
        temp=temp->next;
    }
}
