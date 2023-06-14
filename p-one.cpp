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
void input(Node *&head, Node*&tail, int val){
    Node * newNode = new Node(val);
    if(head==NULL){
        head= newNode;
        tail= newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void print(Node *head){
    Node * tmp= head;
    while(tmp!=NULL){
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
int size(Node * head){
    int count =0;
    Node * tmp= head;
    while(tmp!=NULL){
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main(){
    Node * head= NULL;
    Node * tail= NULL;
    int val;
    
    while(true){
        
        cin>>val;
        if(val==-1)
            break;
            input(head, tail, val);
    }
    print(head);
    int result = size(head);
    cout<<result<<endl;
    
    
   
   

    
    return 0;
}