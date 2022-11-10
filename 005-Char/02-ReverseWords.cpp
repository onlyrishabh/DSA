/*
Given an input string s, reverse the order of the words.
A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
Return a string of the words in reverse order concatenated by a single space.
Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Approach One
void reverseWords(string s){
    vector<string> temp;
    string str = "";

    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            temp.push_back(str);
            str = "";
        } else {
            str += s[i];
        }
    }
    temp.push_back(str);
    int i;
    for(i = temp.size() - 1; i > 0; i--){
        cout << temp[i] << " ";
    }
    cout << temp[0];
}


int main(){
    string s = "the sky is blue";
    
    return 0;
}