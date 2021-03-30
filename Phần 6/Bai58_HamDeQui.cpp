#include<iostream>
using namespace std;
int giaiThua(int n); 
void nhiPhan(int n);
int main(){
    int n;
    cout<<"n="; cin>>n;
    cout<<"n!="<<giaiThua(n)<<endl;
    cout<<"Nhi phan n=";
    nhiPhan(n);
    cout<<endl;
    system("pause");
}

int giaiThua(int n){ //Hàm Đệ Qui
    if(n<=1) return 1;
    return n*giaiThua(n-1);
}

void nhiPhan(int n){
    if(n>0){
        int t=n%2;
        nhiPhan(n/2);
        cout<<t;
    }
}

