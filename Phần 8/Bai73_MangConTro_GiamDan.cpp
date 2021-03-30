#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void nhapMang(int *&p, int n);
void xuatMang(int *p, int n);
void sapXep(int *&p, int n);
int main(){
    int *p;
    int n;
    cout<<"n=";
    cin>>n;
    nhapMang(p,n);
    xuatMang(p,n);
    cout<<"Mang sau khi sap xep giam dan"<<endl;
    sapXep(p,n);
    xuatMang(p,n);
    system("pause");
}

void nhapMang(int *&p, int n){
    srand(time(NULL));
    p=new int[n];
    for(int i=0;i<n;i++){
        *(p+i)=rand()%100;
    }
}

void xuatMang(int *p, int n){
    for(int i=0;i<n;i++){
        cout<<p[i]<<"\t";
    }
    cout<<endl;
}

void sapXep(int *&p, int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(*(p+i)<*(p+j)){
                swap(p[i],p[j]); //hàm hoán vị
            }
        }
    }
}