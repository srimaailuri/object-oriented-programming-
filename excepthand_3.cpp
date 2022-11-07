#include <iostream>
#include <typeinfo> 
#include <string> 
using namespace std ;
float Division(float num, float den)
{ if (den == 0) 
{ throw runtime_error("Math error: Attempted to divide by Zero\n");
}
return (num / den);
}
int main(){ int a = 5 , c;
float b= 3.0;
try { if (typeid(a).name() != typeid(b).name()){ throw logic_error("The datatypes are different");
} else { c = a+b ;
}
}
catch (domain_error& d){ cout << d.what() ;
} int d =0 ; try{
Division(a,d);
} catch (logic_error &l){ 
    cout << l.what()  ;
}
return 0;
}
