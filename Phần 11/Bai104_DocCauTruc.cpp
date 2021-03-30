#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
struct NhanVien
{
      int ma;
      char ten[50];
};
void Xuat(NhanVien arr[],int n){
      for(int i=0;i<n;i++){
            cout<<arr[i].ma<<"\t"<<arr[i].ten<<"\n";
      }
}
void DocFile(){
      ifstream infile ("Bai103_csdl.txt",ifstream::binary); // Đọc dạng nhị phân
      infile.seekg(0,infile.end); // Cho phép đầu đọc văn bản quét từ đầu đến cuối
      long size=infile.tellg(); // tellg: trả về kích thước của file sau khi dùng seekg
      infile.seekg(0); // Quay về đầu đọc ở vị trí đầu tiên

      int real=size/sizeof(NhanVien); //Tìm số phần tử có cấu trúc được lưu vào file
      NhanVien dsNV[real];
      infile.read((char*)dsNV,sizeof(dsNV)); //Đọc file
      infile.close(); //Đóng file
      Xuat(dsNV,real);
}
int main(){
      DocFile();
      system("pause");
}