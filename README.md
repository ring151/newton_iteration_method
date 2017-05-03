# newton_iteration_method

#include<iostream>
#include<math.h>

using namespace std;

double Fun(double x)
{
    double y=x*x*x-6*x*x+20;
    return y;
}

double DerivativeFun(double x)
{
    double dy=3*x*x-12*x;
    return dy;
}

double Iteration(double x,double i)
{
    int  k=0;
    double x1=x,m,n;
    do
    {
        x=x1;
        if(DerivativeFun(x)==0)
        {
            cout<<"error!";
            break;
        }
        else
        {
            x1=x-Fun(x)/DerivativeFun(x);
            k++;
            cout<<"x="<<x1<<"  k="<<k<<endl;
        }
    }while(fabs(x-x1)>=i);
    cout<<"The result is "<<x1<<" f(x)="<<Fun(x1)<<" and the loop count is "<<k<<endl;
    return 0;
}

int main()
{
    Iteration(-2,1e-5);
    Iteration(3,1e-5);
    Iteration(6,1e-5);
}
