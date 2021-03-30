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
    cout<<"Du lieu toan bo mang:\n";
    for(int i=0;i<n;i++){
        cout<<mang[i]<<"\t";
    }
    cout<<"\nCac So le:\n";
    int soLe=0;
    for(int i=0;i<n;i++){
        if(mang[i]%2!=0){
            cout<<mang[i]<<"\t";
            soLe++;
        }
    }
    cout<<"=>Tong so le trong mang: "<<soLe;
   
    int soChan=0;
    cout<<"\nCac So chan:\n";
    for(int i=0;i<n;i++){
        if(mang[i]%2==0){
            cout<<mang[i]<<"\t";
            soChan++;
        }
    }
    cout<<"=>Tong so chan trong mang: "<<soChan;
    
    int soNT;
    cout<<"\nCac So nguyen to:\n";
    for(int i=0;i<n;i++){
        for(int j=2;j<mang[i];j++){
            if(mang[i]%j==0){
                soNT++;
            }
        }
        if(soNT==0&&mang[i]>1){
            cout<<mang[i]<<"\t";
        }
        soNT=0;
    }
    cout<<endl;
    system("pause");
}