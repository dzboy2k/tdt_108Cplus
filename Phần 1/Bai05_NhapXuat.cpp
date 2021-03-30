#include<iostream>
using namespace std;
int main(){
    //Nhap vao diem toan, van. Xuat ra diem trung binh
    int toan, van, dtb;
    cout<<"Nhap vao diem toan: ";
    cin>>toan;
    cout<<"Nhap vao diem van: ";
    cin>>van;
    dtb=(toan*2+van)/3;
    cout<<"Diem trung binh= "<<dtb<<endl;
    system("pause");
}