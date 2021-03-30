#include<iostream>
using namespace std;
struct coordXY
{
      int x;
      int y;
}diemA,diemB;
int main(){
      // Toán tử dấu chấm "." dùng để truy cập các thành viên của 1 biến cấu trúc
      // Gán giá trị cho tọa độ diemA
      diemA.x = 100;
      diemA.y = 200;
      // In tọa độ điểm A
      cout<<"A("<<diemA.x<<","<<diemA.y<<")"<<endl;
      system("pause");
}
