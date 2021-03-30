#include<iostream>
#include<stdio.h>
using namespace std;
void docText1(){
      FILE *file=fopen("Bai101_duLieu.txt","r"); 
      // fopen("Tên file","r"):Mở 1 file, r:kí tự dùng để đọc file

      char *s;
      int i=0;
      do{
            char str[100];
            s=fgets(str,100,file); 
            // fgets():Đọc 1 chuỗi từ 1 file 
            // (str,100,file): đọc từng dòng, mỗi dòng đọc tối đa 100 kí tự
            cout<<s;
            if(s==NULL) //Đọc hết file sẽ ngừng
                  break;
      }
      while(true);
      fclose(file);
}
void docText2(){
      FILE *file=fopen("Bai101_csdl.txt","r");
      char *s;
      do{
            char line[150];
            s=fgets(line,150,file);
            if(s==NULL)
                  break;
            cout<<s;
      }
      while(true);
      fclose(file);
}
int main(){
      docText1();
      docText2();
      // File .cpp chỉ đọc được 1 file .txt
      system("pause");
}