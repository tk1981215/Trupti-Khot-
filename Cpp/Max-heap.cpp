#include <iostream>
using namespace std;

class MaxHeap {
    int arr[100];
    int size;

public:
    MaxHeap() {
        size = 0;
    }

    // Insert element
    void insert(int value) {
        size++;
        int index = size;
        arr[index] = value;

        // Move upward until heap property is satisfied
        while (index > 1) {
            int parent = index / 2;

            if (arr[parent] < arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Delete root element
    void deleteFromHeap() {
        if (size == 0) {
            cout << "Heap is empty\n";
            return;
        }

        // Put last element at root
        arr[1] = arr[size];
        size--;

        int index = 1;

        while (index <= size) {
            int left = 2 * index;
            int right = 2 * index + 1;
            int largest = index;

            if (left <= size && arr[left] > arr[largest])
                largest = left;

            if (right <= size && arr[right] > arr[largest])
                largest = right;

            if (largest != index) {
                swap(arr[index], arr[largest]);
                index = largest;
            } else {
                break;
            }
        }
    }

    // Print heap
    void print() {
        for (int i = 1; i <= size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    MaxHeap h;

    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);

    cout << "Max Heap: ";
    h.print();

    h.deleteFromHeap();

    cout << "After deleting root: ";
    h.print();

    return 0;
}
