#include <iostream>
using namespace std;
double zerodivision(int x,int y){
    if(y==0){
        throw "Division by zero is not allowed!";
    }
    return (x/y);
}
int main(){
    int num,deno;
    double result;
    cout<<"please give numerator and denominator:"<<endl;
    cin>>num>>deno;
    try{
        result=zerodivision(num,deno);
        cout<<result<<endl;
        }
    catch(const char* message){
        cout<<message<<endl;
    }
    return 0;
}