#include <stdio.h>
#define CAPACITY 5

int ourQueue[CAPACITY];

int front = 0, rear = -1, totalItem = 0;

int main()
{
    int input, x;
    while (1)
    {
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &input);

        if (input == 1)
        {
            printf("Enter the element : ");
            scanf("%d", &x);
            enqueue(x);
        }
        else if (input == 2)
            dequeue();
        else if (input == 3)
            printQueue();
        else if (input == 4)
            break;
    }

    return 0;
}