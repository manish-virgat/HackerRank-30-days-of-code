#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j, a, b;
    double e;
    string str;
    cin>>j>>e;
    getline(cin>>ws,str);
    cout<<j+i<<endl;
    cout<<fixed<<setprecision(1)<<e+d<<endl;
    cout<<s<<str;
    return 0;
}