// Tnode* delete_node(Tnode* root, int key){

//     Tnode* p = root;
//     Tnode* temp = nullptr;

//     // Search for the node
//     while(p != nullptr && p->data != key){

//         temp = p;

//         if(key < p->data){
//             p = p->lchild;
//         }
//         else{
//             p = p->rchild;
//         }
//     }

//     // Node not found
//     if(p == nullptr){
//         return root;
//     }

//     // Case 1: Node has two children
//     if(p->lchild != nullptr && p->rchild != nullptr){

//         Tnode* parent = p;
//         Tnode* successor = p->rchild;

//         while(successor->lchild != nullptr){
//             parent = successor;
//             successor = successor->lchild;
//         }

//         p->data = successor->data;

//         p = successor;
//         temp = parent;
//     }

//     // Now p has at most one child

//     Tnode* child;

//     if(p->lchild != nullptr){
//         child = p->lchild;
//     }
//     else{
//         child = p->rchild;
//     }

//     // Deleting root
//     if(temp == nullptr){
//         delete p;
//         return child;
//     }

//     // Connect parent to child
//     if(temp->lchild == p){
//         temp->lchild = child;
//     }
//     else{
//         temp->rchild = child;
//     }

//     delete p;

//     return root;
// }