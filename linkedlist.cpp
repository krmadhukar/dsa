#include <cstddef>
class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;
        
        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = NULL;
        }

};