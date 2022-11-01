#include <bits/stdc++.h>
using namespace std;

class heap
{
private:
    int arr[100];
    int size;

public:
    heap()
    {
        arr[0] = -1;
        size = 0;
    }
    // complexity - O(logn)
    void insert(int val)
    {
        size = size + 1; // increment size by 1
        // inserting element at last index
        int index = size;
        arr[index] = val;

        // making heap
        while (index > 1)
        {
            int parent = index / 2;
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }
    // ompplexity - O(logn)
    void remove()
    {
        if (size == 0)
        {
            cout << "NA"
                 << "\n";
            return;
        }
        // put last element ito 1st index
        arr[1] = arr[size];
        // remove last node
        size--;
        // propagate root node to its correct position
        int idx = 1;
        while (idx < size)
        {
            // finding left and right child of each node
            int leftIndex = 2 * idx;
            int rightIndex = 2 * idx + 1;

            // putting nodes in their propeer position

            if (leftIndex < size && arr[idx] < arr[leftIndex])
            {
                swap(arr[leftIndex], arr[idx]);
                idx = leftIndex;
            }
            else if (rightIndex < size && arr[idx] < arr[rightIndex])
            {
                swap(arr[rightIndex], arr[idx]);
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

// convert any array into heap
// Complexity - O(logn)
void heapify(int arr[], int size, int idx)
{
    int largest = idx;
    int left = 2 * idx;
    int right = 2 * idx + 1;
    if (left < size && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < size && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != idx)
    {
        swap(arr[largest], arr[idx]);
        heapify(arr, size, largest);
    }
}

void heapSort(int arr[], int size)
{
    // swap a[i] -> a[n]
    // size--;
    // heapify(root)
    int n = size;
    while (n > 1)
    {
        swap(arr[n], arr[1]);
        n--;
        heapify(arr, size, 1);
    }
}

int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(52);
    h.insert(54);
    h.insert(70);
    h.print();

    h.remove();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    int size = 5;
    for (int i = size / 2; i > 0; i--)
    {
        heapify(arr, size, i);
    }
    for (int i = 1; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // heapSort
    heapSort(arr, size);
    for (auto it : arr)
    {
        cout << it << " ";
    }
    cout << "\n";

    cout << "MaxHeap Using Priority Queue"
         << "\n";
    priority_queue<int> pq;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << "Element at TOP :" << pq.top() << "\n";
    cout << "size: " << pq.size() << "\n";
    cout << pq.empty();
    // Minheap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq.push(4);
    pq.push(2);
    pq.push(5);
    pq.push(3);
    cout << "Element at TOP :" << pq.top() << "\n";
    cout << "size: " << pq.size() << "\n";
    cout << pq.empty();
    return 0;
}