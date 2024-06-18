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

void explainDeque()
{
    deque<int> dq;
    dq.push_back(1);
    printL(dq);
    dq.emplace_back(2);
    printL(dq);
    dq.push_front(4);
    printL(dq);
    dq.emplace_front(3);
    printL(dq);

    dq.pop_back();
    printL(dq);
    dq.pop_front();
    printL(dq);
    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size , swap
}


int main()
{
    explainDeque();
    return 0;
}