#include <iostream>

using namespace std;

static int i;

struct Node {
    struct Node_func {
        Node* add(void) {
            Node * ptr_node = new Node;
            ptr_node->next = NULL;
            i++;
            return ptr_node;};
        Node* push(Node *n) {
            Node * ptr_node = new Node;
            n->next = ptr_node;
            i++;
            return ptr_node;};
        }node_func;
    Node *next;
}node;

int main() {
    Node * ptr_list = node.node_func.add();
    node.node_func.push(ptr_list);
    cout << i;
}
