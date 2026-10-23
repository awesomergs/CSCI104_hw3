#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************


void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot){
    if (head == NULL) {        
        smaller = NULL;
        larger = NULL;
        return;
    }

    Node* curr = head;
    Node* remainder = head->next;
    head = NULL;

    llpivot(remainder, smaller, larger, pivot);

    if (curr->val > pivot){
        curr->next = larger; //should work even if larger is empty
        larger = curr;
    } else {
        curr->next = smaller; 
        smaller = curr;
    }

    return;
}
