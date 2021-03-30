#include<iostream>
using namespace std;
int main (){
    int t;
    cout<<"Nhap so giay: ";
    cin>>t;
    int gio=t/3600%24;
    int phut=t%3600/60;
    int giay=t%3600%60;
    int hour=gio>12?gio-12:gio;
    cout<<"Ban da nhap: "<<hour<<":"<<phut<<":"<<giay<<(gio>12?" PM":" AM")<<endl;
    system("pause");
}