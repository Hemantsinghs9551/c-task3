#include<iostream>
using namespace std;
int main(){
    int arr[5],*ptr,i;
    cout<<"enter any five number:\n";
    for(i=0;i<5;++i)
    cin>>arr[i];
    ptr = &arr[0];
    cout<<"the values are:\n";
    for(i=0;i<5;++i)
    cout<<*ptr++<<" ";
   
 return 0;
}
