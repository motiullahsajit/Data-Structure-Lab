#include <iostream>
using namespace std;

const int MAX_SIZE = 5; // maximum size of queue

class Queue {
    int queue[MAX_SIZE];
    int front, rear;

    public:
        Queue() {
            front = -1;
            rear = -1;
        }

        bool isFull() {
            if (rear == MAX_SIZE - 1) {
                return true;
            }
            return false;
        }

        bool isEmpty() {
            if (front == -1 && rear == -1) {
                return true;
            }
            return false;
        }

        void enQueue(int x) {
            if (isFull()) {
                cout << "Queue is full\n";
                return;
            }
            else if (isEmpty()) {
                front = 0;
                rear = 0;
            }
            else {
                rear++;
            }
            queue[rear] = x;
        }

        void deQueue() {
            if (isEmpty()) {
                cout << "Queue is empty\n";
                return;
            }
            else if (front == rear) {
                front = -1;
                rear = -1;
            }
            else {
                front++;
            }
        }

        void removeWebPage() {
            if (isEmpty() || rear < 2) {
                cout << "Cannot remove web page\n";
                return;
            }
            else {
                for (int i = 2; i <= rear; i++) {
                    if (i == 3) {
                        continue;
                    }
                    queue[i-1] = queue[i];
                }
                rear--;
            }
        }

        void display() {
            if (isEmpty()) {
                cout << "Queue is empty\n";
                return;
            }
            for (int i = front; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
        }
};

int main() {
    Queue q;

    // adding 5 web pages
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // removing web page at position 3
    q.removeWebPage();

    // displaying final queue
    q.display();

    return 0;
}
