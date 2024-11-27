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
    int i,n,pos,count;
    printf("enter a value for how many numbers you want to store");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter a value");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        if(head==NULL) head =temp = newnode;
        else {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }newnode->next=head;
    }
    temp=head;
    i=1;
    printf("enter how many times you want to print\n");
    scanf("%d",&count);
    count*=n;
    while(temp!=0&&i<=count) {
        printf("%d\n",temp->data);
        printf("next%d\n",temp->next);
        printf("prev%d\n",temp->prev);
        temp=temp->next;
        i++;
    }
}
