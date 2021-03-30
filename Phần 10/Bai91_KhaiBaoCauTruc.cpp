#include<iostream>
#include<string.h>
using namespace std;
struct addr // Khai báo cấu trúc
      {
            char name[30];
            char street[40];
            char city[20];
            char state[3];
            unsigned long int zip;
      };
struct DiaChi
{
      char SoNha[25];
      char TenDUong[255];
      char Quan[25];
      char TinhThanh[25];
};
struct SinhVien
{
      char MaSV[10];
      char TenSV[255];
      bool GioiTinh;
      DiaChi DiaChiNha;
      DiaChi DiaChiTruong;
}teo,ty; // Đặt tên cấu trúc

int main(){
      strcpy(teo.TenSV,"Nguyen Van Teo");
      teo.GioiTinh=false;
      strcpy(teo.MaSV,"SV113");
      cout<<"-----------------------------------"<<endl;
      cout<<"Ma="<<teo.MaSV<<endl;
      cout<<"Ten="<<teo.TenSV<<endl;
      cout<<"Gioi="<<(teo.GioiTinh==true?"Nu":"Nam")<<endl;
      cout<<"-----------------------------------"<<endl;

      SinhVien bin;
      strcpy(bin.TenSV,"Pham Bin Bin");
      cout<<"Ten cua Bin="<<bin.TenSV<<endl;
      system("pause");
}
      