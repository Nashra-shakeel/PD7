#include<iostream>
using namespace std;
bool isPrime(int);
main()
{
    int num,result;
    cout<<"Enter number:";
    cin>>num;
    result=isPrime(num);
    cout<<result;
}
bool isPrime(int num)
{
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return false;
        }
    }
        if(num<=1)
        {
            return false;
        }
        else
        {
            return true;
        }
}

