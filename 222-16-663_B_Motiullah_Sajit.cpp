#include <bits/stdc++.h>

using namespace std;

#define CAPACITY 5

int ourQueue[CAPACITY];

int front = 0, rear = -1, totalItems = 0;

bool is_full()
{
    if (totalItems == CAPACITY)
        return true;
    else
        return false;
}

bool is_null()
{
    if (totalItems == 0)
        return true;
    else
        return false;
}

void enqueue()
{
    if (is_full())
    {
        cout << "Queue is full\n";
    }
    else
    {
        int v;
        system("cls");
        cout << "Enter the element: ";
        cin >> v;
        rear = (rear + 1) % CAPACITY;
        ourQueue[rear] = v;
        totalItems++;
        cout << "Element added successfully\n";
    }
}

void dequeue()
{
    if (is_null())
    {
        cout << "Empty queue\n";
    }
    else
    {
        system("cls");
        ourQueue[front] = NULL;
        front = (front + 1) % CAPACITY;
        totalItems--;
        cout << "Dequeued successfully\n";
    }
}

void print_queue()
{
    if (is_null())
        cout << "Queue is empty\n";
    else
    {
        system("cls");
        cout << "Queue:\n";
        for (int i = 0; i < CAPACITY; i++)
        {
            if (ourQueue[i] == NULL)
                cout << "- ";
            else
                cout << ourQueue[i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int input;

    while (1)
    {

    top:
        cout << "1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> input;
        if (input == 1)
            enqueue();
        else if (input == 2)
            dequeue();
        else if (input == 3)
            print_queue();
        else if (input == 4)
            break;
        else
        {
            cout << "Invalid input, please enter again\n";
            goto top;
        }
    }

    return 0;
}