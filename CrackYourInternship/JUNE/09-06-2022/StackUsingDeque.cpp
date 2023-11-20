//Stack Using Deque
//Link - https://practice.geeksforgeeks.org/problems/stack-using-deque/1
T.C - O(n) 

#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    // Initialize your data structure.
    stack<int> s;
    Stack()
    {
    }

    // Pushes 'X' into the stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x)
    {
        // Write your code here.
        s.push(x);
        return true;
    }

    // Pops top element from Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop()
    {
        // Write your code here.
        if (s.empty())
            return -1;
        int ele = s.top();
        s.pop();
        return ele;
    }

    // Returns the topmost element of the stack. In case the stack is empty, it returns -1.
    int top()
    {
        // Write your code here.
        if (s.empty())
            return -1;
        return s.top();
    }

    // Returns true if the stack is empty, otherwise false.
    bool isEmpty()
    {
        // Write your code here.
        if (s.empty())
            return true;
        return false;
    }

    // Returns the number of elements currently present in the stack.
    int size()
    {
        // Write your code here.
        return s.size();
    }
};
