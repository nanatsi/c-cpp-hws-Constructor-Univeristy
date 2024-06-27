//CH - 230 - A
//a6.p8.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de



#include <stdio.h>
#include <stdlib.h>

//linked list defining
struct list {
    int info;
    struct list* next;

};
//creates function
struct list* push_back(struct list* my_list, int value) {
    struct list* cursor, * newel; 
    cursor = my_list;
    //allocating memory for the newel
    newel = (struct list*)malloc(sizeof(struct list));
    if(newel==NULL) {
    	exit(1);
	}

	//newel becomes a node of the info field
    newel->info = value;
    //the next poiner to NULL meaning newel is the last node
    newel->next = NULL;

	//	if it's empty the last and the first node is newel
    if (my_list == NULL)
		return newel;
	//if it's not empty till the last node make
	// cursor point to the next node
	
    while (cursor->next != NULL)
        cursor = cursor->next;
	//cursor points to the last element now	
	
	//newel is added in the end and 
	//it becomes the last element of out list
    cursor->next = newel;

    return my_list;
}
struct list* push_front(struct list* my_list, int value) {
    struct list* newel;
    //allocates memory for the newel
    newel = (struct list*)malloc(sizeof(struct list));
    if (newel==NULL) {
    	exit(1);
	}
	
	//newel becomes a node of the info field
    newel->info = value;
    //newel is added to the front
    newel->next = my_list;
    
    

    return newel;
}
struct list* dispose_elem(struct list* my_list) {
    struct list* nextelem;
    //if the list is empty returns mylist 
    if (my_list == NULL)
        return my_list;
        
    //if it's not, nextelem points to the second node 
    nextelem = my_list->next;
	//deallocates memory associated with the first element
    free(my_list);
	//mylist is updated to point to nextelem
    my_list = nextelem;
	//returns the updated list
    return my_list;
}
void print_list(struct list* my_list) {
    struct list* p;
    //till p exists
    for (p = my_list; p; p = p->next) {
    	//prints each node
        printf("%d ", p->info);
    }
    printf("\n");
}

//deallocates memory for all nodes
void dispose_list(struct list* my_list) {
    struct list* nextelem;
    
    while (my_list != NULL) {
    	
    	
        nextelem = my_list->next;

        free(my_list);

        my_list = nextelem;

    }
}
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
