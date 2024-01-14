#include<bits/stdc++.h>
using namespace std;

struct node {
    int data ;
    struct node *next;

};

void listTraversal(struct node *ptr){
    while (ptr != NULL){
   cout<<" "<<ptr->data<<endl;
  ptr=ptr->next;
    } 
    }
struct node * insertfirst(struct node *head,int data){ 

    struct node * ptr =(struct node *)malloc(sizeof(struct node));
    ptr->next= head;
    ptr->data= data;
    return ptr;
}

struct node * insertinindex(struct node *head, int data,int index){ 

    struct node *ptr= (struct node *)malloc(sizeof(struct node));
    struct node *p =head;
    int i=0;

    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data= data;
    ptr->next= p->next;
    p->next= ptr;

    return head;

}
// Case 4
struct node * insertAfterNode(struct node *head, struct node *prevNode, int data){
    struct node * ptr = (struct node *) malloc(sizeof(struct node));
    ptr->data = data;
 
    ptr->next = prevNode->next;
    prevNode->next = ptr;
 
    return head;
}


struct node * insertend(struct node * head ,int data){
    struct node * ptr= (struct node *)malloc(sizeof(struct node));
    ptr->data= data;
    struct node *p= head;
    while(p->next!=NULL){
        p=p->next;
}
p->next=ptr;
ptr->data= data;
ptr->next = NULL;
return head;
}
int main(){
struct node *head;
struct node* second;
struct node* third;

head = (struct node*)malloc(sizeof(struct node));
second= (struct node*) malloc(sizeof(struct node));
third=(struct node *)malloc(sizeof(struct node)) ;

head->data= 34;
head->next=second;

second->data= 43;
second->next =third;

third->data= 89;
third -> next=NULL;





listTraversal(head);
cout<<endl;
head =insertfirst(head, 92);
listTraversal(head);
cout<<endl;
head = insertinindex(head ,56 , 2) ;
listTraversal(head);
cout<<endl;
head = insertend(head, 41);
listTraversal(head);

cout<<endl;
head = insertAfterNode(head,second ,98777);
listTraversal(head);

    return 0;
}