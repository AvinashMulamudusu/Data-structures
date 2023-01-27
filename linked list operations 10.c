#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head;

void insert(int x) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}

void print() {
    struct Node* temp = head;
    printf("List is: ");
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void delete(int n) {
    struct Node* temp1 = head;
    if(n == 1) {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for(i=0;i<n-2;i++)
        temp1 = temp1->next;
    struct Node* temp2 = temp1->next;
    temp1->next = temp2->next;
    free(temp2);
}

int main() {
    head = NULL;
    int n, i, x;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        printf("Enter the element: ");
        scanf("%d", &x);
        insert(x);
        print();
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &x);
    delete(x);
    print();
    return 0;
}

