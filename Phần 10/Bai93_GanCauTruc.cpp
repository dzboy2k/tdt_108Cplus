#include<iostream>
using namespace std;
struct book
{
      char title[30];
      char author[20];
      int pages;
      float price;
};

int main(){
      book b;
      cout<<"Input book information:"<<endl;
      cout<<"Nhap ten sach:"; 
      gets(b.title);
      cout<<"Nhap tac gia:"; 
      gets(b.author);
      cout<<"Nhap so trang:"; 
      cin>>b.pages;
      cout<<"Nhap gia:"; 
      cin>>b.price;

      book a = b;
      cout<<"\nInformation of book is:"<<endl;
      cout<<"Ten sach="<<a.title<<endl;
      cout<<"Author="<<a.author<<endl;
      cout<<"So trang="<<a.pages<<endl;
      cout<<"Gia="<<a.price<<endl;;
      a.price=999;
      cout<<"Gia cua b.price="<<b.price<<endl;
      system("pause");
}