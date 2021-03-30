#include<iostream>
using namespace std;
int main(){
    int tong=0,n;
    cout<<"n=";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        tong+=i;
    }
    cout<<"Tong cac so hang n="<<tong<<endl;
    system("pause");
}