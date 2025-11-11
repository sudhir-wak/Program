#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

void push(int x) {
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    printf("%d pushed\n", x);
}

void pop() {
    if (top == NULL)
        printf("Stack empty\n");
    else {
        printf("%d popped\n", top->data);
        struct Node* temp = top;
        top = top->next;
        free(temp);
    }
}

void display() {
    struct Node* t = top;
    if (t == NULL) printf("Stack empty\n");
    else {
        printf("Stack:\n");
        while (t != NULL) {
            printf("%d\n", t->data);
            t = t->next;
        }
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    pop();
    display();
    return 0;
}