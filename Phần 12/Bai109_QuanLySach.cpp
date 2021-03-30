#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct Book
{
      char ISBN[20];
      char Ten[150];
      int Trang;
      char TacGia[150];
};
void NhapSach(Book &b){
      cout<<"Nhap ISBN: ";
      gets(b.ISBN);
      cout<<"Nhap Ten: ";
      gets(b.Ten);
      cout<<"Nhap Trang: ";
      cin>>b.Trang;
      cin.ignore();
      cout<<"Nhap tac gia: ";
      gets(b.TacGia);
}
void NhapDanhSach(Book dsSach[],int n){
      for (int i = 0; i < n; i++)
      {
            cout<<"Nhap sach thu "<<i<<":\n";
            NhapSach(dsSach[i]);
      }      
}
void XuatSach(Book b){
      cout<<b.ISBN<<"\t"<<b.Ten<<"\t"<<b.TacGia<<"\t"<<b.Trang<<endl;
}
void XuatDanhSach(Book dsSach[],int n){
      for (int i = 0; i < n; i++)
      {
            XuatSach(dsSach[i]);
      }   
}
void LuuFile(Book dsSach[],int n){
      ofstream outfile ("Bai109_csdlbook.txt",ostream::binary);
      for (int i = 0; i < n; i++)
      {
            Book b = dsSach[i];
            outfile.write((char *)&b,sizeof(Book));
      }
      outfile.close();
}
void DocFile(Book dsSach[],int &n){
      ifstream infile ("Bai109_csdlbook.txt",ifstream::binary);
      infile.seekg(0,infile.end);
      long size = infile.tellg();
      infile.seekg(0);
      n = size/sizeof(Book);
      for (int i = 0; i < n; i++)
      {
            Book b;
            infile.read((char*)&b,sizeof(Book));
            dsSach[i]=b;
      }
      infile.close();
}
void TimSach(Book dsSach[],int n,char *tg){
      for (int i = 0; i < n; i++)
      {
            Book b = dsSach[i];
            // int kq = strcmp(b.TacGia,tg); // So sánh chuỗi
            int kq = stricmp(b.TacGia,tg); // So sánh chuỗi không phân biệt chữ hoa chữ thường
            if(kq==0){
                  XuatSach(b);
            }
      }
}
void SapXep(Book dsSach[],int n){
      for (int i = 0; i < n-1; i++)
      {
            for (int j = i+1; j < n; j++)
            {
                  Book b1 = dsSach[i];
                  Book b2 = dsSach[j];
                  if(b1.Trang<b2.Trang){
                        dsSach[i]=b2;
                        dsSach[j]=b1;
                  }
            }
            
      }
      
}
void XuatTop3(Book dsSach[],int n){
      int m=n<3?n:3;
      for (int i = 0; i < m; i++)
      {
            XuatSach(dsSach[i]);
      }
}

int main(){
      int m;
      cout << "Moi ban nhap so luong sach: ";
      cin>>m;
      cin.ignore();
      Book dsSach[m];
      NhapDanhSach(dsSach,m);
      cout<<"================================================="<<endl;
      while (true)
      {
            cout<<"========== Chuong Trinh Quan Ly Sach =========="<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"1. Nhap danh sach SACH"<<endl;
            cout<<"2. Luu - Doc danh sach vao File"<<endl;
            cout<<"3. Xuat danh sach SACH"<<endl;
            cout<<"4. Tim SACH theo tac gia"<<endl;
            cout<<"5. Xuat Top 3 sach co so trang nhieu nhat"<<endl;
            cout<<"6. Sap xep sach theo so trang giam dan"<<endl;
            cout<<"7. Thoat chuong Trinh"<<endl;
            cout<<"-----------------------------------------------"<<endl;
            cout<<"Chon chuc nang:";
            int n;
            do{
                  cin>>n;
                  if(n>7||n<1)
                        cout<<"Ban da nhap sai, moi ban nhap lai:";
            } while (n>7||n<1);
            cin.ignore();
            switch (n)
            {
            case 1:
                  NhapDanhSach(dsSach,m);
                  break;
            case 2:
                  LuuFile(dsSach,m);
                  DocFile(dsSach,m);
                  break;
            case 3:
                  XuatDanhSach(dsSach,m);
                  break;
            case 4:
                  cout<<"Nhap tac gia: ";
                  char tg[150];
                  gets(tg);
                  TimSach(dsSach,m,tg);
                  break;
            case 5:
                  SapXep(dsSach,m);
                  cout<<"Top 3:"<<endl;
                  XuatTop3(dsSach,m);
                  break;
            case 6:
                  SapXep(dsSach,m);
                  cout<<"Sau khi sort:"<<endl;
                  XuatDanhSach(dsSach,m);
                  break;
            case 7:
                  system("pause");
                  exit(0);
                  break;
            default:
                  break;
            }

            char ques[10];
            cout<<"Ban co muon tiep tuc khong? (c/k): ";
            gets(ques);
            if(stricmp(ques,"k")==0)
                  break;
      }
      
      // Book dsSach[5];
      // NhapDanhSach(dsSach,5);
      // cout<<"Sach sau khi nhap:\n";
      // XuatDanhSach(dsSach,5);
      // LuuFile(dsSach,5);
      
      // int max=1000;
      // Book dsSach[max];
      // int n;
      // DocFile(dsSach,n);
      // XuatDanhSach(dsSach,n);
      // cout<<"Nhap tac gia: ";
      // char tg[150];
      // gets(tg);
      // TimSach(dsSach,n,tg);
      // SapXep(dsSach,n);
      // cout<<"\nSau khi sort:"<<endl;
      // XuatDanhSach(dsSach,n);
      // cout<<"\n------------------------\n";
      // cout<<"Top 3:"<<endl;
      // XuatTop3(dsSach,n);
      system("pause");
}
