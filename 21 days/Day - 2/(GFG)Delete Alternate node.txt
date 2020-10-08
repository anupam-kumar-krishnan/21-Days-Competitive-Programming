#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};

void deleteAlt(struct Node *head);

void printList(struct Node *node)
{
	while (node != NULL)
	{
		cout<<node->data<<' ';
		node = node->next;
	}
	cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n, tmp;
        struct Node* head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        deleteAlt(head);
        printList(head);
    }
	return 0;
}
 
void deleteAlt(Node *head)  
{  
    if (head == NULL)  
        return;  
  
    Node *node = head->next;  
  
    if (node == NULL)  
        return;  

    head->next = node->next;  
    free(node);  
    deleteAlt(head->next);  
}  
  
