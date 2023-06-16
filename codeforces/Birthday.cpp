#include<iostream>
using namespace std;
int main()
{
    int n=8;
    for (int i = 1; i <= n; i++)
    {
        if (i==(n/2) || i==(n/2)+1)
        {
            for (int i = 1; i < n; i++)
            {               
                cout<<"H ";
            }
            cout<<endl;
        }
        else
        {
        for (int i = 1; i < n; i++)
        {
            if(i>2 && i<n-2)
            {
                cout<<"  ";
            }
            else
            {
                cout<<"H ";
            }
        }
        cout<<endl;
        }
    }
    cout<<"       A"<<endl;
    cout<<"      A A"<<endl;
    cout<<"     A A A"<<endl;
    cout<<"    A A A A"<<endl;
    cout<<"   A A   A A"<<endl;
    cout<<"  A A A A A A"<<endl;
    cout<<" A A       A A"<<endl; 
    cout<<"A A         A A"<<endl; 
    cout<<endl<<endl;
    cout<<"* * * * * * "<<endl;
    cout<<"* * *   * * *"<<endl;
    cout<<"* *        * *"<<endl;
    cout<<"* * *   * * *"<<endl;
    cout<<"* * * * * *"<<endl;
    cout<<"* *"<<endl;
    cout<<"* *"<<endl; 
    cout<<"* *"<<endl;
    cout<<"* *"<<endl;
    cout<<endl;
    cout<<"* * * * * * "<<endl;
    cout<<"* * *   * * *"<<endl;
    cout<<"* *        * *"<<endl;
    cout<<"* * *   * * *"<<endl;
    cout<<"* * * * * *"<<endl;
    cout<<"* *"<<endl;
    cout<<"* *"<<endl; 
    cout<<"* *"<<endl;
    cout<<"* *"<<endl;
    cout<<endl<<endl;
    cout<<"* *        * *"<<endl;
    cout<<" * *      * *"<<endl;
    cout<<"  * *    * *"<<endl;
    cout<<"   * *  * *"<<endl;
    cout<<"    * ** *"<<endl;
    cout<<"     *  *"<<endl;
    cout<<"     *  *"<<endl; 
    cout<<"     *  *"<<endl;
    cout<<"     *  *"<<endl;
    cout<<endl<<endl;
    return 0;
}