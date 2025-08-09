#include<iostream>
#include<vector>
using namespace std;
void lower(string &s,int index){
    if(index==s.length()){
        return;
    }

s[index] = s[index] + 'a' - 'A';

    lower(s,index+1);
}
int main(){
    string s="AKSHAY";
    int index=0;
     lower(s,index);
     for(int i=0;i<s.length();i++){
        cout<<s[i];
     }

}