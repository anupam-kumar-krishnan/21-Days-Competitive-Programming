#include <bits/stdc++.h>

using namespace std;

// Tree Node
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    
    Node *root = new Node(stoi(ip[0]));


    queue<Node *> queue;
    queue.push(root);

   
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

       
        Node *currNode = queue.front();
        queue.pop();

        string currVal = ip[i];

       
        if (currVal != "N") {

           
            currNode->left = new Node(stoi(currVal));

     
            queue.push(currNode->left);
        }

   
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        if (currVal != "N") {

            
            currNode->right = new Node(stoi(currVal));

         
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}

int isSumProperty(struct Node *node);

int main() {
    int tc;
    scanf("%d ", &tc);
    while (tc--) {
        string str;
        getline(cin, str);
        Node *root = buildTree(str);
        cout << isSumProperty(root) << "\n";

        
    }


    return 0;
}

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};

int isSumProperty(Node *node)
{

    if(!node){
        return 1;
    }
    else if(!node->left && !node->right){
        return 1;
    }
    
    int value = 0;
    
    if(node->left){
        value += (node->left)->data;
    }
    if(node->right){
        value += (node->right)->data;
    }
    
    if(node->data != value){
        return 0;
    }
    
    return isSumProperty(node->left) && isSumProperty(node->right);
}
