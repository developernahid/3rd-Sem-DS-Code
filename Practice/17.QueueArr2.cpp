#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Queue {
  private:
    int front; // Front index of the queue
    int rear; // Rear index of the queue
    int arr[MAX_SIZE]; // Array to store queue elements

  public:
    Queue() {
      front = -1; // Initialize front index to -1
      rear = -1; // Initialize rear index to -1
    }

    bool isFull() {
      return (rear == MAX_SIZE - 1); // Check if the queue is full
    }

    bool isEmpty() {
      return (front == -1 && rear == -1); // Check if the queue is empty
    }

    void enqueue(int x) {
      if (isFull()) {
        cout << "Error: Queue is full" << endl; // Display error message if queue is full
        return;
      }
      if (isEmpty()) {
        front = 0; // If the queue is empty, update front to 0
        rear = 0; // If the queue is empty, update rear to 0
      } else {
        rear++; // Increment rear index
      }
      arr[rear] = x; // Insert the element at the rear index
    }

    void dequeue() {
      if (isEmpty()) {
        cout << "Error: Queue is empty" << endl; // Display error message if queue is empty
        return;
      }
      if (front == rear) {
        front = -1; // If the queue has only one element, update front to -1
        rear = -1; // If the queue has only one element, update rear to -1
      } else {
        front++; // Increment front index
      }
    }

    int peek() {
      if (isEmpty()) {
        cout << "Error: Queue is empty" << endl; // Display error message if queue is empty
        return -1;
      }
      return arr[front]; // Return the element at the front of the queue
    }

    void display() {
      if (isEmpty()) {
        cout << "Error: Queue is empty" << endl; // Display error message if queue is empty
        return;
      }
      cout << "Queue elements are: ";
      for (int i = front; i <= rear; i++) {
        cout << arr[i] << " "; // Display all elements in the queue
      }
      cout << endl;
    }
};

int main() {
  Queue q;
  q.enqueue(1);
  q.enqueue(2);
  q.enqueue(3);
  q.enqueue(4);
  q.enqueue(5);
  cout << "\nIs the Queue full? " << q.isFull() << endl;
  cout << "\nIs the Queue is empty? " << q.isEmpty() << endl;
  q.display();
  cout << "\nFront element is " << q.peek() << endl;
  cout << "\nRemove two elements from the Queue" << endl;
  q.dequeue();
  q.dequeue();
  q.display();
  cout << "\nFront element is " << q.peek() << endl;
  return 0;
}
