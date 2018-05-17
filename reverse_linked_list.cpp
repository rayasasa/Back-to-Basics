#include <iostream> 

#include <stack> 

  

/*Reverse a linked list */ 

using namespace std; 

  

struct Node{ 

    int data; 

    struct Node* next; 

}; 

  

stack <int> myStack; 

  

void insert(Node* head, int data){ 

    Node* p = new Node(); 

    p->data = data; 

    p->next = NULL; 

    if(head == NULL){ 

        head = p; 

    } 

     

    else if(head->next == NULL){ 

        head->next = p; 

    } 

     

    else{ 

        while(head->next != NULL){ 

            head = head->next; 

        } 

        head->next = p; 

    } 

     

} 

  

void traverse(Node* head){ 

    Node* current; 

    current = head; 

    while(current->next != NULL){ 

        myStack.push(current->data); 

        current = current->next; 

    } 

    myStack.push(current->data); 

} 

int main() { 

    Node* head = new Node(); 

    insert(head, 1); 

    insert(head, 4); 

    insert(head, 7); 

    insert(head, 8); 

     

    traverse(head); 

    while(!myStack.empty()){ 

        cout << myStack.top() << endl; 

        myStack.pop(); 

    } 

    return 0; 

} 