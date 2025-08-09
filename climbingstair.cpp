#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int t[201];

int solve( int n ,int i){
    if(n==0)return 1;
    if(n<0)return 0;
if(t[i]!=-1)return t[i];

    int one_step=solve(n-1,i+1);
    int two_step=solve(n-2,i+1);
    return t[i]=one_step+two_step;
}
int climbingstair(int n){
    memset(t,-1,sizeof(t));
   return solve(n,0);

}

int main(){
    int n;
    cout<<"number of stairs";

    cin>>n;

   cout<< climbingstair(n);

}
