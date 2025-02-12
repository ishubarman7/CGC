#include<bits/stdc++.h>
using namespace std;
void revWordsString(string str) {
  stringstream ss(str);
    string word, result;
    while (ss >> word) {
        // Reverse the characters within the word
        reverse(word.begin(), word.end()); 
        result += word + " "; 
    }
    // Remove the trailing space
    if (!result.empty()) {
        result.pop_back();
    }
    cout<<result;
}