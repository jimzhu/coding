/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        ostringstream ss;
        myserialize(root, ss);
        return ss.str();
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        return mydeserialize(in);
    }

private:
    void myserialize(TreeNode* root, ostringstream& in){
        if (!root)  in << "# ";
        else{
            in << root -> val << " ";
            myserialize(root -> left, in);
            myserialize(root -> right, in);
        }
    }
    
    TreeNode* mydeserialize(istringstream& data) {
        string str;
        data >> str;
        if(str == "#")  return NULL;
        TreeNode* root = new TreeNode(stoi(str));
        root -> left = mydeserialize(data);
        root -> right = mydeserialize(data);
        return root;
    }
    
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));