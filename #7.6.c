//CH - 230 - A
//a7.p6.c
// Nana Tsignadze
//ntsignadze@jacobs-university.de

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//defining struct
struct person {
    char name[100];
    int age;
};
//sorting by name
int sortbyname (struct person first, struct person second) {
    //if first and second name are identical return age ascending 
    if (strcmp(first.name, second.name))
        return first.age - second.age;
    return strcmp(first.name, second.name);
}

int sortbyage(struct person first, struct person second) {
    //if first and second name are identical return age ascending 
    if (first.age == second.age)
        return strcmp(first.name, second.name);
    return first.age - second.age;
}
void bubblesort(struct person* data, int n,
    int (*compare) (struct person, struct person)) {
    //aditional variables for
    //  do&while loop and changing  
    int change;
    struct person temp;
    do {
        change = 0;
        for (int i = 0; i < n - 1; i++) {
            //if this second<first element switch
            if (compare(data[i], data[i + 1]) > 0) {
                temp = data[i];
                data[i] = data[i + 1];
                data[i + 1] = temp;
                change = 1;
            }
        } 
        // sorts the list
    } while (change);
    for (int i = 0; i < n; i++) {
        printf("{%s, ", data[i].name);
        printf("%d};", data[i].age);
    }
    printf("\n");
    // prints 
}

int main() {
    //declaration
    int persons;
    struct person* my_data;
    //reads the amount of persons
    scanf("%d", &persons);
    //allocates memory
    my_data = (struct person*)malloc(sizeof(struct person) * persons);
    if (my_data == NULL) {
        exit(1);
    }
    //reads names&ages
    for (int i = 0; i < persons; i++) {
        getchar();
        fgets(my_data[i].name, sizeof(my_data[i].name), stdin);
        strtok(my_data[i].name, "\n");
        scanf("%d", &my_data[i].age);
    }
    //uses functions
    bubblesort(my_data, persons, sortbyname); 
    bubblesort(my_data, persons, sortbyage);
    free(my_data); 
    return 0;
}