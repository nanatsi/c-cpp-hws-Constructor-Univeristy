//CH - 230 - A
//a7.p2.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

//creats a list structure
struct list {
    int info;
    struct list* next;
    struct list* prev;
};
struct list* push_front(struct list* my_list, char ch) {
    struct list* newel;
    // allocates memory for the new element
    newel = (struct list*)malloc(sizeof(struct list));
    // assigns the value
    newel->info = ch;
    newel->next = my_list;
    newel->prev = NULL;
    if (my_list)
        my_list->prev = newel;
    //points to the first element and NULL
    return newel;
}
struct list* remove_all_ch(struct list* my_list, char ch) {
    struct list* cursor = my_list, * prev = NULL, * next = NULL;
    int ch_found = 0;
    while (cursor != NULL) {
        prev = cursor->prev;
        next = cursor->next;
        if (cursor->info == ch) {
		// counts the number of characters
            ch_found++; 
            free(cursor);
            if (prev != NULL)
                prev->next = next;
            else
                my_list = next;
            if (next != NULL)
                next->prev = prev;
        
            //removes the character and links next and prev nodes 
            
        }
        cursor = next;
        // removes all occurances of an inputed character
    }
    if (ch_found == 0) {
		printf("The element is not in the list!\n");
    }
    return my_list;
}
void print_list(struct list* my_list) {
    struct list* p;
    for (p = my_list; p; p = p->next) {
        printf("%c ", p->info);
        // prints each node
    }
    printf("\n");
}
void reverse_print(struct list* my_list) {
    struct list* cursor;
    cursor = my_list;
    // reaches the last element of the list
    while (cursor->next != NULL) {
        cursor = cursor->next;
    }
    // prints from last to the first
    while (cursor != NULL) {
        printf("%c ", cursor->info);
        cursor = cursor->prev;
    }
    printf("\n");
}
void dispose_list(struct list* my_list) {
    struct list* nextelem;
    while (my_list != NULL) {
        nextelem = my_list->next;
        // points to the following each time
        free(my_list);
        // deallocates memory
        my_list = nextelem;
        // assigns new value to my_list
    }
}
int main() {
    int n;
    char ch;
    struct list* my_list = NULL;
    while (1) {
        scanf("%d", &n);
        switch (n) {
        	// inserts the element at the beginnig of the list
        case 1:
            scanf(" %c", &ch);
            my_list = push_front(my_list, ch);
            break;
            // removing all elements
        case 2:
            scanf(" %c", &ch);
            my_list = remove_all_ch(my_list, ch);
            break;
            // prints the list
        case 3:
            print_list(my_list);
            break;
            // prints backwards
        case 4:
            reverse_print(my_list);
            break;
            // deallocates memory and stops the execution of the program
        case 5:
            dispose_list(my_list);
            return 0;
        }
    }
    return 0;
}
