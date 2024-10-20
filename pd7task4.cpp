#include <iostream>
using namespace std;
int dots(int tri);
main()
{
    int tri;
    cout<<"Enter number of triangles:";
    cin>>tri;
    int result=dots(tri);
    cout<<"Dots in the Triangle:"<<result;
}
int dots(int tri)
{
    int d;
    d=tri*(tri+1)/(2);
    return d;
}