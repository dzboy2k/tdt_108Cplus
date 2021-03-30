#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
void nhap(int n,int **&p);
void xuat(int n,int **p);
int Max(int n,int **p);
int main(){
    int n, **p;
    cout<<"n="; cin>>n;
    nhap(n,p);
    xuat(n,p);
    cout<<"MAX="<<Max(n,p)<<endl;
    system("pause");
}

void nhap(int n,int **&p){
    p=new int*[n];
    for(int i=0;i<n;i++){
        *(p+i)=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            *(*(p+i)+j)=rand()%100;
        }
    }
}

void xuat(int n,int **p){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<p[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int Max(int n,int **p){
    int max=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(p[i][j]>max){
                max=*(*(p+i)+j);
            }
        }
    }
    return max;
}