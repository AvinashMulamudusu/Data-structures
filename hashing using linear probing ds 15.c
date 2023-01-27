#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define TABLE_SIZE 10

int table[TABLE_SIZE];

int hash(int key) {
    return key % TABLE_SIZE;
}

void insert(int key) {
    int index = hash(key);
    if (table[index] != 0) {
        int i = (index + 1) % TABLE_SIZE;
        while (table[i] != 0 && i != index) {
            i = (i + 1) % TABLE_SIZE;
        }
        if (i == index) {
            printf("Table is full\n");
            return;
        }
        table[i] = key;
    } else {
        table[index] = key;
    }
    printf("%d inserted at index %d\n", key, index);
}

int search(int key) {
    int index = hash(key);
    if (table[index] == key) {
        return index;
    }
    int i = (index + 1) % TABLE_SIZE;
    while (table[i] != key && i != index) {
        i = (i + 1) % TABLE_SIZE;
    }
    if (i == index) {
        return -1;
    }
    return i;
}

void delete(int key) {
    int index = search(key);
    if (index == -1) {
        printf("Key not found\n");
        return;
    }
    table[index] = 0;
    printf("%d deleted from index %d\n", key, index);
}

int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    insert(60);
    insert(70);
    insert(80);
    insert(90);
    insert(100);
    printf("%d found at index %d\n", 40, search(40));
    delete(40);
    printf("%d found at index %d\n", 40, search(40));
    return 0;
}

