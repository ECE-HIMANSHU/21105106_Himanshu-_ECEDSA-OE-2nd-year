//                           ASSIGNMENT 1             DATA STRUCTURES
//   SUBMITTED BY ;
//      HIMANSHU
//      ECE
//      21105106

#include<iostream>
using namespace std;


// CREATING CLASS Node
class Node{
    public:
		
    	// CREATING OBJECTS
        int age;
        string Name;
        Node *next;
        Node*prev;
		
    	// CALLING CONSTRUCTOR 
        Node(string Name,int age){
            this->age=age;
            this->Name=Name;
            // INITIALISING NEXT AND PREV WITH NULL
            next =NULL;  
            prev =NULL;
        }
};



// FUNCTION FOR CREATING FAMILY AND INSERTING ELEMENTS
Node * insertelements(){
    string Name;

    int age;
    
    
    Node *head=NULL;
    Node *tail =NULL;
    cout<<"Enter the name of Family Member/Enter \'no\' to discontinue"<<endl;
    cin>>Name;
    while(Name!="no"){
    cout<<"Enter the age of "<<Name<<endl;
    cin>>age;
    if(head==NULL){
        head=new Node(Name,age);
        tail =head;
        head->prev=NULL;
    }
    else{
        tail->next=new Node(Name,age);
        tail->next->prev=tail;
        tail =tail->next;
        
    }
    cout<<"Enter the name of Family Member/Enter \'no\' to discontinue"<<endl;
    cin>>Name;
    }
    return head;
}



// FUNCTION TO INSERT AN ELEMENT AT POSITION I
void insertatI(Node *head,int i,string Name,int age){
    if(head==NULL and i!=0){
        return;
    }
    if(i==0 and head!=NULL){
        Node *temp = new Node(Name,age);
        temp->next =head;
        head->prev =temp;
        return;
    }
    else if(i==0 and head==NULL){
        head =new Node(Name,age);
        return;
    }
    Node*temp=head;
    int k=0;
    while(k<i-1 and temp!=NULL){
        temp=temp->next;
        k++;
    }
    if(temp!=NULL){
    
    Node *temp2=temp->next;
    temp->next=new Node(Name,age);
    temp->next->next=temp2;
    if(temp2!=NULL){
    temp2->prev =temp->next;
    }
    temp->next->prev=temp;

    }
}



// FUNCTION TO PRINT FROM START
void printfromstart(Node *head){
    if(head==NULL){
        return;
    }
    Node *temp =head;
    while(temp!=NULL){
        cout<<"The name of the family member is "<<temp->Name<<" and their age is "<<temp->age<<endl;
        temp=temp->next;
    }
}



// FUNCTION TO PRINT FROM END TO START
void printfromend(Node *head){
    if(head==NULL){
        return;
    }
    Node *temp =head;
    while(temp->next!=NULL){
        temp =temp->next;
    }
    while(temp!=NULL){
        cout<<"The name of the family member is "<<temp->Name<<" and their age is "<<temp->age<<endl;
        temp=temp->prev;
    }
}



// FUNCTION TO REMOVE AN ELEMENT FROM INDEX I
Node* remove(Node *head,int index){
    Node *temp=head;
    if(index ==0){
        temp =head;
        head =head->next;
        head->prev=NULL;
        delete temp;
        return head;
    }
    int k=0;
    while(temp!=NULL and k<index-1){
        temp=temp->next;
        k++;
    }
    if(temp->next==NULL){
        return head;
    }
    else if(temp->next->next==NULL){
        Node *temp2=temp->next;
        temp->next =NULL;
        delete temp2;
        return head;

    }
    Node *temp2=temp->next;
    temp->next =temp2->next;
    temp2->next->prev =temp;
    delete temp2;
    return head;
}



// MAIN FUNCTION
int main(){
    Node *head; 
    head=insertelements(); // INITIALISING FAMILY BY TAKING INPUTS
    
    // CALLING FUNCTIONS
    printfromstart(head);
    printfromend(head);
    remove(head,0);
    
    // printfromstart(head);
    
    insertatI(head,2,"Himanshu",18);
    printfromend(head);

}
/*
Q.Try to find a way to link the family members' doubly-linked list based on their relationship.
Ans.One way to link the family members doubly-linked list is by sorting the doubly linked list according to age in decending order.By doing so we will get a doubly linked list in which older generation people will be close to head in double linked list and new generation people will be close to tail in doubly linked list.
*/


//                           ASSIGNMENT 1             DATA STRUCTURES
//   SUBMITTED BY ;
//      HIMANSHU
//      ECE
//      21105106
    
