#include<iostream>
#include<vector>
using namespace std;
int minelement(vector<int>&arr,int index){
    if(index==arr.size()){
        return arr[index];
    }
    return min(arr[index],minelement(arr,index+1));
}
int main(){
    vector<int>arr={1,4,2,5,2,3};
    int index=0;
    cout<<minelement(arr,index);
}