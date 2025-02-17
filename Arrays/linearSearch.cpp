#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the element you want to search : ";
  cin>>n;
  int arr[] ={1,2,3,4,5,6,7,8,9,10};
  bool flag = false;
  for(int i= 0;i<10;i++){
    if(arr[i]==n){
      flag = true;
      break;
    }
  }
  if(flag=true){
    cout<<"Element found";

  }
  else{
    cout<<"Element not found"<<endl;
  }
  return 0;
}