#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void nhapMaTran(int n,int **&p);
void xuatMaTran(int n,int **p);
void congMaTran(int n,int **&a,int **&b,int **&c);
int main(){
    srand(time(NULL));
    int n, **A, **B;
    cout<<"n="; cin>>n;
    nhapMaTran(n,A);
    nhapMaTran(n,B);
    cout<<"Ma tran A"<<endl;
    xuatMaTran(n,A);
    cout<<"Ma tran B"<<endl;
    xuatMaTran(n,B);

    int **C;
    cout<<"Ma tran C=A+B"<<endl;
    congMaTran(n,A,B,C);
    xuatMaTran(n,C);
    system("pause");
}

void nhapMaTran(int n,int **&p){
    p=new int*[n];
    for(int i=0;i<n;i++){
        p[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            p[i][j]=rand()%100;
        }
    }
}

void xuatMaTran(int n, int **p){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<*(*(p+i)+j)<<"\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void congMaTran(int n,int **&a,int **&b,int **&c){
    c=new int*[n];
    for(int i=0;i<n;i++){
        *(c+i)=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            *(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j);
        }
    }
}
// int **congMaTran(int n,int **&a,int **&b){ //Hàm trả về giá trị của con trỏ cấp 2
//      int **q;
//      return q; //Giá trị trả về
// }
