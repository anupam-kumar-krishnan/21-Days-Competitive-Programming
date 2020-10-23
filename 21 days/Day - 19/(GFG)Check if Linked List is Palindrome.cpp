#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

// } Driver Code Ends


/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    if(!head || !(head->next)){
        return true;
    }
    
    Node* slow = head;
    Node* fast = head;
    
    while(fast != NULL){
        slow = slow->next;
        if(fast->next == NULL){
            break;
        }
        fast = (fast->next)->next;
    }
    
    Node* prev = NULL;
    
    while(slow){
        Node* temp = slow->next;
        slow->next = prev;
        prev = slow;
        slow = temp;
    }
    
    Node* curr = head;
    
    while(curr && prev){
        if(curr->data != prev->data){
            return false;
        }
        curr = curr->next;
        prev = prev->next;
    }
    
    return true;
}
