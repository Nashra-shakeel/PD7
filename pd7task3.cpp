#include <iostream>
#include <string>
using namespace std;
void amplify(int num);
main()
{
    int num;
    cout<<"Enter the number to Amplify:";
    cin>>num;
    amplify(num);
}
void amplify(int num)
{
    
    for(int n=1; n<=num ; n++)
    {
        if(n%4==0)
        {
          cout<< (n*10)<<",";
        }
        else
        {
            cout<< n <<",";
        }
    }
}