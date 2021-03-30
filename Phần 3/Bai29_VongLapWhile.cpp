#include<iostream>
using namespace std;
int main(){
    int i=1,n,tong=0;
    cout<<"n=";
    cin>>n;
    while (n>=i)
    {
        tong+=i;
        i++;
    }
    cout<<"Tong so hang cua n="<<tong<<endl;
    system("pause");
}