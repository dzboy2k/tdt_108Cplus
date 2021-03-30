#include<iostream>
#include<string.h>
using namespace std;
struct DiaChi
{
      char TenDuong[255];
      char Quan[150];
      char TinhThanh[50];
};
struct NhanVien
{
      int Ma;
      char Ten[50];
      int Tuoi;
      DiaChi CoQuan;
      DiaChi NhaRieng;
};
int main(){
      NhanVien teo;
      teo.Ma=1;
      strcpy(teo.Ten,"Teo");
      teo.Tuoi=23;
      strcpy(teo.CoQuan.TenDuong,"So 1 Lac Long Quan");
      strcpy(teo.CoQuan.Quan,"Quan 11");
      strcpy(teo.CoQuan.TinhThanh,"Tp.HCM");
      strcpy(teo.NhaRieng.TenDuong,"So 2 AU Co");
      strcpy(teo.NhaRieng.Quan,"Quan 11");
      strcpy(teo.NhaRieng.TinhThanh,"Tp.HCM");
      
      cout<<"Thong tin cua Teo:"<<endl;
      cout<<"Ma="<<teo.Ma<<endl;
      cout<<"Ten="<<teo.Ten<<endl;
      cout<<"Tuoi="<<teo.Tuoi<<endl;
      cout<<"Dia chi Co quan:"<<teo.CoQuan.TenDuong<<","<<teo.CoQuan.Quan
      <<","<<teo.CoQuan.TinhThanh<<endl;
      
      cout<<"\n------------------------\n";
      NhanVien *Pty=new NhanVien;
      strcpy(Pty->Ten,"Ty");
      strcpy(Pty->NhaRieng.TinhThanh,"Ha Noi");
      cout<<Pty->Ten<<"->"<<Pty->NhaRieng.TinhThanh<<endl;
      system("pause");
}

