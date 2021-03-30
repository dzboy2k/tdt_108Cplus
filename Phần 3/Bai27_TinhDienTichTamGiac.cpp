#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a,b,c;
    cout<<"a="<<endl;
    cin>>a;
    cout<<"b="<<endl;
    cin>>b;
    cout<<"c="<<endl;
    cin>>c;
    while (a<=0||b<=0||c<=0)
    {
        cout<<"Ban da nhap sai, noi nhap lai"<<endl;
        cout<<"a="<<endl;
        cin>>a;
        cout<<"b="<<endl;
        cin>>b;
        cout<<"c="<<endl;
        cin>>c;
    }
    int cv=a+b+c;
    double p=cv/2.0;
    double dt=sqrt(p*(p-a)*(p-b)*(p-c));
    if((a+b<c)||(a+c<b)||(c+b<a)){
        cout<<"Khong tao thanh tam giac"<<endl;
    }
    else
    {
        cout<<"Chu vi="<<cv<<endl;
        cout<<"Dien tich="<<dt<<endl;
    }
    system("pause");
}