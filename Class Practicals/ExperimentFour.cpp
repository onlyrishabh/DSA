// Evaluate Postfix

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int evaluate(char* exp){
    stack<int> stack;
    int a = 0, b = 0, i = 0;
    while(exp[i] != '\0'){
        if(exp[i]!='+'&& exp[i]!='-'&& exp[i]!='/'&& exp[i]!='*'){
            int digit = exp[i]-'0';
            stack.push(digit); 
        } else {
            a = stack.top();
            stack.pop();
            b = stack.top();
            stack.pop();

            switch (exp[i]){
                case '+': stack.push(b + a); break;
                case '-': stack.push(b - a); break;
                case '*': stack.push(b * a); break;
                case '/': stack.push(b / a); break;
            }
        }
        i++;
    }
    return stack.top();
}

int main(){
    char str[50] = "452+*";
    cout << evaluate(str);
    return 0;
}
