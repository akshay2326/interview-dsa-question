#include<iostream>
#include<vector>
using namespace std;
void print (vector<int>&arr,int index){
    if(index==arr.size()){
        return ;
    }
    cout<<arr[index];
    print(arr,index+1);
}
int main(){
    vector<int>arr={1,2,3,4};
    print(arr,0);

}
