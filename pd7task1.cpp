#include <iostream>
using namespace std;
void print(int r);
main()
{
    int r;
    cout<<"Enter the number of rows:";
    cin>>r;
    print(r);
    
}
void print(int r)
{
    for(int i=r; i>0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}