#include<iostream>
using namespace std;
void Bai1();
void Bai2();
void Bai3();
void Bai4();
void Bai5();
int main(){
    int chon;
    cout<<"1. Max"<<endl;
    cout<<"2. Kiem tra thang"<<endl;
    cout<<"3. Doc so"<<endl;
    cout<<"4. Tim ngay ke tiep"<<endl;
    cout<<"5. He Thap Luc Phan"<<endl;
    cout<<"Moi chon:";cin>>chon;
    switch (chon)
    {
    case 1: Bai1(); break;
    case 2: Bai2(); break;
    case 3: Bai3(); break;
    case 4: Bai4(); break;
    case 5: Bai5(); break;
    default:
        break;
    }
    system("pause");
}

void Bai1(){
    double a,b,c;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;
    double max=a;
    if (max<b)max=b;
    if(max<c)max=c;
    cout<<"Max="<<max<<endl;
}

void Bai2(){
    int thang;
    cout<<"Nhap thang: "<<endl;
    cin>>thang;
    while (thang<=0||thang>12)
    {
        cout<<"Ban da nhap sai, moi nhap lai: ";
        cin>>thang;
    }
    switch (thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
        cout<<"Thang co 31 ngay"<<endl;
        break;
    case 4: case 6: case 9: case 11:
        cout<<"Thang co 30 ngay"<<endl;
        break;
    case 2:
        int nam;
        cout<<"Nam = "; cin>>nam;
        if((nam%4==0&&nam%100!=0)||nam%400==0){
            cout<<"Thang co 29 ngay"<<endl;
        }
        else cout<<"Thang co 28 ngay"<<endl;
    default:
       break;
    }
}

void Bai3(){
    int x;
    cout<<"Nhap so co 2 chu so.\nX= ";
    cin>>x;
    while (x<0||x>99)
    {
        cout<<"Ban da nhap sai, moi nhap lai: ";
        cin>>x;
    }
    int a,b;
    a=x/10;
    b=x%10;

    switch (a)
    {
    case 1: if(b==0)cout<<"Muoi "<<endl;
            else cout<<"Muoi ";
            break;
    case 2: if(b==0)cout<<"Hai Muoi "<<endl;
            else cout<<"Hai Muoi ";
            break;
    case 3: if(b==0)cout<<"Ba Muoi "<<endl;
            else cout<<"Ba Muoi ";
            break;
    case 4: if(b==0)cout<<"Bon Muoi "<<endl;
            else cout<<"Bon Muoi ";
            break;
    case 5: if(b==0)cout<<"Nam Muoi "<<endl;
            else cout<<"Nam Muoi ";
            break;
    case 6: if(b==0)cout<<"Sau Muoi "<<endl;
            else cout<<"Sau Muoi ";
            break;
    case 7: if(b==0)cout<<"Bay Muoi "<<endl;
            else cout<<"Bay Muoi ";
            break;
    case 8: if(b==0)cout<<"Tam Muoi "<<endl;
            else cout<<"Tam Muoi ";
            break;
    case 9: if(b==0)cout<<"Chin Muoi "<<endl;
            else cout<<"Chin Muoi ";
            break;
    
    default:
        break;
    }

    switch (b)
    {
    case 0: 
        if(a==0)cout<<"Khong "<<endl; 
        break;
    case 1: cout<<"Mot "<<endl; break;
    case 2: cout<<"Hai "<<endl; break;
    case 3: cout<<"Ba "<<endl; break;
    case 4: cout<<"Bon "<<endl; break;
    case 5: 
        if(a==0)cout<<"Nam "<<endl; 
        if(a>0)cout<<"Lam "<<endl;
        break;
    case 6: cout<<"Sau "<<endl; break;
    case 7: cout<<"Bay "<<endl; break;
    case 8: cout<<"Tam "<<endl; break;
    case 9: cout<<"Chin "<<endl; break;
    default:
        break;
    }
}

void Bai4(){
    int ngay,thang,nam;
    ve: cout<<"Ngay: "<<endl;
    cin>>ngay;
    cout<<"Thang: "<<endl;
    cin>>thang;
    cout<<"Nam: "<<endl;
    cin>>nam;
    while ((ngay<=0||ngay>31)||(thang<=0||thang>12)||(nam<0))
    {
        cout<<"Ban da nhap sai. Moi ban nhap lai"<<endl;
        cout<<"Ngay: "<<endl;
        cin>>ngay;
        cout<<"Thang: "<<endl;
        cin>>thang;
        cout<<"Nam: "<<endl;
        cin>>nam;
    }
    cout<<"Ban da nhap:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
    switch (thang)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        if (thang==12&&ngay==31)
        {
            ngay=1,thang=1,nam++;
            cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
        }
        else{
            if(ngay==31){
            thang++,ngay=1;
            cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
            }
            else
            {
                ngay++;
                cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
            }
        }
        break;
    case 4: case 6: case 9: case 11:
        if(ngay==30){
            thang++,ngay=1;
            cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
            }
            else
            {
                ngay++;
                cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
            }
        break;
    case 2: 
        if (ngay<30)
        {
            if(nam%400==0||(nam%4==0&&nam%100!=0))
            {
                if(ngay==29){
                    thang++,ngay=1;
                    cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
                }
                else
                {
                    ngay++;
                    cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
                }
            }
            else if(ngay<29){
                if(ngay==28)
                {
                    thang++,ngay=1;
                    cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
                }
                else
                {
                    ngay++;
                    cout<<"Ngay tiep theo:"<<ngay<<"/"<<thang<<"/"<<nam<<endl;
                }
            }
            else{
                if(nam%400!=0||(nam%4!=0&&nam%100==0))
                {
                    cout<<"Ban da nhap sai, moi ban nhap lai"<<endl;
                    goto ve;
                }
            }
        }
        break;
    default:
        break;
    }
}

void Bai5(){
    char heThapLucPhan;
    cout<<"Moi nhap (A,B,C,D,E,F):";
    cin>>heThapLucPhan;
    while (heThapLucPhan!='A'&&heThapLucPhan!='B'&&heThapLucPhan!='C'&&heThapLucPhan!='D'&&heThapLucPhan!='E'&&heThapLucPhan!='F')
    {
        cout<<"Ban da nhap sai, moi ban nhap lai"<<endl;
        cout<<"Moi nhap (A,B,C,D,E,F):";
        cin>>heThapLucPhan;
    }
    switch (heThapLucPhan)
    {
    case 'A': cout<<"A=10"<<endl; break;
    case 'B': cout<<"B=11"<<endl; break;
    case 'C': cout<<"C=12"<<endl; break;
    case 'D': cout<<"D=13"<<endl; break;
    case 'E': cout<<"E=14"<<endl; break;
    case 'F': cout<<"F=15"<<endl; break;
    default:
        break;
    }
}

