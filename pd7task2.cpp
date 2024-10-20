#include <iostream>
using namespace std;
void up(int r);
void low(int r);
main()
{
    int r;
    cout<<"Enter desired number of rows:";
    cin>>r;
    up(r);
    low(r);
}
void up(int r)
{
    for(int i=1; i<=r ;i++)
    {
        for(int rs=r-i; rs>0; rs--)
        {
            cout<<" ";
        }
        for (int j=1; j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void low(int r)
{
    for(int i=r; i>0; i--)
    {
        for(int rs=r-i; rs>0; rs--)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}