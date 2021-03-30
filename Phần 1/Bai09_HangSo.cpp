#include<iostream>
using namespace std;
#include<math.h>
int main (){
    // dung tu khoa const hoac define de khai bao ham so
    const double PI = 9;
    #define PI 3.14
    cout<<"PI="<<PI<<endl;
    double r;
    cout<<"Moi ban nhap ban kinh: ";
    cin>>r;
    cout<<"Chu vi="<<2*PI*r<<endl;
    cout<<"Dien tich="<<pow(r,2)*PI<<endl;
    system("pause");
}