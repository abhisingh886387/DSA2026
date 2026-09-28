#include <stdio.h> 
#include <stdlib.h> 
 
// Step 1: Create Node structure 
struct Node { 
    int data; 
    struct Node* next; 
}; 
 
// Step 2: Insert at Beginning 
struct Node* insertAtBeginning(struct Node* head, int value) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
     
    newNode->data = value;       // store value 
    newNode->next = head;        // point to old head 
     
    return newNode;              // new node becomes head 
} 
 
// Step 3: Insert at End 
struct Node* insertAtEnd(struct Node* head, int value) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
     
    newNode->data = value; 
    newNode->next = NULL; 
 
    // if list is empty 
    if (head == NULL) { 
        return newNode; 
    } 
 
    struct Node* temp = head; 
 
    // move to last node 
    while (temp->next != NULL) { 
        temp = temp->next; 
    } 
 
    temp->next = newNode;   // attach new node at end 
    return head; 
} 
 
// Step 4: Insert at Random Position 
struct Node* insertAtPosition(struct Node* head, int value, int pos) { 
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node)); 
    newNode->data = value; 
 
    // insert at position 1 
    if (pos == 1) { 
        newNode->next = head; 
        return newNode; 
    } 
 
    struct Node* temp = head; 
 
    // go to (pos - 1) node 
    for (int i = 1; i < pos - 1 && temp != NULL; i++) { 
        temp = temp->next; 
    } 
 
    // invalid position 
    if (temp == NULL) { 
        printf("Invalid Position!\n"); 
        return head; 
    } 
 
    newNode->next = temp->next; 
    temp->next = newNode; 
 
    return head; 
} 
 
// Step 5: Display Linked List 
void display(struct Node* head) { 
    struct Node* temp = head; 
 
    if (temp == NULL) { 
        printf("List is empty\n"); 
        return; 
    } 
 
    printf("Linked List: "); 
    while (temp != NULL) { 
        printf("%d -> ", temp->data); 
        temp = temp->next; 
    } 
    printf("NULL\n"); 
} 
 
// Step 6: Main Function 
int main() { 
    struct Node* head = NULL; 
 
    // Insert at beginning 
    head = insertAtBeginning(head, 30); 
    head = insertAtBeginning(head, 20); 
    head = insertAtBeginning(head, 10); 
 
    display(head); 
 
    // Insert at end 
    head = insertAtEnd(head, 40); 
    head = insertAtEnd(head, 50); 
 
    display(head); 
 
    // Insert at position 
    head = insertAtPosition(head, 25, 3); 
 
    display(head); 
 
    return 0; 
} 
