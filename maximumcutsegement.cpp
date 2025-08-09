#include<iostream>
#include<vector>
#include<cstring>
#include <algorithm>

using namespace std;
int solve(int n,int x,int y,int z){
    if (n < 0) {
        return -1; 
    }
    if(n==0)return 0;
    int takex=solve(n-x,x,y,z);
    int takey=solve(n-y,x,y,z);
    int takez=solve(n-z,x,y,z);

   return 1+max({takex,takey,takez});
}
int segment(int n,int x, int y ,int z){
    return solve(n,x,y,z);
}

int main(){
    int x,y,z;
    int n;
   int result= segment(5,2,3,1);
   cout<<result;
 return 0;

}