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

void explainMap()
{
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map< par<int, int>, int> mpp2;

    mpp[1] = 2;
    mpp1.emplace({3, 1});
    mpp1.insert({2, 4});

    mpp2[{2, 3}] = 10;

    for(auto it : mpp)
    {
        cout<< it.first << " " << it.second << endl;
    }

    cout<< mpp[1];
    cout<< mpp[5];

    auto it = mpp.find(3);
    cout<< *(it).second;

    auto it = mpp.find(5);

    auto it1 = mpp.lower_bound(2);

    auto it2 = mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}


int main()
{
    explainMap();
    return 0;
}