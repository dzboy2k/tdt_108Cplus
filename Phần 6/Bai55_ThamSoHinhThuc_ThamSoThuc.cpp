#include<iostream>
using namespace std;
int min(int a, int b);
int min1(int a, int b);
int main(){
    cout<<min(5,6)<<endl; // Tham số thực
    cout<<min1(6,7)<<endl;
    system("pause");
}
// Tham số hình thức
int min(int a, int b){
    if(a<b){
        return a;
    }
    else 
        return b;
}

int min1(int a, int b){
    return a<b?a:b;
}