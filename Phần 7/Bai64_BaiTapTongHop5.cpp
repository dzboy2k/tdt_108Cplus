#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void noiDung();
void bai1();
int tinhMauSo(int n);
void bai2();
int tongChuSo(int n);
void bai3();
int tongUocSo(int n);

int main (){
    noiDung();
    int chon;
    cin>>chon;
    while(chon>3||chon<1){
        cout<<"Ban da nhap sai, moi ban nhap lai"<<endl;
        cin>>chon;
    }
    switch (chon)
        {
        case 1: 
            bai1();
            break;
        case 2:
            bai2();
            break;
        case 3:
            bai3();
            break;
        default:
            break;
        }
    system("pause");
}

void noiDung(){
    cout<<"1. Ham tai su dung mau so"<<endl;
    cout<<"2. Tong cac chu so chia het cho 3"<<endl;
    cout<<"3. So hoan thien va so thinh vuong"<<endl;
    cout<<"Moi ban chon: ";
}

void bai1(){
    int n,x;
    cout<<"Nhap n";
    cin>>n;
    cout<<"Nhap x";
    cin>>x;
    double bieuThuc1=0; //S(n)= 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+...+n)
    double bieuThuc2=0; //S(x,n)= x + x^2/(1+2) + x^3/(1+2+3) +... + x^n(1+2+3+...+n)
    for(int i=1;i<=n;i++){
        bieuThuc1+=1.0/tinhMauSo(i);
        bieuThuc2+=pow(x,i)/tinhMauSo(i);
    }
    cout<<"S(n)="<<setprecision(3)<<bieuThuc1<<endl;
    cout<<"S(x,n)="<<setprecision(3)<<bieuThuc2<<endl;
}

int tinhMauSo(int n) {
    if(n>0){
        return n+tinhMauSo(n-1);
    }
    return 0;
}

void bai2(){
    int n;
    cout<<"n= ";
    cin>>n;
    if(tongChuSo(n)%3==0)
        cout<<"n la so chia het cho 3"<<endl;
    else
        cout<<"n khong la so chia het cho 3"<<endl;
}

int tongChuSo(int n){
    if(n==0){
        return 0;
    }
    return n%10+tongChuSo(n/10);
}

void bai3(){
    int n;
    cout<<"n= ";
    cin>>n;
    if(tongUocSo(n)==n){
        cout<<n<<" la so hoan thien"<<endl;
        cout<<n<<" khong la so thinh vuong"<<endl;
    }
    else if(tongUocSo(n)>n){
        cout<<n<<" khong la so hoan thien"<<endl;
        cout<<n<<" la so thinh vuong"<<endl;
    }
    else{
        cout<<n<<" khong la so hoan thien"<<endl;
        cout<<n<<" khong la so thinh vuong"<<endl;
    }
    
}

int tongUocSo(int n){
    int tong=0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            tong+=i;
        }
    }
    return tong;
}