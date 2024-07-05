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

bool comp(pair<int,int> p1, pair<int, int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;
}


void explainSortingAlgorithm()
{
    vector<int> v = {1, 2, 3, 4, 6};
    
    sort(v.begin(), v.end());

    // sorting in descending order
   // sort(v.begin(), v.end(), greater<int>);

    pair<int, int> a[] = {{1,2}, {2, 1}, {4, 1}};

    sort(a, a+3, comp);
    // {4, 1}, {2, 1}, {1, 2}

    int num = 7;
    int cnt = __builtin_popcount();

    long long num = 1224332323;
    int cnt = __builtin_popcountll();

    string s = "123";

    do{
        cout<< s << endl;
    } while(next_permutation(s.begin(), s.end()));

    int maxi = *(max_element(a, a+4));
}


int main()
{
    explainSortingAlgorithm();
    return 0;
}