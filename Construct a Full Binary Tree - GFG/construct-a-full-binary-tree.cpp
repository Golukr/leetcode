//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


// } Driver Code Ends
/* Structre of the Node of the Binary Tree is as follows
struct Node
{
        int data;
        struct Node *left, *right;
};
*/
// your task is to complete this function
// function should create a new binary tree
// function should return the root node to the 
// new binary tree formed
class Solution{
  public:
    Node* helper(int ps, int pe, int pre[], int pms, int pme, int preMirror[]){
        if(ps>pe || pms>pme) return NULL;
        
        Node* newNode=new Node(pre[ps]);
        
        if(ps==pe) return newNode;
        int i,j;
        for(i=ps; i<=pe; ++i){
            if(pre[i]==preMirror[pms+1]) break;
        }
        for(j=pms; j<=pme; ++j){
            if(preMirror[j]==pre[ps+1]) break;
        }
        newNode->left=helper(ps+1, i-1, pre, j, pme, preMirror);
        newNode->right=helper(i, pe, pre, pms+1, j-1, preMirror);
        return newNode;
    }


    Node* constructBinaryTree(int pre[], int preMirror[], int size)
    {
        // Code here
        int ps=0, pe=size-1, pms=0, pme=size-1;
        return helper(ps, pe, pre, pms, pme, preMirror);
    }
};

//{ Driver Code Starts.

void printInorder(Node* node)
{
	if (node == NULL)return;
	printInorder(node->left);
	cout<<node->data<<" ";
	printInorder(node->right);
}

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int preOrder[n];
	    int preOrderMirror[n];
	    for(int i=0; i<n; i++)cin>>preOrder[i];
	    for(int i=0; i<n; i++)cin>>preOrderMirror[i];
	    Solution obj;
	    printInorder(obj.constructBinaryTree(preOrder, preOrderMirror, n));
	    cout<<endl;
    }
	return 0;
}
// } Driver Code Ends