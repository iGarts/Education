//Linked list
#include <iostream>

using namespace std;

struct List_node {
    List_node *next;
    int *data;
}list_node;

struct List {
    int size;
    List_node *head;
    List_node *tail;
}list;

//array init
List * create_list(void) {
    List *Lt = new List;
    Lt->size = 0;
    Lt->head = NULL;
    Lt->tail = Lt->head;
    return Lt;
}

//add element to start
void list_push(List *Lt,int *data) {
    List_node *node = new List_node;
    node->data = data;
    node->next = Lt->head;
    Lt->head = node;
    Lt->size += 1;
}

//extract element from list
void * list_pop(List *Lt) {
    if (Lt->size == 0)
        return NULL;
    List_node *node = Lt->head;
    void *ret_val = node->next;
    delete(node);
    if (Lt->size == 0) {
    //if is last element
        Lt->head = NULL;
        Lt->tail = NULL;}
        return ret_val;
}

//add element to tail
void list_push_back(List *Lt, int *data) {
    List_node *node = new List_node;
    node->data = data;
    if (Lt->tail != NULL)
        Lt->tail->next = node;
    else Lt->head - node;
    Lt->tail = node;
    Lt->size +=1;
}

int main() {
    List *p_list = create_list();
    int data = 0, *ptr;
    list_push(p_list,&data);
}