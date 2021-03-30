#include<iostream>
#include<math.h>
using namespace std;
void Bai1();
void Bai2();
void Bai3();
void Bai4();
void Bai5();
int main(){
    cout<<"1.So nguyen to "<<endl;
    cout<<"2.Liet ke so nguyen to "<<endl;
    cout<<"3.Tinh S(x,n) "<<endl;
    cout<<"4.Tinh S(n)"<<endl;
    cout<<"5.Xuat so dao"<<endl;
    cout<<"Nhap = ";
    int chon; cin>>chon;
    switch (chon)
    {
    case 1:
        Bai1();
        break;
    case 2:
        Bai2();
        break;
    case 3:
        Bai3();
        break;
    case 4:
        Bai4();
        break;
    case 5:
        Bai5();
        break;
    default:
        break;
    }
    system("pause");
}

void Bai1(){
    int n;
    cout<<"n="; cin>>n;
    bool nt=true;
    for(int i=2;i<n;i++){
        if(n%i==0){
            nt=false;
        }
    }
    if(nt==true&&n>1){
        cout<<n<<" la so nguyen to"<<endl;
    }
    else{
        cout<<n<<" khong la so nguyen to"<<endl;
    }
}

void Bai2(){
    int n;
    cout<<"n= ";
    cin>>n;
    bool dem=true;
    for(int i=2;i<=n;i++){
        for(int j=2;j<i;j++){
            if(i%j==0){
                dem=false;
                break;
            }
        }
        if(dem==true){
            cout<<i<<"\t";
            }
        dem=true;
    }
    cout<<endl;
}

void Bai3(){
    /*
    Tinh S(x,n)=x + x^3/3! + x^5/5! + ... + x^(2n+1)/(2n+1)! 
    */
    int x,n;
    cout<<"x="; cin>>x; 
    cout<<"n="; cin>>n;
    double tong=x,mau=1,mau1=1,tu;
    for(int i=1;i<=n;i++){
        tu=pow(x,2*i+1);
        mau1=2*i+1;
        mau*=(mau1-1)*mau1;
        tong+=tu/mau;
    }
    cout<<"S(x,n)="<<tong<<endl;
}

void Bai4(){
    /*
    Tinh S(n) = Căn 1+(Căn 2+ (Căn 3+ (...Căn(n-1 + Căn n)))
    */
    int n;
    cout<<"n="; cin>>n;
    double tong=0;
    for(int i=n;i>0;i--){
        tong=sqrt(i+tong);
    }
    cout<<"S(x,n)="<<tong<<endl;
}

void Bai5(){
    int x;
    cout<<"x="; cin>>x;
    for (int i = 0; i <= x; i++)
    {
        cout<<x%10;
        x/=10;
    }
    cout<<endl;
}

