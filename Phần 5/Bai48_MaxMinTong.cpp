#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n="; cin>>n;
    int mang[n];
    for(int i=0;i<n;i++){
        cout<<"mang["<<i<<"]="; 
        cin>>mang[i];
    }
    cout<<"\nMang sau khi nhap la:"<<endl;
    for(int i=0;i<n;i++){
        cout<<mang[i]<<"\t";
    }
    int max=mang[0];
    
    for(int i=0;i<n;i++){
        if(max<mang[i]){
            max=mang[i];
        }
    }
    cout<<"\nPhan tu lon nhat: "<<max<<endl;
    int min=mang[0];
    
    for(int i=0;i<n;i++){
        if(min>mang[i]){
            min=mang[i];
        }
    }
    cout<<"Phan tu be nhat: "<<min<<endl;

    int tong=0;
    for(int i=0;i<n;i++){
        tong+=mang[i];
    }
    cout<<"Tong cac phan tu:"<<tong<<endl;
    system("pause");
}