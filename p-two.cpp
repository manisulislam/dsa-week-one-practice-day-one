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
void input(Node * &head, Node *&tail, int val){
    Node * newNode = new Node(val);
    if(head==NULL){
        head= newNode;
        tail= newNode;
        return ;
    }
    tail->next=newNode;
    tail = newNode;
}


int main(){
    Node * head= NULL;
    Node * tail = NULL;
    int val;
    while(true){
        cin>>val;
        if(val==-1) break;
        input(head, tail, val);
    }
    Node * tmp= head;
    int flag=1;
    while(tmp!=NULL){
        if(tmp==tmp->next){
            flag=0;
        }
        tmp=tmp->next;
    }
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else if(flag==0){
        cout<<"NO"<<endl;
    }
    return 0;
}