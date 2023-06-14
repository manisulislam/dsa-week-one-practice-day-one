#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
     int val;
     Node* next;
    Node(int val) {
        this->val=val;
        this->next=NULL;

    }
};
void input(Node*&head, Node*&tail, int val){
    Node * newNode= new Node(val);
    
    if(head==NULL){
        head= newNode;
        tail= newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
    
}

int size (Node *head){
    int count=0;
    Node* tmp= head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
void insert_head(Node *head, int value){
    Node * newNode= new Node(value);
    Node * tmp=head;
    newNode->next=tmp;
    head= newNode;
}
void insert_position(Node * head, int index, int value){
    Node * newNode = new Node(value);
    Node * tmp= head;
    for(int i=1; i<index-1; i++){
        
        tmp= tmp->next;
        
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
void insert_tail(Node *head, Node *tail, int value){
    Node * newNode= new Node(value);
    tail->next=newNode;
    tail=newNode;
}
void print (Node* head){
    Node * tmp=head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int main(){
    Node * head= NULL;
    Node * tail= NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1) break;
        input(head, tail, val);
    }
    int query;
    cin>>query;
    for(int i=0; i<query; i++){
        int index, value;
        cin>>index>>value;
        if(index==0){
            insert_head(head, value);
            print(head);
        }
        else if(index>size(head)){
                cout<<"invalid index";
            }
        else if(index==size(head)){

            insert_tail(head,tail,value);
            print(head);
        }
        else{
                insert_position(head, index, value);
                print(head);

            }
    }
    print(head);
    
    return 0;
}