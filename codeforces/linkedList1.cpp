#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
#define nll cout<<"\n"
#define ll long long

struct Node
{
    int data;
    Node *next = NULL;
};

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    struct Node head;
    head.data = 5;

    struct Node seven;
    seven.data = 7;
    head.next = &seven;
    
    

    return 0;
}