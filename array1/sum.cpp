#include<iostream>
#include<vector>
using namespace std;

int sum1(vector<int>&arr,int index){
    if(index==arr.size()){
return 0;
    }
  return arr[index]+sum1(arr,index+1);
}
int main(){
    vector<int>arr={1,2,3,4,5,6};
    int index=0;
  
   cout<< sum1(arr,index);
   
}