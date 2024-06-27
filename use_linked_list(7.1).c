#include "linked_list.h"
#include<stdlib.h> 
#include<stdio.h>


int main() {
    int i;
    char chari;
    struct list* my_list = NULL;
    while (1) {
        scanf("%c", &chari);

        switch (chari) {
        case 'a':
            scanf("%d", &i);
            //in case 'a', i becomes the last node
            my_list = push_back(my_list, i);
            break;

        case 'b':
            scanf("%d", &i);
            //in case 'b' i becomes the first elem
            my_list = push_front(my_list, i);
            break;

        case 'r':
            //in case 'r' the first elem is removed
            my_list = dispose_elem(my_list);
            break;

        case 'p':
            //'p' character prints list
            print_list(my_list);
            break;

        case 'q':
            //'q' deallocates memory for each node
            dispose_list(my_list);
            return 0;

        }
    }
    return 0;
}
