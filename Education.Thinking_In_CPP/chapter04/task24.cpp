#include <iostream>

using namespace std;

static int i;

struct Node {
    Node *next;
}node;

Node* add(void) {
    Node * ptr_node = new Node;
    ptr_node->next = NULL;
    i++;
    return ptr_node;
}

Node* push(Node *n) {
    Node * ptr_node = new Node;
    n->next = ptr_node;
    i++;
    return ptr_node;
}

int main() {
    Node * ptr_list = add();
    push(ptr_list);
    cout << i;
}