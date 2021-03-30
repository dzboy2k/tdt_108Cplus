#include<iostream>
using namespace std;
int main(){
    double diem;
    cout<<"Nhap diem= "<<endl;
    cin>>diem;
    if (diem>10||diem<0){
        cout<<"Ban da nhap khong hop le"<<endl;
    }
    else
    {
        if (diem>5){
            cout<<"Ban dau"<<endl;
        }
        else
        {
             cout<<"Ban rot"<<endl;
        }
    }
    system("pause");
}