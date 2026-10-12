#include <bits/stdc++.h>
using namespace std;

void explainPair()
{

    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> pp = {1, {3, 4}};

    cout << pp.first << " " << pp.second.first << " " << pp.second.second;

    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};

    cout << arr[1].second;
}

void explainVector()
{
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);
    /*
    What is the difference between push_back() and emplace_back()?

    push_back() inserts an existing object into the container, whereas emplace_back() constructs
    the object directly in the container using the provided constructor arguments, avoiding
    unnecessary temporary objects and copy/move operations for complex types.


    is emplace_back() always faster?

    No.

    -> For primitive types (int, char, double), there is almost no difference.
    -> For complex objects (pair, tuple, string, custom classes), emplace_back() can avoid
       unnecessary copy/move operations and may be more efficient.
    */

    vector<int> v3(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin(); // here v.begin() points to the starting address
    it++;
    cout << *(it) << " "; // as in c++ '*' is used to access the value at an address

    it = it + 2;
    cout << *(it) << " ";

    it = v.end(); // end points to a memory address that is right after the last element

    vector<int>::reverse_iterator rit = v.rend(); // reverse end, points to before the first element
    rit = v.rbegin();                             // reverse begin, points to the last element

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " "; // last element

    for (vector<int>::iterator it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *(it2) << " ";
    }

    for (auto it2 = v.begin(); it2 != v.end(); it2++)
    {
        cout << *(it2) << " ";
    }

    for (auto elem : v)
    {
        cout << elem << " ";
    }

    // v = {10,20,12,23}
    v.erase(v.begin() + 1);

    // v = {10,20,12,23,35}
    v.erase(v.begin() + 2, v.begin() + 4); // {10,20,35} [start,end)

    // Insert function

    vector<int> v4(2, 100);           // {100,100}
    v4.insert(v4.begin(), 300);       // {300,100,100}
    v4.insert(v4.begin() + 1, 2, 10); // {300,10,10,100,100}

    vector<int> copyVec(2, 50);                            // {50,50}
    v4.insert(v4.begin(), copyVec.begin(), copyVec.end()); // {50,50,300,10,10,100,100}

    // v4 -> {10,20}
    cout << v4.size(); // 2

    // v4 -> {10,20}
    v4.pop_back(); // {10}

    // v1 -> {10,20}
    // v2 -> {30,40}
    v1.swap(v2); // v1 -> {30,40}, v2 -> {10,20}

    v.clear(); // erases entire vector

    cout << v.empty();
}

void explainList()
{
    list<int> ls;

    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}

    ls.emplace_front(1); // {1,5,2,4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);     // {1}
    dq.emplace_back(2);  // {1,2}
    dq.push_front(4);    // {4,1,2}
    dq.emplace_front(3); // {3,4,1,2}

    dq.pop_back();  // {3,4,1}
    dq.pop_front(); // {4,1}

    cout << dq.back();
    cout << dq.front();

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack()
{
    stack<int> st; // follows LIFO
    st.push(1);    // {1}
    st.push(2);    // {2,1}
    st.push(3);    // {3,2,1}
    st.push(3);    // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}

    cout << st.top(); // prints 5   "**st[2] is invalid**" (no random access on stack)

    st.pop(); // st looks like {3,3,2,1}

    cout << st.top(); // 3

    cout << st.size(); // 4

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue()
{
    queue<int> q; // follows FIFO
    q.push(1);    // {1}
    q.push(2);    // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;
    cout << q.back(); // prints 9

    // q is {1,2,9}
    cout << q.front(); // prints 1

    q.pop(); // {2,9}

    cout << q.front(); // prints 2

    // size, swap, empty same as stack
}

void explainPQ()
{

    priority_queue<int> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {5,2}
    pq.push(8);     // {8,5,2}
    pq.emplace(10); // {10,8,5,2}

    cout << pq.top(); // prints 10 (max-heap by default)

    pq.pop();         // remove the current top (10)
    cout << pq.top(); // prints 8

    // size swap empty function same as others 

    // Minimun Heap

    priority_queue<int,vector<int>,greater<int>> pq;

    pq.push(5);     // {5}
    pq.push(2);     // {2,5}
    pq.push(8);     // {2,5,8}
    pq.emplace(10); // {2,5,8,10}

    cout << pq.top(); // prints 2
}


int main()
{

    return 0;
}