/// week04-1.cpp
/// vector<int> a
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> a;
    cout << "a long " << a.size() << endl;/// 0

    a.push_back(99);
    cout << "after .push_back() a became " << a.size() << endl;

    vector<int> b(3);
    cout << "b long " << b.size() << endl;

    b.push_back(99);
    for(int i=0; i<b.size(); i++) cout << b[i] << ' ';/// 0 0 0 99
    cout << "after .push_back(99) b became " << endl;

    vector<int> c(3, 88);/// let 3 in 88
    for(int i=0; i<c.size(); i++) cout << c[i] << ' ';
    cout << "return (3, 88) is triple 88" << endl;
}
