#include<bits/stdc++.h>
using namespace std;

void print(int n)
{
    if(n==0) return;
    cout<<"Priyesh\n";
    print(n-1);
}

void printL(int i, int n)
{
    if(i>n) return;
    cout<<i<<" ";
    printL(i+1, n);
}

void printB(int n)
{
    if(n==0) return;
    cout<<n<<" ";
    //n--;
    printB(n-1);
}

void printLB(int i, int n)
{
    if(i<1) return;
    printLB(i-1, n);
    cout<<i<<" ";
}

void printBB(int i, int n)
{
    if(i>n) return;
    printBB(i+1, n);
    cout<<i<<" ";
}

int main()
{
    printBB(1,6);
}
