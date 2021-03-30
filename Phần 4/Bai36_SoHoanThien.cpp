#include<iostream>
using namespace std;
int main(){
    /*
    Số hoàn thiện:
    6 có ước là 1,2,3
    6=1+2+3
    */
    int x,tong=0;
    cout<<"x="; cin>>x;
    for (int i=1;i<x;i++) 
    {
        if(x%i==0){
            tong+=i;
        }
    }
    if (tong==x)
    {
        cout<<x<<" la so hoan thien"<<endl;
    }
    else
    {
        cout<<x<<" khong la so hoan thien"<<endl;
    }
    system("pause"); 
}