#include<iostream>
#include<math.h>

using namespace std;

double Fun(double x)   //ԭ����
{
    double y=x*x*x-6*x*x+20;
    return y;
}

double DerivativeFun(double x)    //ԭ�����ĵ���
{
    double dy=3*x*x-12*x;
    return dy;
}

double Iteration(double x)   //��ţ�ٵ�������ֵ
{
    int  k=0;
    double x1=x,m,n;
    do
    {
        x=x1;
        if(DerivativeFun(x)==0)  //����ʧ�ܣ������ж�
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
    cout<<"The result is "<<x1<<" f(x)="<<Fun(x1)<<" and the loop count is "<<k<<endl;  //������
    return 0;
}

int main()
{
    Iteration(-2);  //����x�Ľ���ֵ
    Iteration(3);
    Iteration(6);
}
