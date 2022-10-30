#include <iostream>
using namespace std;
template<typename T>
void squares(T x){
    cout<<"square is:"<<x*x<<endl;
    }
int main(){
    squares<int>(5);
    squares<double>(5.65);
    squares<float>(5.2f);
}