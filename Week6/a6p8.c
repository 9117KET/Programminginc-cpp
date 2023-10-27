/*
a6p78
Kinlo Ephriam Tangiri
kephriamtangiri@constructor.university

A Linked list.
*/
#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
  int item;
  struct Node* next;
};

// Function implementing insertion at the beginning of the linkelist

void insertAtBeginning(struct Node** ref, int data) {

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  // Allocate memory to a node


  new_node -> item = data;   // insert the item
  new_node -> next = (*ref);

  (*ref) = new_node;   // Move head to new node
}

// Function implementing insertion at the ending of the linkelist


void insertAtEnd(struct Node** ref, int data) {

  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  // Allocate memory to a node


  new_node -> item = data;
  new_node -> next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }
  struct Node* last = *ref;
  while (last -> next != NULL)
    last = last -> next;

  last -> next = new_node;
  return;
}

// Function implementing deletion at the beginning of the linkelist

struct Node* deleteNode(struct Node** ref) {
    if(*ref == NULL){
        return NULL;
        //checking whether *ref is NULL before trying to *ref -> next
    }
  struct Node *temp = *ref;
  struct Node *temp2 = temp->next;

  temp -> next = NULL;

  free(temp);
  return temp2;
}

// Print the linked list


void printList(struct Node* node) {
  while (node != NULL) {
    printf("%d ", node -> item);
    node = node -> next;
  }
  printf("\n");
}

// Main program
int main() {
  struct Node* head = NULL;

  int flag = 1;

  char option;
  int value = 0;

  while(flag)
  {
      scanf(" %c",&option);// The empty space is meant to compensate for whitespaces
      switch(option){
          case 'a':
            scanf("%d",&value);
            insertAtEnd(&head,value);
            break;
          case 'b':
            scanf("%d",&value);
            insertAtBeginning(&head,value);
            break;
          case 'r':
            head=deleteNode(&head);
            break;
          case 'p':
            printList(head);
            break;
          case 'q':
            flag = 0;
            break;
      }
  }

}
