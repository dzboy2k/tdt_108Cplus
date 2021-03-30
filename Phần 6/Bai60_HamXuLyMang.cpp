#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void NhapMang(int M[],int n);
void XuatMang(int M[],int n);
void TimK(int M[],int n, int k);
void SapXepTangDan(int M[],int n);
int main(){
    srand(time(NULL));
    int n;
    cout<<"n="; cin>>n;
    int M[n];
    NhapMang(M,n);
    XuatMang(M,n);
    int k;
    cout<<"Nhap gia tri can tim k="; cin>>k;
    TimK(M,n,k);
    SapXepTangDan(M,n);
    system("pause");
}

void NhapMang(int M[],int n){
    for(int i=0;i<n;i++){
        M[i]=rand()%100;
    }
}

void XuatMang(int M[],int n){
    cout<<"Du lieu mang da nhap la:\n";
    for(int i=0;i<n;i++){
        cout<<M[i]<<"\t";
    }
    cout<<endl;
}

void TimK(int M[],int n, int k){
    bool tk=false;
    int t;
    for(int i=0;i<n;i++){
        if(k==M[i]){
           tk=true;
           t=i+1;
        }
    }
    if(tk==true){
        cout<<k<<" co trong mang o vi tri thu "<<t<<endl;
    }
    else{
        cout<<k<<" khong co trong mang"<<endl;
    }
}
 
void SapXepTangDan(int M[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(M[i]>M[j]){
                swap(M[i],M[j]);
            }
        }
    }
    cout<<"Mang sau khi sap xep"<<endl;
    XuatMang(M,n);
}
