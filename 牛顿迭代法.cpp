#include<iostream>
#include<math.h>

using namespace std;

double Fun(double x)   //原函数
{
    double y=x*x*x-6*x*x+20;
    return y;
}

double DerivativeFun(double x)    //原函数的导数
{
    double dy=3*x*x-12*x;
    return dy;
}

double Iteration(double x)   //用牛顿迭代法求值
{
    int  k=0;
    double x1=x,m,n;
    do
    {
        x=x1;
        if(DerivativeFun(x)==0)  //迭代失败，计算中断
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
    }while(fabs(x-x1)>=1e-5);
    cout<<"The result is "<<x1<<" f(x)="<<Fun(x1)<<" and the loop count is "<<k<<endl;  //输出结果
    return 0;
}

int main()
{
    Iteration(-2);  //三个x的近似值
    Iteration(3);
    Iteration(6);
}
