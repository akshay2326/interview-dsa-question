#include<iostream>
#include<vector>
using namespace std;
bool pallindrome(string s,int start, int end){
    if(start>=end){
        return true;
    }
  
    if(s[start]!=s[end]){
        return false;


    }
   return pallindrome(s,start+1,end-1);
   
}
int main(){
    string s="naman";
    int start=0;
    int end=s.size()-1;
 if(pallindrome(s,start,end)){
    cout<<"it is pallindrome";
 }
 else{
    cout<<"not pallindrome";
 }
}