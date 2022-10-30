#include <iostream>
using namespace std;
template<typename T>
void duplicate(T arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<endl;
            }
        }
    }
}
int main(){
    int n,i,arr[100];
    cout<<"please enter number of elements:";
    cin>>n;
    cout<<"please enter elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate<int>(arr,n);
}