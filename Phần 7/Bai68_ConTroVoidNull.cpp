#include<iostream>
using namespace std;
int main(){
    // Con trỏ void
    int a=5;
    float f=5.5;
    int *pa;
    float *pf;
    pa=&a; //Địa chỉ đặt vào biến con trỏ phải cùng kiểu với kiểu của con trỏ
    pf=&f;

    void *p; //Có thể trỏ đến bất kì kiểu dữ liệu nào
    p=&a; 
    p=&f;
    /*
    Nếu p trỏ đến int a, để tăng a lên 10 đơn vị: *(int*)p +10
    Nếu p trỏ đến float f, để tăng a lên 10 đơn vị: *(float*)p +10
    */
    p=&a;
    *(int*)p=10;
    cout<<"a="<<a<<endl;

    p=&f;
    *(float*)p = 20.5;
    cout<<"f="<<f<<endl;

    //Con trỏ null
    int *p1; //Không trẻ đến một địa chỉ hợp lệ và không trỏ đến đâu cả, bị lỗi
    // khai báo
    int *y=new int;
    cout<<"Gia tri o nho ma y quan ly "<<*y<<endl;
    system("pause");
}