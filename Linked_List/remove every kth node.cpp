// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

Node *deleteK(Node *,int);

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    
    *tail_ref = new_node;
}

/* Function to get the middle of the linked list*/
int getMiddle(struct Node *head);

/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        int K;
        cin>>K;
        Node *res = deleteK(head,K);
        Node *temp = res;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends


/* Link list Node 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
#include<bits/stdc++.h>
Node* deleteK(Node *head,int K)
{
    if(K==0)return head;
    struct Node * temp = head;
    int h=K;
    int count =1;
    vector <int> v;
    while(temp!=NULL)
    {
        v.push_back(temp->data);
        temp=temp->next;
    }
    for(auto it = v.begin();it!=v.end();it++)
    {
        if(count==h)
        {
            *it=0;
            h=h+K;
        }
        count++;
    }
    for(auto it = v.begin();it!=v.end();it++)
    {
        if(*it!=0)
        cout<<*it<<" ";
    }
    return NULL;
    
  //Your code here
}
