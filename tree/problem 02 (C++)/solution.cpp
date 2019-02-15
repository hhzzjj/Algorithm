/*
struct TreeNode {
    char data;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};*/
 
 
 
 
class Solution {
public:
    void CreateBiTree(TreeNode *pRoot)
    {
        char c;
        cin>>c;
        if(c=='#')
          pRoot=NULL;
        else
        {
          pRoot=new TreeNode;
          pRoot->data=c;
          CreateBiTree(pRoot->left);
          CreateBiTree(pRoot->right);
        }
    }
};
