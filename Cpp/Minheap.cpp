#include <iostream>
using namespace std;

class MinHeap {
    int arr[100];
    int size;

public:
    MinHeap() {
        size = 0;
    }

    // Insert element
    void insert(int value) {
        size++;
        int index = size;
        arr[index] = value;

        // Heapify Up
        while (index > 1) {
            int parent = index / 2;
            if (arr[parent] > arr[index]) {
                swap(arr[parent], arr[index]);
                index = parent;
            } else {
                break;
            }
        }
    }

    // Delete minimum element (root)
    void deleteMin() {
        if (size == 0) {
            cout << "Heap is empty\n";
            return;
        }

        arr[1] = arr[size];
        size--;

        int index = 1;

        // Heapify Down
        while (index <= size) {
            int left = 2 * index;
            int right = 2 * index + 1;
            int smallest = index;

            if (left <= size && arr[left] < arr[smallest])
                smallest = left;

            if (right <= size && arr[right] < arr[smallest])
                smallest = right;

            if (smallest != index) {
                swap(arr[index], arr[smallest]);
                index = smallest;
            } else {
                break;
            }
        }
    }

    // Get minimum element
    int getMin() {
        if (size == 0) {
            cout << "Heap is empty\n";
            return -1;
        }
        return arr[1];
    }

    // Display heap
    void display() {
        for (int i = 1; i <= size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    MinHeap h;

    h.insert(20);
    h.insert(10);
    h.insert(30);
    h.insert(5);
    h.insert(15);

    cout << "Min Heap: ";
    h.display();

    cout << "Minimum Element: " << h.getMin() << endl;

    h.deleteMin();

    cout << "After deleting minimum: ";
    h.display();

    return 0;
}
