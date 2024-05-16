#include<iostream>
using namespace std;
double power(double x,int y)
{
    if(y==0)
        return 1;
        else if(y<0)
            return 1/power(x,-y);
    else
        return(x*power(x,y-1));
}
int main()
{
    double x;
    int y;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>y;
    double z=power(x,y);
    cout<<"The value of x raised to y is: "<<z;
}
