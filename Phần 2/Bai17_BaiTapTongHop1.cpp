#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void Bai1();
void Bai2();
void Bai3();
void Bai4();
int main(){
    int chon;
    cout<<"Moi ban chon: "<<endl;
    cout<<"1. Kiem tra ki tu"<<endl;
    cout<<"2. Tinh gia tri bieu thuc"<<endl;
    cout<<"3. Tinh do dai doan AB"<<endl;
    cout<<"4. Dao nguoc so nguyen 3 chu so"<<endl;
    cout<<"Moi ban chon: ";
    cin>>chon;
    switch (chon)
    {
    case 1: Bai1(); break;
    case 2: Bai2(); break;
    case 3: Bai3(); break;
    case 4: Bai4(); break;
    default:
        cout<<"Ban da nhap khong dung";
        break;
    }
    system("pause");
}

    void Bai1(){
        char x;
        cout<<"Moi ban nhap ki tu: "<<endl;
        cin>>x;
        cout<<"Ki tu "<<x<<" co ma ASCII:"<<int(x)<<endl;
        cout<<"Ki tu "<<x;
        cout<<" co ki tu tiep theo la:"<<++x<<endl;
    }

    void Bai2(){
        int n;
        double x;
        cout<<"Nhap so nguyen n: "<<endl;
        cin>>n;
        cout<<"Nhap so thuc x: "<<endl;
        cin>>x;
        double A=pow(pow(x,2)+x+1,n)+pow(pow(x,2)-x+1,n);
        cout<<"A="<<A<<endl;
    }

    void Bai3(){
        int xA,xB,yA,yB;
        cout<<"Nhap xA=";
        cin>>xA;
        cout<<"Nhap yA=";
        cin>>yA;
        cout<<"Nhap xB=";
        cin>>xB;
        cout<<"Nhap yB=";
        cin>>yB;
        double AB=sqrt(pow(xB-xA,2)+pow(yB-yA,2));
        cout<<"AB="<<setprecision(3)<<AB<<endl;
    }

    void Bai4(){
        int x;
        cout<<"Nhap so nguyen co 3 chu so: ";
        cin>>x;
        while (x<100||x>999){
            cout<<"Moi ban nhap lai: ";
            cin>>x;
        }
        int a=x/100;
        int b=(x%100)/10;
        int c=(x%100)%10;
        cout<<"So dao nguoc cua so "<<x<<" la "<<c<<b<<a<<endl;
    }