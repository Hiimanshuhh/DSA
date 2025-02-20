#include<iostream>
#include<vector>
using namespace std;
int arr[4]={1,2,3,4};
int targetVal = 5;
int main(){
  for(int i=0;i<4;i++){
    for(int j=i+1;j<4;j++){
      if(arr[i]+arr[j]==targetVal){
        cout<<i<<" "<<j;
        break;
      }
    }
  }
  return 0;
}