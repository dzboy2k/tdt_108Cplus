#include<iostream>
#include<fstream>
using namespace std;
struct SinhVien
{
      int ma;
      char ten[255];
      double dtb;
};
SinhVien *NhapSinhVien(){
      SinhVien *sv=new SinhVien;
      cout<<"Nhap ma:";
      cin>>sv->ma; // Truy suất các phần tử trong con trỏ cấu trúc
      cin.ignore(); // Xóa bộ nhớ đệm
      cout<<"Nhap ten:";
      gets(sv->ten); //Nhập chuỗi
      cout<<"Nhap diem:";
      cin>>sv->dtb;
      return sv;
}
void NhapDanhSachSinhVien(SinhVien **&dsSV,int siso){
      for (int i = 0; i < siso; i++)
      {
            cout<<"Nhap sinh vien thu "<<i<<":\n";
            SinhVien *sv=NhapSinhVien();
            *(dsSV+i)=sv;
      }
}
void XuatSinhVien(SinhVien *sv){
      cout<<sv->ma<<"-"<<sv->ten<<"-"<<sv->dtb<<endl;
}
void XuatDanhSachSinhVien(SinhVien **dsSV,int siso){
      for (int i = 0; i < siso; i++)
      {
            SinhVien *sv=*(dsSV+i);
            XuatSinhVien(sv);
      }
      
}
void LuuFile(SinhVien **dsSV,int siso){
      ofstream outfile("Bai106_csdltxt.txt",ofstream::binary);
      for(int i=0;i<siso;i++){
            SinhVien *sv=*(dsSV+i);
            outfile.write((char *)sv,sizeof(SinhVien));
      }
      outfile.close();
}
void DocFile(SinhVien **&dsSV,int &siso){ //&sisi: Truyền tham chiếu để tránh bị đổi siso thành siso thực trong file
      ifstream infile("Bai106_csdltxt.txt",ifstream::binary);
      infile.seekg(0,infile.end); // Đọc kích cỡ của file
      long size=infile.tellg(); //Trả về kích thước của file 
      infile.seekg(0); // Đưa đầu đọc về vị trí đầu tiên
      siso=size/sizeof(SinhVien); 
      dsSV=new SinhVien *[siso];
      for (int i = 0; i < siso; i++)
      {
            SinhVien *sv=new SinhVien;
            infile.read((char *)sv,sizeof(SinhVien));
            *(dsSV+i)=sv;
      }
      infile.close();
}
int main(){
      // int siso=3;
      // SinhVien **dsSV=new SinhVien*[siso];
      // NhapDanhSachSinhVien(dsSV,siso);
      // cout<<"Danh sach sinh vien sau khi nhap:\n";
      // XuatDanhSachSinhVien(dsSV,siso);
      // LuuFile(dsSV,siso);

      int siso;
      SinhVien **dsSV=NULL;
      DocFile(dsSV,siso);
      XuatDanhSachSinhVien(dsSV,siso);
      system("pause");
}