#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>g1;
    for(int i=1;i<=5;i++)
        g1.push_back(i);
    cout<<"Size :"<<g1.size();
    cout<<"\nCapacity:"<<g1.capacity();
    cout<<"\nMax_Size:"<<g1.max_size();
    //pointer to the first elment
    int *pos=g1.data();
    cout<<*pos;
    //resizes vector size to 4
    g1.resize(4);
    //vector size after resize()
    cout<<"\nSize :"<<g1.size();
    //checks vector is empty or not
    if(g1.empty()==false)
       cout<<"\nVector is not empty";
    else
       cout<<"\nVector is empty";
    cout<<"\n Reference operator :"<<g1[2];
    cout<<"\nat:g1.at(4)="<<g1.at(4);
    cout<<"front element:"<<g1.front();
    cout<<"back element:"<<g1.back();
    
    //Shrinks the vector
    g1.shrink_to_fit();
    cout<<"\nVector elements are:";
    for(auto it=g1.begin();it!=g1.end();it++)
       cout<<*it<<" ";
    return 0;
}