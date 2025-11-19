//week02-2.cpp
#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter: ";
    string a, ans;
    cin >> a;

    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];
    }
    cout << a << ans;
}
