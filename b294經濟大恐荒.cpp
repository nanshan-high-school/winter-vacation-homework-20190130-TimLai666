#include <iostream>
using namespace std;
void coutallnum(int);
int main() {
    int n = 0, k = 0;
    cout << "輸入天數:\n";
    cin >> n;
    int num[n];
    cout << "輸入每天買的饅頭數量(用空白鍵區隔) ex:5 1 9 6:\n";
    for(int i = 0; i < n; i++) {
        cin >> num[i];
    }
    int o = 1;

    for(int i = 0; i < n; i++) {
        num[i] *= o;
        o++;
    }
    
    for(int i = 0; i < n; i++) {
        k += num[i];
    }

    coutallnum(k);
}


void coutallnum(int k) {
    cout << '\n' << k << '\n';
}