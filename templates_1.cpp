#include <iostream>
using namespace std;
template<typename T>
void sort(T arr[],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                T temp;
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
int main(){
    int n,i;
    char arr[100];
    cout<<"please enter number of elements:"<<endl;
    cin>>n;
    cout<<"please enter elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort<char>(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;



}