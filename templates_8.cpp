#include <iostream>
using namespace std;
template<typename T>
void find_biggest(T x,T y,T z){
    if(x>y && x>z){
        cout<<"bigger is:"<<x<<endl;
    }
    else if(y>z && y>x){
        cout<<"bigger is:"<<y<<endl;
    }
    else{
        cout<<"bigger is:"<<z<<endl;
    }
}
int main(){
    find_biggest<int>(5,8,9);
    find_biggest<float>(5.2,8.6,9.5);
    find_biggest<double>(5.25,8.69,9.78);
}