#include<bits/stdc++.h>
using namespace std;

class node{

    public:
    int data;
    node*next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertnode(node* &head,node *&tail,int data){
    
    node *newnode=new node(data);
    if(head==NULL){
       head=newnode;
       tail=newnode;
    }
    else{
          tail->next=newnode;
          tail=newnode;
    }
}

void print(node *&head){
      
    node *temp=head;
    while(temp!=NULL){
        
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void middlenode(node *&head){
    node *temp=head;
    int size=0;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    temp=head;
    
    for(int i=1;i<size/2;i++){

        temp=temp->next;

    }
    
    if(size%2==0){
        cout<<"Middle Nodes are: "<<temp->data<<" "<<temp->next->data<<endl;

    }
    else{
        cout<<"middle node is: "<<temp->next->data<<endl;
    }
}
int size(node *&head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }

    return count;
    
}
void reversenode(node *head,int k){
    node *temp=head;
    for(int i=1;i<k;i++){
          if(temp!=NULL){
            temp=temp->next;
            
          }
    }


}
void print(node *&head,int count,int n){
    node* temp=head;
    for(int i=1;i<=count-n;i++){
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
void removefromback(node *&head,int count,int n){

    node*temp=head;
    for(int i=1;i<count-n;i++){
        temp=temp->next;
    }
     
    node*del=temp->next;
    node*join=del->next;

    temp->next=join;
    del->next=NULL;
    delete del;

}
int main()
{

     node *head=NULL;
     node *tail=NULL;
     insertnode(head,tail,10);
     insertnode(head,tail,20);
     insertnode(head,tail,30);
     insertnode(head,tail,40);
     insertnode(head,tail,50);
     insertnode(head,tail,60);
    //  insertnode(head,tail,70);


     print(head);
     cout<<endl;
    //  middlenode(head);
    
    cout<<"Printing from backward direction"<<endl;
    print(head,size(head),2);
     removefromback(head,size(head),2);
     cout<<"printing after remove"<<endl;
     print(head);
}