#include<iostream>
#include<math.h>
using namespace std;
int uscln(int a,int b);
int main(){
    int a,b;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    int USC=uscln(a,b);
    cout<<"UCLN(a,b)="<<USC<<endl;
    system("pause");
}

int uscln(int a,int b){
    a=abs(a);
    b=abs(b);
    while(a!=b){
        if(a>b){
            a-=b;
        }
        else b-=a;
    }
    return a;
}