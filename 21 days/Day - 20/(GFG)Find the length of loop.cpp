#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

int countNodesinLoop(Node* head);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        cout<< countNodesinLoop(head) << endl;
    }
	return 0;
}



int countNodesinLoop(struct Node *head)
{
     if(!head){
         return 0;
     }
     
     Node* slow = head, *fast = head->next;
     
     while(fast != slow){
         if(!fast || !fast->next){
             return 0;
         }
         slow = slow->next;
         fast = (fast->next)->next;
     }
     
     Node* temp = slow;
     
     int len = 0;
     
     do{
         len++;
         temp = temp->next;
     }while(slow != temp);
     
     return len;
}
