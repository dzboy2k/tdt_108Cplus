#include<iostream>
using namespace std;
int nhap(int n);
int Fib(int n);
void xuatDayFib(int n);
int main(){
    int n; 
    n=nhap(n);
    cout<<"So Fibonacci tai vi tri "<<n<<" Fib(n)="<<Fib(n)<<endl;
    cout<<"Day Fibonacci tu 1 toi n la"<<endl;
    xuatDayFib(n);
    cout<<endl;
    system("pause");
}

int nhap(int n){
    cout<<"n="; 
    cin>>n;
    if(n<1){
        cout<<"Moi ban nhap lai:"<<endl;
        nhap(n);
    }
}

int Fib(int n){
    if(n<=2) return 1;
    return Fib(n-1)+Fib(n-2);
}

void xuatDayFib(int n){
    for(int i=1;i<=n;i++){
        cout<<Fib(i)<<"\t";
    }
}