#include<iostream>
using namespace std;
int main(){
    int n; 
    cout<<"n="; cin>>n;
    int mang[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"mang["<<i<<"]="; cin>>mang[i]; 
    }
    cout<<"Mang sau khi ban nhap: "<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<mang[i]<<"\t"; 
    }
    cout<<endl;
    
    int k;
    bool kq=false;
    cout<<"Nhap phan tu trong mang can tim kiem: "; cin>>k;
    //Kiểm tra có trong mảng hay không?
    for (int i = 0; i < n; i++){
        if(k==mang[i]){
            kq=true;
            break;
        }
    }
    if (kq==true)
    {
        cout<<k<<" co trong mang"<<endl;
    }
    else
    {
        cout<<k<<"khong co trong mang"<<endl;
    }
    
    
    //Kiểm tra số lần xuất hiện trong mảng
    int dem=0;
    for (int i = 0; i < n; i++){
        if(k==mang[i]){
            dem++;
        }
    }
    cout<<"K= "<<k<<" xuat hien "<<dem<<" lan trong mang"<<endl;
    system("pause");
}