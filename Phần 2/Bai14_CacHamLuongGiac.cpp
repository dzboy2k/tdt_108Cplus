#include<iostream>
#include<math.h>
using namespace std;
#define PI 3.14
int main(){
    double x;
    cout<<"Nhap goc x: ";
    cin>>x;
    double t=(x/180)*PI;
    double sinx=sin(t);
    double cosx=cos(t);
    double tanx=tan(t);
    double cotx=1/tan(x);
    cout<<"sin x ="<<sinx<<endl;
    cout<<"cos x ="<<cosx<<endl;
    cout<<"tan x ="<<tanx<<endl;
    cout<<"cot x ="<<cotx<<endl;
    system("pause");
}