#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Nhap so phan tu can sap xep: "; cin>>n;
    double a[n];
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    cout<<"Ban da nhap:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]) swap(a[i],a[j]);
        }
    }
    cout<<"\nPhan tu sau khi sap xep:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    cout<<endl;
    system("pause");
}