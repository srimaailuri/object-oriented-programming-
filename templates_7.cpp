#include <iostream>
using namespace std;
template< typename T >
class largest{
    public:
    void large(T x,T y){
        if(x>y){
            cout<<"largest num:"<<x<<endl;}
        else{
            cout<<"largest num:"<<y<<endl;}
        }
};
int main(){
    largest <int> obj1;
    obj1.large(5,8);
    obj1.large(9.2,8.9);
}