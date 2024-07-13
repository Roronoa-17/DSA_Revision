#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int N){
        //code here
        int count = 0;
        int n = N;
        while(N>0)
        {
            int l = N % 10;
            if(l!=0) 
            {
                if(n%l==0) count++;
            }
            N =/10;
        }
        return count;
}

int main()
{
    evenlyDivides(22074);
    return 0;
}