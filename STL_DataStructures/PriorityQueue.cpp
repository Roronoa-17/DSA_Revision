#include <bits/stdc++.h>
using namespace std;

void printL(auto v)
{
    for(auto it:v)
    {
        cout<< it<<" ";
    }
    cout<<endl;
}

void explainPQ()
{
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pq.emplace(10); // {10. 8, 5, 2}

    cout<< pq.top() <<endl; //prints 10

    pq.pop(); // {8, 5, 2}

    cout<< pq.top() << endl; //prints 8

    // size swap empty function same as others

    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> qp;
    qp.push(5); // {5}
    qp.push(2); // {2, 5}
    qp.push(8); // (2, 5, 8)
    qp.push(10); // {2, 5, 8, 10}

    cout<< qp.top() << endl; // print 2

}


int main()
{
    explainPQ();
    return 0;
}