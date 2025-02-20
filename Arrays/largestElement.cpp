#include <iostream>
using namespace std;
int main(){
  int arr[] = {8,7,4,100,2,9,5};
  int bigVal = 0;
  for(int i=0;i<7;i++){
    if(arr[i]<bigVal){
      bigVal = arr[i];

    }
  }
  cout<<bigVal;
}