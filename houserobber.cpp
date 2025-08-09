#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
int solve( vector<int>&num,int i,int currsum){
 
    if(i>=num.size()){return currsum;}
    int take=solve(num,i+1,currsum+num[i]);
    int nontake=solve(num,i+2,currsum);
    return max(take,nontake);

}
int houserobber(vector<int>&num){

   return solve(num,0,0);
}


int main(){
    vector<int>num={2,5,3,8,4,5,6};
   cout<< houserobber(num);

}