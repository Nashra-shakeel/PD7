#include<iostream>
using namespace std;
main()
{
    int num,p;
    int doc=7;
    int untreated=0,treated=0;
    cout<<"Enter the number of days you visited hospital:";
    cin>> num;
    for(int i=1;i<=num;i++)
    {
        cout<<"Number of patients who visited hospital on day "<<i<<":"<<endl;
        cin>>p;
        if(i%3==0 && i!=0 && untreated>treated)
        {
            doc++;
        }
        if(p<=doc)
        {
            treated+=p;
            untreated+=0;
        }
        else if(p>doc)
        {
            treated+=doc;
            untreated+=p-doc; 
        }
    }
    cout<<"Treated patients:"<<treated<<endl;
    cout<<"Untreated patients:"<<untreated<<endl;
}

