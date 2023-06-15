class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void help(Node* node){
        if(node==NULL) return;
        
        help(node->left);
        help(node->right);
        auto temp=node->left;
        node->left=node->right;
        node->right=temp;
        
    }
    void mirror(Node* node) {
        // code here
        help(node);
        
        
    }
};
