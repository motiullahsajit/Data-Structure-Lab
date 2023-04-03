#include <iostream>
#define MAX_SIZE 6

using namespace std;

class Queue {
  private:
    char items[MAX_SIZE];
    int front, rear;

  public:
    Queue() {
      front = -1;
      rear = -1;
    }

    bool isFull() {
      if (front == 0 && rear == MAX_SIZE - 1) {
        return true;
      }
      if (front == rear + 1) {
        return true;
      }
      return false;
    }

    bool isEmpty() {
      if (front == -1) {
        return true;
      }
      return false;
    }

    void enqueue(char item) {
      if (isFull()) {
        cout << "Queue is full" << endl;
      } else {
        if (front == -1) {
          front = 0;
        }
        rear = (rear + 1) % MAX_SIZE;
        items[rear] = item;
        cout << item << " enqueued to queue" << endl;
      }
    }

    char dequeue() {
      char item;
      if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return '\0';
      } else {
        item = items[front];
        if (front == rear) {
          front = -1;
          rear = -1;
        } else {
          front = (front + 1) % MAX_SIZE;
        }
        return item;
      }
    }
};

int main() {
  Queue q;

  q.enqueue('F');

  cout << "First dequeue: " << q.dequeue() << endl;
  cout << "Second dequeue: " << q.dequeue() << endl;

  q.enqueue('K');
  q.enqueue('L');
  q.enqueue('M');

  cout << "Third dequeue: " << q.dequeue() << endl;
  cout << "Fourth dequeue: " << q.dequeue() << endl;

  q.enqueue('R');

  cout << "Fifth dequeue: " << q.dequeue() << endl;
  cout << "Sixth dequeue: " << q.dequeue() << endl;

  q.enqueue('S');

  cout << "Seventh dequeue: " << q.dequeue() << endl;
  cout << "Eighth dequeue: " << q.dequeue() << endl;

  cout << "Ninth dequeue: " << q.dequeue() << endl;
  cout << "Tenth dequeue: " << q.dequeue() << endl;

  return 0;
}
