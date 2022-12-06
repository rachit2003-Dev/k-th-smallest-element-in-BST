class Solution {
  public:
    int smallest(Node* root,int &k){
        
        if(root->left){
            int val = smallest(root->left,k);
            if (k == 0) return val;
        }
        
        --k;
        if(k == 0) return root->data;
        
        if(root->right){
            int val = smallest(root->right,k);
            if (k == 0) return val;
        }
        
        return -1;
    }

    int KthSmallestElement(Node *root, int K) {
        return smallest(root,K);
    }
};
