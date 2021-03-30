#include<iostream>
using namespace std;
int main(){
    int mang[5];
    mang[1]=3;
    mang[2]=5;
    mang[3]=9;
    mang[4]=3;
    cout<<mang[4]<<endl;
    cout<<mang[-4]<<endl; //sai không báo lỗi
    // Kích thước mảng
    cout<<sizeof(int)*5<<endl;
    
    //Khởi tạo mảng
    int mang1[]={1,2,3,4,5,6};

    system("pause");
}