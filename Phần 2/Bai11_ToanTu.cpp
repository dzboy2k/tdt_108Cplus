#include<iostream>
using namespace std;
int main(){
    cout<<"Toan tu ++" <<endl;
    int a=100;
    int b;
    b=a++ +1;
    cout<<b<<endl;
    b=a+0; // sau khi thuc hien bieu thuc a=a+1
    cout<<b<<endl;
    a=100;
    b=++a +1; //a=a+1 truoc khi thuc hien bieu thuc
    cout<<b<<endl;
    cout<<"-------------------------"<<endl;
    //Toan tu dieu kien ? :
    cout<<"Toan tu dieu kien"<<endl; 
    int x=10;
    b= x>9?5*x:100;
    cout<<b<<endl;
    int m=1, n=2, p=3;
    int t=m<n?(m<p?m:p):(n<p?n:p);
    cout<<t<<endl;
    cout<<"---------------------"<<endl;
    // Toan tu sizeof: tra ve so byte
    cout<<"Toan tu sizeof"<<endl;
    t=sizeof(int);
    cout<<t<<endl;
    t=sizeof(float);
    cout<<t<<endl;
    t=sizeof(char);
    cout<<t<<endl;
    cout<<"--------------------"<<endl;
    // Toán tử dấy phẩy
    cout<<"Toan tu dau phay"<<endl;
    int y;
    x = (y=3,y+1);
    cout<<x<<endl;
    //Demo
    cout<<"--------------"<<endl;
    x=5,y=10;
    int z=++x - y--;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    cout<<"z="<<z<<endl;
    system("pause");
}