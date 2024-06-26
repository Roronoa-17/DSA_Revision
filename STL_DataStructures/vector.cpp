#include<bits/stdc++.h>
using namespace std;

void explainVector()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout<<v[0] << " " << v[1] <<endl;

    vector<pair<int, int>>vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    cout<<vec[0].first << " "<< vec[0].second;

    vector<int> v(5, 100); // creates vector with five 100s

    vector<int> v(5); // creates vector with five 0 or garbage values

    vector<int> v1(5, 20); // creates vector with five 20s
    vector<int> v2(v1); 

}

int main()
{
    explainVector();
    

    return 0;
}