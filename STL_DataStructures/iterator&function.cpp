#include<bits/stdc++.h>
using namespace std;

void Vecprint(vector<int> v)
{
    for(auto it:v)
    {
        cout<<it << " ";
    }
    cout<<endl;
}

void Iterator()
{
    vector<int> v = {1, 2, 3, 4, 5};

    vector<int>::iterator it = v.begin();
    cout<<*(it)<<endl;
    it++;
    cout<<*(it)<<endl;

    it+=2;
    cout<<*(it)<<endl;

    // Other iterators
    vector<int>::iterator i = v.end(); // it will point to location next to the last element
    i--; // to access last element decrement the iterator first
    cout<<*(i)<<endl;

    vector<int>::reverse_iterator j = v.rend(); // it will point to  location before first element
    j--; // it will work in reverse order
    cout<<*(j)<<endl;

    vector<int>::reverse_iterator k = v.rbegin();
    cout<<*(k)<<endl;

    cout<< v[0] << " " << v.at(0) <<endl;

    cout<< v.back() << " \n";
    // Printing vector using iterator
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it) << " ";
    }
    cout<<endl;
    // using auto keyword if don't want to specify datatype
    for(auto it = v.begin(); it != v.end() ; it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    // printing using for each loop 
    for(auto it:v)
    {
        cout<< it << " ";
    }
    cout<<endl;

    // Deletion in vector
    v.erase(v.begin()+1);
    Vecprint(v);

    // deletion using range i.e [start, end)
    v.erase(v.begin()+2, v.begin()+4);
    Vecprint(v);

    // Insert function
    vector<int>p(2, 100);
    Vecprint(p);
    p.insert(p.begin(), 300); // insert 300 at the beginning 
    Vecprint(p);
    p.insert(p.begin() + 1, 2, 10); // insert two 10s at second position
    Vecprint(p);

     vector<int> copy(2, 50); // {50, 50}
     p.insert(p.begin(), copy.begin(), copy.end());
     Vecprint(p);

     cout<<p.size()<<endl; // return the no of element in vector

     p.pop_back(); // deletes the last element
     Vecprint(p);

     // Swapping 
     p.swap(v);
     Vecprint(p);
     Vecprint(v);

     v.clear(); // erases the entire vector
     Vecprint(v);

     cout<<v.empty();
}


int main()
{
    Iterator();

    return 0;
}