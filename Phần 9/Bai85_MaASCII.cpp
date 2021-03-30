#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char str[50];
    cout<<"Nhap chuoi ki tu:";
    gets(str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        char c=*(str+i);
        int acsii=int(c);
        cout<<c<<"=>"<<acsii<<endl;
    }
    system("pause");
}
