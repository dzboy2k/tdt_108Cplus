#include<iostream>
#include<math.h>
using namespace std;
int main(){
    /*
    Tính S(x,n)=x + x^2/2! + x^3/3! +...+ x^n/n!
    */
   int x,n;
   cout<<"x="; cin>>x;
   cout<<"n="; cin>>n;
   double tu,mau=1,tong=0;
   for(int i=1;i<=n;i++){
       tu=pow(x,i);
       mau*=i;
       tong+=tu/mau;
   }
   cout<<"S(n)="<<tong<<endl;
   system("pause");
}