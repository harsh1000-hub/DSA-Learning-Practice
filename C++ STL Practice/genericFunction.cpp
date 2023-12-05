#include<iostream>
using namespace std;
// generic function
template<class X>
void Swap(X &a,X &b){
    X temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swap both : "<<a<<" "<<b<<endl;
}
int main(){
      int a=10,b=5;
      float c=2.5,d=5.1;
      Swap(a,b);
      Swap(c,d);
      return 0;
}