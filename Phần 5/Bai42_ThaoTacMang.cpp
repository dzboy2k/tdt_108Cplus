#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"n="; cin>>n;
    int mang[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"mang["<<i<<"]=";
        cin>>mang[i];
    }
    cout<<"\nMang sau khi ban nhap: "<<endl;
    for (int i = 0; i < n; i++){
        cout<<"mang["<<i<<"]="<<mang[i]<<endl;
    }
    
    cout<<"\nXuat mang nguoc: "<<endl;
    for (int i = n-1; i >=0 ; i--)
    {
       cout<<"mang["<<i<<"]="<<mang[i]<<endl;
    }
    
    cout<<endl;
    system("pause");
}