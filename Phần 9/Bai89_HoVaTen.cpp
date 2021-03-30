#include<iostream>
#include<string.h>
using namespace std;
void XoaKhoangTrang(char *str){
    int j=0;
    for(int i=0;i<strlen(str);i++){ 
        if(str[i]!=' '){ // Lấy chuỗi
            str[j++]=str[i];
        }
        else if(j>0&&str[i+1]!=' '){ // Lấy dấu cách
            str[j++]=str[i];
        }
    }
    if(str[j-1]==' '){ /* Xóa đoạn thừa j=i max, trường hợp có khoảng trắng ở cuối kí
    tự của chuỗi là \0: null nên dùng j-1*/ 
        str[j-1]='\0';
    }
    else str[j]='\0'; // Xóa đoạn thừa không có khoảng trắng ở cuối
}

char *LayTen(char *str)
{
	int k=0;
	for(int i=strlen(str);i>=0;i--)
	{
		if(str[i]==' ')
		{
			k=i+1;
			break;
		}
	}
	char *strTen=new char[10];
	int i2=0;
	for(int i=k;i<strlen(str);i++)
	{
		strTen[i2++]=str[i];
	}
	return strTen;
}

int main(){
    char *str=new char[255];
    strcpy(str,"  Nguyen   Thi     Lung    Linh  ");
    cout<<"Chuoi ban dau:"<<str<<endl;
    cout<<"Chieu dai:"<<strlen(str)<<endl;
    XoaKhoangTrang(str);
    cout<<"Chuoi khi xoa khoang trang:"<<str<<endl;
    cout<<"Chieu dai:"<<strlen(str)<<endl;
    char *ten=LayTen(str);
    cout<<"Ten="<<ten<<endl;
    system("pause");
}
