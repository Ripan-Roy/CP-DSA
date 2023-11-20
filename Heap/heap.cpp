#include <bits/stdc++.h>
using namespace std;

class heap
{
private:
    vector<int> arr;
    int size;

public:
    heap()
    {
        arr.push_back(-1);
        size = 0;
    }
    void insert(int val)
    {
        size++;
        int index = size;
        arr.push_back(val);
        while (index > 1)
        {
            if (arr[index] > arr[index / 2])
            {
                swap(arr[index], arr[index / 2]);
                index = index / 2;
            }
            else
            {
                return;
            }
        }
    }
    void remove()
    {
        if (size == 0)
        {
            return;
        }
        swap(arr[1], arr[size]);
        size--;

        int index = 1;
        while (index < size)
        {
            int leftChild = 2 * index;
            int rightChild = 2 * index + 1;
            if(leftChild < size && arr[leftChild] < arr[index])
            {
                swap(arr[index], arr[leftChild]);
                index = leftChild;
            }
            else if(rightChild < size && arr[rightChild] < arr[index])
            {
                swap(arr[index], arr[rightChild]);
                index = rightChild;
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
    }
};

int main()
{
    heap h;
    int size;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        h.insert(x);
    }
    h.print();
    return 0;
}