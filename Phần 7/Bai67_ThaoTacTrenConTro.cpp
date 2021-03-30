#include<iostream>
using namespace std;
int main(){
    // Lệnh gán con trỏ, cả p1,p2 cùng trỏ tới biến x
    int x;
    int *p1, *p2;
    p1=&x;
    p2=p1;

    // Phép toán trên con trỏ
    
    // (1)
    *p1=2000;
    cout<<"p1="<<*p1<<endl;
    cout<<"&p1="<<p1<<endl;
    p1++; /*Thục hiện phép toán trên ô địa chỉ, thay đổi địa chỉ, không thực hiện phép toán cho giá trị*/
    cout<<"p1++="<<*p1<<endl; 
    cout<<"&p1++="<<p1<<endl;
    *p1=2000;
    cout<<"p1="<<*p1<<endl;
    p1--; //thay đổi địa chỉ
    cout<<"p1--="<<*p1<<endl;
    cout<<"&p1--="<<p1<<endl;
    cout<<"============"<<endl;
    *p1=2000;
    cout<<"p1+15="<<p1+15<<endl; //tăng giá trị
    cout<<"p1+15="<<*p1+15<<endl;
    *p1=2000;
    cout<<"p1-15="<<p1-15<<endl; //giảm giá trị
    cout<<"p1-15="<<*p1-15<<endl;
    cout<<"============"<<endl;

    // (2)
    int a=10, b=15;
    int *pa, *pb, temp;
    pa=&a; //Con trỏ pa trỏ tới địa chỉ của a
    pb=&b; //Con trỏ pa trỏ tới địa chỉ của b
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"Dia chi cua con tro pa="<<pa<<endl;
    pa++;
    cout<<"Dia chi cua con tro pa="<<pa<<endl;
    cout<<"Dia chi cua con tro pb="<<pb<<endl;
    pb++;
    cout<<"Dia chi cua con tro pb="<<pb<<endl;
    system("pause");
}