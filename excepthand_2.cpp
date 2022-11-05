#include<iostream>
using namespace std;
int main(){
    try{
        throw 10;
    }
    catch(char *excp){
        cout<<"Caught"<<excp;
    }
    catch(...){
        cout<<"Default Exception";
    }
    return 0;
}