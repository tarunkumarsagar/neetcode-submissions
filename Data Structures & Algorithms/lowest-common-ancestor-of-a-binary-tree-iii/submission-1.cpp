/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* parent;
};
*/

// class Solution {
// public:
//     Node* lowestCommonAncestor(Node* p, Node * q) {
//         unordered_set<int> st;
//         Node* curr1=p;
//         while(p!=nullptr){
//             st.insert(p->val);
//             p=p->parent;
//         }

//         while(q!=nullptr){
//             if(st.contains(q->val)){
//                 return q;
//             }
//             q=q->parent;
//         }
//         return nullptr;
//     }
//};
class Solution {
public:
    Node* lowestCommonAncestor(Node* p, Node * q) {
      Node* p1=p;
      Node* q1=q;

      while(p1!=q1){
        p1 = (p1==nullptr)? q : p1->parent;
        q1 = (q1==nullptr)? p : q1->parent;
      }
      return q1;
    }
};