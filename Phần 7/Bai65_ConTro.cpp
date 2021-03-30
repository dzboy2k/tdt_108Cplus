#include<iostream>
using namespace std;
int main(){
    int *p; //Khai báo 
    p = new int; //Cấp phát bộ nhớ cho con trỏ p nếu là float thì là new float, char là new char
    *p = 100; //gán giá trị bằng 100 tại ô mà p đang trỏ tới
    cout<<"Dia chi tai con tro p="<<p<<endl;
    cout<<"Gia tri tai dia chi ma con tro p dang tro toi "<<*p<<endl;
    delete p; //Thu hồi bộ nhớ, hủy bộ nhớ, bị lỗi Memory Leak nếu không thu hồi bộ nhớ
    system("pause");
}