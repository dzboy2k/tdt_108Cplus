#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    srand(time(NULL));
    int n;
    cout<<"n="; cin>>n;
    int mang[n];
    for(int i=0;i<n;i++){
        mang[i]=rand()%100;
    }
    cout<<"Mang sau khi nhap ngau nhien:"<<endl;
    for(int i=0;i<n;i++){
         cout<<"mang["<<i<<"]="<<mang[i]<<"\t";
    }
    cout<<"\nSap xep mang"<<endl;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(mang[i]>mang[j]){
                int t=mang[i];
                mang[i]=mang[j];
                mang[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
         cout<<"mang["<<i<<"]="<<mang[i]<<"\t";
    }
    cout<<endl;
    system("pause");
}