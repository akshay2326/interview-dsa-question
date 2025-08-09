#include <iostream>
#include <vector>
using namespace std;

int countVowel(string s, int start) {
    string vowels = "aeiouAEIOU";
    
    
    if (start == s.length()) {
        return 0;
    }


    int count = (vowels.find(s[start]) != string::npos) ? 1 : 0;

   
    return count + countVowel(s, start + 1);
}

int main() {
    string s = "akshay";
    int start = 0;
    cout << countVowel(s, start) << endl;
}
