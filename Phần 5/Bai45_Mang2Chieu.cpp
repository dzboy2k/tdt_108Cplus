#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
    /*
    int mang[a][b]; a= số hàng b=số cột
    */
   srand(time(NULL));
   int a,b;
   cout<<"Nhap so hang a="; cin>>a;
   cout<<"Nhap so cot b="; cin>>b;
   int mang[a][b];
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           mang[i][j]=rand()%100;
       }
   }
   cout<<"Mang sau khi da nhap ngau nhien:"<<endl;
   for(int i=0;i<a;i++){
       for(int j=0;j<b;j++){
           cout<<mang[i][j]<<"\t";
       }
       cout<<endl;
   }
   system("pause");
}