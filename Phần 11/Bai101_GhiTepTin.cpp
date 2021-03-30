#include<iostream>
#include<stdio.h>
// stdio.h là một trong những thư viện thường dùng để
// tương tác file
using namespace std;
int main(){
      FILE *file=fopen("Bai101_duLieu.txt","w"); 
      // fopen("Tên file","w"):Mở 1 file, w:kí tự dùng để ghi mới file

      fputs("sv1;Nguyen Van Co;22\n",file); //fputs():Viết 1 chuỗi đến 1 file
      fputs("sv2;Tran Thi Tam;21\n",file);
      fputs("sv3;Ho Van Huyet;23\n",file);
      fclose(file);
      // fclose():Đóng 1 file, thiếu lệnh này sẽ không ghi được file

      file=fopen("Bai101_csdl.txt","w");
      fputs("sv01;Nguyen Van Teo;1/1/1998\n",file);
      fputs("sv02;Tran Hanh Phuc;2/3/1997\n",file);
      fputs("sv03;Pham Hong An;5/7/1998\n",file);
      fclose(file);
      // File .cpp có thể ghi được nhiều file .txt
      system("pause");
}