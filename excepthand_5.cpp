#include <iostream>
 using namespace std ;
int main(){
     try{ 
        if(1==1) throw(bad_alloc());
}
catch(bad_alloc &b){ 
    cout << b.what()  ;
} try{ 
    if(2==2) throw(bad_cast());
}
catch(bad_cast &b){
     cout << b.what()  ;
}
}
