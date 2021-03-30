#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void giaiPT2(int a,int b,int c);
int main(){
    int a,b,c;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    giaiPT2(a,b,c);
    system("pause");
}

void giaiPT2(int a, int b,int c){
    if(a==0){
        if ((b!=0&&c==0)||(b==0&&c!=0))
        {
            cout<<"Phuong trinh vo nghiem"<<endl;
        }
        
        else if ((b==0&&c==0))
        {
             cout<<"Phuong trinh vo so nghiem"<<endl;
        }
        
        else
        {
            double x=(double)-c/b;
            cout<<"X="<<x<<endl;
        }
        
    }
    else
    {
        double delta=pow(b,2)-4*a*c;
        if(delta<0){
            cout<<"Phuong trinh vo nghiem"<<endl;
        }
        else if (delta==0)
        {
            double x=(double)-b/(2*a);
            cout<<"X="<<setprecision(2)<<x<<endl;
        }
        else{
            double x1,x2;
            x1= (-b+sqrt(delta))/(2*a);
            x2= (-b-sqrt(delta))/(2*a);
            cout<<"X1="<<setprecision(2)<<x1<<endl;
            cout<<"X2="<<setprecision(2)<<x2<<endl;
        }
    }
}