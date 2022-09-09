#include<stdio.h>

#define SIZE 50

int q[SIZE], i, front = 0, rear = 0;

void enque(int item){
    if(rear ==  SIZE){
        printf("Queue is full!");
    } else{
        q[rear] = item;
        rear++;
    }

}

void deque(int item){
    if(front == rear){
        printf("Queue is empty!!");
    } else{
        front++;
    }
}

void display()
{
    printf("\nElements of the queue are: ");
    for(i=front; i<rear; i++)
    {
        printf("\t%d\t", q[i]);
    }
    printf("\n");
}

int main()
{
    printf("Enqueue adding value 7, 8, 9, 10: ");
    enque(7);
    enque(8);
    enque(9);
    enque(10);

    display();

    printf("\n\nAfter deleting element 7, 8: ");
    deque(7);
    deque(8);
    display();

    printf("\n\nAfter adding 12, 13: ");
    enque(12);
    enque(13);
    display();

    return 0;
}
