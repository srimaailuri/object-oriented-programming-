#include <iostream>
 using namespace std ;
int main(){ int a[5] = {1,2,3,4,5}; 
int i =6; try { if (i > 5){
throw(out_of_range("The given index is out of range"));
 throw(length_error("The given index is outside the length of the array")); } 
 else { 
    cout << a[i] ;
}
}
catch(out_of_range &o){
     cout << o.what()  ;
}
 try {
     if (i > 5){
         throw(length_error("The given index is outside the length of the array"));
}
}
catch(length_error &l){ cout << l.what() ;
}
}
