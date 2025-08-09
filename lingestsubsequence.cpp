#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int solve(string &text1, string &text2, int i, int j, int n, int m) {
    if (i >= n || j >= m)
        return 0;

    if (text1[i] == text2[j]) {
        return 1 + solve(text1, text2, i + 1, j + 1, n, m);
    } else {
        int skipText1 = solve(text1, text2, i + 1, j, n, m);
        int skipText2 = solve(text1, text2, i, j + 1, n, m);
        return max(skipText1, skipText2);
    }
}

int longestsub(string text1 , string text2){
    int n = text1.length();
    int m = text2.length();
    return solve(text1, text2, 0, 0, n, m);
}


int main(){
    string text1="abcde";
    string text2="ace";
   cout<< longestsub(text1,text2);


}
