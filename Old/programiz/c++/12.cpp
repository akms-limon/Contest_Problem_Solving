#include<iostream>
using namespace std;

int main()
{
    int ara[]={2,2,3,4,5,6,7,8,9,0};

    //this is range based for loop
    for(int i: ara)
    {
        cout<<i<<" ";
    }
    return 0;
}