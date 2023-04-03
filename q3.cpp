#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
private:
    vector<int> heap;

    // Helper function to swap two elements in the heap
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

public:
    // Constructor to create an empty heap
    MaxHeap() {}

    // Function to insert a new element into the heap
    void insert(int val) {
        // Add the new element to the end of the heap
        heap.push_back(val);

        // Move the element up the heap until it's in the correct position
        int index = heap.size() - 1;
        while (index > 0 && heap[(index - 1) / 2] < heap[index]) {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }

    // Function to remove the maximum element from the heap
    int removeMax() {
        if (heap.size() == 0) {
            cerr << "Error: heap is empty!" << endl;
            return -1;
        }

        // Save the maximum value to return later
        int maxVal = heap[0];

        // Replace the root with the last element in the heap
        heap[0] = heap[heap.size() - 1];
        heap.pop_back();

        // Move the new root down the heap until it's in the correct position
        int index = 0;
        while (index * 2 + 1 < heap.size()) {
            int childIndex = index * 2 + 1;
            if (childIndex + 1 < heap.size() && heap[childIndex] < heap[childIndex + 1]) {
                childIndex++;
            }

            if (heap[index] < heap[childIndex]) {
                swap(heap[index], heap[childIndex]);
                index = childIndex;
            } else {
                break;
            }
        }

        return maxVal;
    }

    // Function to print the contents of the heap
    void print() {
        for (int i = 0; i < heap.size(); i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a new Max Heap
    MaxHeap heap;

    // Perform the operations mentioned in the scenario
    heap.insert(25);
    heap.insert(59);
    heap.insert(19);
    heap.insert(34);
    heap.insert(44);
    heap.insert(29);
    heap.insert(38);
    heap.insert(46);
    heap.insert(8);
    heap.insert(17);
    heap.insert(22);

    // Print the initial contents of the heap
    cout << "Initial Max Heap: ";
    heap.print();

    // Remove the element with value 29 from the heap
    heap.removeMax();
    heap.removeMax();
    heap.removeMax();
    heap.removeMax();
    heap.insert(29);

    // Print the reconstructed heap
    cout << "Reconstructed Max Heap: ";
    heap.print();

    return 0;
}
