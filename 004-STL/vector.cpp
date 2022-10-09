#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a;
    cout << a.size() << endl;
    a.push_back(0);
    a.push_back(1);
    cout << a.size() << endl;
    return 0;
}