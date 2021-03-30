#include<iostream>
using namespace std;
int main(){
    // Có hai toán tử là * và &
    // Toán tử & trả về địa chỉ bộ nhớ của toán hạng của nó
    // Toán tử * trả về giá trị của con trỏ trỏ đến
    int count=100;
    // int *m=&count;
    int *m;
    m = &count; //Con trỏ m nhận địa chỉ của biến count
    int q=*m; //q nhận giá trị 100 của biến count

    cout<<"Dia chi cua bien count: "<<&count<<endl;
    cout<<"Gia tri cua bien count: "<<count<<endl;
    cout<<"Dia chi cua con tro m: "<<&m<<endl;
    cout<<"Gia tri cua con tro m dang tro toi: "<<*m<<endl;

    int p=*m;
    cout<<"Gia tri cua p= "<<p<<endl;
    int *x=m;
    cout<<"Dia chi cua con tro x: "<<&x<<endl;
    cout<<"Gia tri cua con tro x dang tro toi: "<<*x<<endl;
    
    *x=15;
    cout<<"Gia tri cua con tro m dang tro toi: "<<*m<<endl;
    cout<<"Gia tri cua bien count: "<<count<<endl;

    // So sánh với biến
    int a=5,b=5;
    cout<<a<<" "<<b<<endl;
    a=6;
    cout<<a<<" "<<b<<endl;
    system("pause");
}