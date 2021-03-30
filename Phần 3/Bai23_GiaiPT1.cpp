#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a= ";
    cin>>a;
    cout<<"b= ";
    cin>>b;
    if ((a!=0&&b==0)||(a==0&&b!=0))
    {
        cout<<"Phuong trinh vo ngiem"<<endl;
    }
    else if ((a==0&&b==0))
    {
        cout<<"Phuong trinh vo so ngiem"<<endl;
    }
    else
    {
        double x=(double)-b/a;
        cout<<"x="<<x<<endl;
    }    
    system("pause");
}