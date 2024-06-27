//CH - 230 - A
//a8.p3.c
// Nana Tsignadze
//ntsignadze@jacobs - university.de

/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue* pq)
{
    pq->front = pq->rear = NULL;
    pq->items = 0;
}

int queue_is_full(const Queue* pq)
{
    return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue* pq)
{
    return pq->items == 0;
}

int queue_item_count(const Queue* pq)
{
    return pq->items;
}

int enqueue(Item item, Queue* pq)
{    //checks if queue is full
    if (queue_is_full(pq))
        return 0;
    //allocates memory
    Node* newnode = malloc(sizeof(Node));
    if (newnode == NULL)
        exit(1);
    //copyes item to node    
    newnode->item = item;
    newnode->next = NULL;
    //sets current rear node's next pointer to new node
    if (pq->rear != NULL)
        pq->rear->next = newnode;
    //in case queue is empty the front node becomes newnode 
    pq->rear = newnode;
    if (pq->front == NULL)
        pq->front = newnode;
    //sets rear pointer to newnode
    pq->rear = newnode;
    //adds 1 item to count
    pq->items++;
    return 0;
}

int dequeue(Item* pitem, Queue* pq) {
    //checks if it's empty
    if (queue_is_empty(pq))
        return 0;

    //assigns value to clear	
    Node* clear = pq->front;
    *pitem = pq->front->item;
    //resets head pointer to the next item
    pq->front = pq->front->next;

    //deallocates memory
    free(clear);

    if (queue_is_empty(pq)) {
        //sets both pointer to NULL
        //if it's empty
        pq->front = NULL;
        pq->rear = NULL;
    }

    //decrementing count
    pq->items--;

    return 0;


}

void printq(Queue* pq) {
    //assigns value to a current element pointer
    Node* curr = pq->front;


    for (; curr != NULL; curr = curr->next) {
        //prints each one till the last element
        printf("%d ", curr->item);

    }

}


void empty_queue(Queue* pq)
{
    Item dummy;
    while (!queue_is_empty(pq)) {
        dequeue(&dummy, pq);
    }
}
