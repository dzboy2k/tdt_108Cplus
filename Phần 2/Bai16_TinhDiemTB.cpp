#include<iostream>
#include<iomanip> /*Khai báo thư viện*/
using namespace std;
int main(){
    double toan,ly,hoa;
    cout<<"Nhap diem toan: ";
    cin>>toan;
    cout<<"Nhap diem ly: ";
    cin>>ly;
    cout<<"Nhap diem toan: ";
    cin>>hoa;
    double diemTB=(toan+ly+hoa)/3;
    cout<<"Diem trung binh cua ban = "<<setprecision(3)<<diemTB<<endl; /*setprecision: hàm làm tròn số*/
    system("pause");
}