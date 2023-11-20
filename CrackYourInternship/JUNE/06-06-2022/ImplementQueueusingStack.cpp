class MyQueue
{
public:
    stack<int> stk1;
    stack<int> stk2;
    MyQueue()
    {
    }

    void push(int x)
    {
        while (!stk1.empty())
        {
            stk2.push(stk1.top());
            stk1.pop();
        }

        stk1.push(x);
        while (!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
    }

    int pop()
    {
        int c = stk.top();
        stk.pop();
        return c;
    }

    int peek()
    {
        return stk.top();
    }

    bool empty()
    {
        return stk.empty();
    }
};
/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */