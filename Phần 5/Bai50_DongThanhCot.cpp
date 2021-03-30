#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
    srand(time(NULL));
    int n,m;
    cout<<"Dong n="; cin>>n;
    cout<<"Dong m="; cin>>m;
    int maTran[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            maTran[i][j]=rand()%100;
        }
    }
    cout<<"Ban da nhap ngau nhien:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<maTran[i][j]<<"\t";
        }
        cout<<endl;
    }
    /* 
    Đổi dòng thành cột
    00 01 02 03     00 10 20 30
    10 11 12 13     01 11 21 31
    20 21 22 23     02 12 22 32
    30 31 32 33     03 13 23 33
    */
    cout<<"Ma tran hoan vi: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<maTran[j][i]<<"\t";
        }
        cout<<endl;
    }
    system("pause");
}