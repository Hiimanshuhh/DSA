#include<iostream>
using namespace std;
int main(){
  int arr[] ={1,2,3,4,5,5,6};
  for(int i=0;i<7;i++){
    for(int j=i+1;j<7;j++){
      if(arr[i]==arr[j]){
        cout<<arr[i]<<" is duplicate at index "<<i<<" and "<<j<<endl;
        return 0;
      }
    }
  }
}