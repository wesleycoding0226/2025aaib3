///week04-2.cpp
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a(3);
    vector<int> b(3, 88);

    int c[10] = {1, 2, 3, 9, 8, 7, 4, 5, 6, 0};

    vector<int> d(c, c+3);
    for(int i=0; i<d.size(); i++) cout << d[i] << " ";
    cout << "C assist , helping return\n\n";

    vector<int> e(c, c+10);
    for(int i=0; i<e.size(); i++) cout << e[i] << " ";
    cout << "same\n\n";
}
