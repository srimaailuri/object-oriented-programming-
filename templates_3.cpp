#include <iostream>
using namespace std;
template<typename T>
void Swap(T x,T y){
    T temp;
    temp=y;
    y=x;
    x=temp;
    cout<<"x is "<<x<<"; y is :"<<y<<endl;
}
int main(){
   // int x=5,y=6;
    Swap<int>(5,6);
    Swap<double>(5.65,6.25);
    Swap<float>(5.6f,6.2f);
    Swap<char>('a','b');
}