#include<iostream>
#include<string.h>
#include<fstream>
// fstream là thư viện dùng để đọc ghi cấu trúc 
using namespace std;
struct NhanVien
{
      int ma;
      char ten[50];
};
void LuuFile(){
      NhanVien dsNV[4];
      dsNV[0].ma=1;
      strcpy(dsNV[0].ten,"Teo");
      dsNV[1].ma=2;
      strcpy(dsNV[1].ten,"Ty");
      dsNV[2].ma=3;
      strcpy(dsNV[2].ten,"Bin");
      dsNV[3].ma=4;
      strcpy(dsNV[3].ten,"Bo");

      ofstream outfile ("Bai103_csdl.txt",ofstream::binary); //ofstream::binary: Lưu trữ nhị phân
      outfile.write((char*)dsNV,sizeof(dsNV)); // Truyền vào: Tên Cấu Trúc (Kiểu char) - Kích cỡ
      outfile.close();
}
int main(){
      LuuFile();
      system("pause");
}