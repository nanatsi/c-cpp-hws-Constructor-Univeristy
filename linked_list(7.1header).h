//CH - 230 - A
//a7.p3.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// declarations of the structs
struct list {
    int info;
    struct list* next;
};

// functions used
struct list* push_back(struct list* my_list, int value);
struct list* push_front(struct list* my_list, int value);
struct list* dispose_elem(struct list* my_list);
void print_list(struct list* my_list);
void dispose_list(struct list* my_list);

#endif

