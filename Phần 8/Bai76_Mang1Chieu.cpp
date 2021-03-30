#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void capPhatBoNho(int n, int *&p);
void nhapDuLieu(int n, int *&p);
void xuatDuLieu(int n, int *p);
int *mang3KyTuMax(int n, int *p); /*Trả về kiểu dữ liệu con trỏ nguyên*/
int main(){
    int n, *p;
    cout<<"n="; cin>>n;
    capPhatBoNho(n,p);
    nhapDuLieu(n,p);
    cout<<"Ban da nhap"<<endl;
    xuatDuLieu(n,p);
    cout<<"3 Phan tu lon nhat"<<endl;
    int *q=mang3KyTuMax(n,p);
    int m=n>3?3:n;
    xuatDuLieu(m,q);
    system("pause");
}

void capPhatBoNho(int n, int *&p){
    p=new int[n];
}

void nhapDuLieu(int n, int *&p){
    srand(time(NULL));
    for(int i=0;i<n;i++){
        *(p+i)=rand()%100;
    }
}

void xuatDuLieu(int n, int *p){
    for(int i=0;i<n;i++){
        cout<<p[i]<<"\t";
    }
    cout<<endl;
}

int *mang3KyTuMax(int n, int *p){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(p[i]<p[j]){
                swap(p[i],p[j]);
            }
        }
    }
    int m=n>3?3:n;
    int *q=new int[m];
    for(int i=0;i<m;i++){
        q[i]=p[i];
    }
    return q;
}