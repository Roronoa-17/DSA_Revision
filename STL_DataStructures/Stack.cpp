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


void explainStack()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.emplace(5);

    cout<<st.top()<<endl; // *print 5 "** st[2] is invalid**"

    st.pop();

    cout<< st.top()<<endl; // 3

    cout<< st.size()<<endl;

    cout<< st.empty()<<endl;

    stack<int>st1, st2;
    st1.swap(st2);
}


int main()
{
    explainStack();
    return 0;
}