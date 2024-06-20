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

void explainList()
{
    list<int> ls;

    ls.push_back(2); //{2}
    printL(ls);
    ls.emplace_back(4); // {2, 4}
    printL(ls);
    ls.push_front(5); // {5, 2, 4}
    printL(ls);

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size , swap
}


int main()
{
    explainList();
    return 0;
}