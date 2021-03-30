#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
void LuuFile(int number);
int main(){
      while(true){
            int number;
            cout<<"Nhap so:";
            cin>>number;
            LuuFile(number);
            char h;
            cout<<"Nhap tiep khong?(c/k):";
            cin>>h;
            if(h=='k')
                  break;
      }
      cout<<"Ban da nhap xong!"<<endl;
      FILE *file=fopen("Bai105_csdl.txt","r");
      int MChan[1000],iChan=0;
      int MLe[1000],iLe=0;
      int MAm[1000],iAm=0;
      while(true){
            char *line;
            char buffer[5];
            line=fgets(buffer,5,file);
            if(line!=NULL){
                  int number=atoi(line); //Đưa từ chuỗi về số
                  if(number%2==0&&number>=0){
                        MChan[iChan++]=number;
                  }
                  else if(number%2!=0&&number>=0){
                        MLe[iLe++]=number;
                  }
                  else{
                        MAm[iAm++]=number;
                  }
                  // cout<<number<<endl;
            }
            else{
                  break;
            }
      }
      fclose(file);
      cout<<"Cac so chan:";
      for(int i=0;i<iChan;i++){
            cout<<MChan[i]<<"\t";
      }
      cout<<endl;
      cout<<"Cac so le:";
      for(int i=0;i<iLe;i++){
            cout<<MLe[i]<<"\t";
      }
      cout<<endl;
      cout<<"Cac so am:";
      for(int i=0;i<iAm;i++){
            cout<<MAm[i]<<"\t";
      }
      cout<<endl;
      system("pause");
}
void LuuFile(int number){
      FILE *file=fopen("Bai105_csdl.txt","a"); //a: Lưu nối đuôi (append)
      char str[5];
      itoa(number,str,10);
      // Chuyển giá trị của số sang chuỗi
      // 10->Thập phân, 16->hexa, 8->octal, 2->binary
      fputs(str,file);
      fputs("\n",file);
      fclose(file);
}