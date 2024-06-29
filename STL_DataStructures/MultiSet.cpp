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

void explainMultiSet()
{
    // Everything is same as set
    // only stores duplicates elements also

    multiset<int> ms;

    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // only as single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);

    // rest all function is same as set

}


int main()
{
    explainMultiSet();
    return 0;
}