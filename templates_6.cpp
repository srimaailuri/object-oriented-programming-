#include <iostream>
using namespace std;
template<typename T,typename U>
class numbers{
    public:
    U sum_differ;
    T sum;
    void sum_different(T x,U y){
        sum_differ=x+y;
        cout<<"sum of double and int:"<<sum_differ<<endl;
    }
    void sum_same(T x,T y){
        sum=x+y;
        cout<<"sum of int and int:"<<sum<<endl;
    }
};
int main(){
    numbers<int,double>obj1;
    obj1.sum_different(5,6.28);
    numbers<int,int>obj2;
    obj2.sum_same(5,6);
    return 0;
}