#include<iostream>
#include<stack>
#include<queue>
#include<deque>
#include<list>

using namespace std;

int main(){


    //Stack
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(6);

    cout<<st.top()<<endl;
    //delete elements

    st.pop();



    //Queue

    queue<int> qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(6);

    //delete elemnts
    qu.pop();

    //access front element
    cout<<qu.front()<<endl;


    //Dequeue

    deque<int> dqu;

    dqu.push_back(10);//add element to back
    dqu.push_front(20);//add element to front
    dqu.pop_back();//remove the last element
    dqu.pop_front();//remove the first element


    //Singly Linked List

    list<int> li;
//Inserting elements
    li.push_back(1);
    li.push_back(2);
    li.push_back(3);
    li.push_back(4);
    li.push_back(6);
//deleting elemnt
    li.push_front(1);
    li.push_front(2);
    li.push_front(3);
    li.push_front(4);
    li.push_front(6);


    //delete element
    li.pop_back();
    li.pop_front();

    //access the head of the linked list
    cout<<li.front()<<endl;//access the head
    cout<<li.back()<<endl;//access the tail


    //reverse linked list
    li.reverse();
    return 0;
}