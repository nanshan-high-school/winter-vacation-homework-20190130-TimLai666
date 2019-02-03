#include <iostream>
using namespace std;
void check(string);
void judgment(int);
int main() {
    string num;
    cout << "請輸入身分證號碼:\n";
    cin >> num;
    check(num);
}

void check(string num){
    int engten = 0, engone = 0, checking = 0;

    // 數字部分int化
    for(int i = 1; num[i] != '\0'; i++) {
        num[i] -= '0';
    }

    // 處理英文字
    if(num[0] == 'A') {
        num[0] = 10;
    }else if(num[0] == 'B') {
        num[0] = 11;
    }else if(num[0] == 'C') {
        num[0] = 12;
    }else if(num[0] == 'D') {
        num[0] = 13;
    }else if(num[0] == 'E') {
        num[0] = 14;
    }else if(num[0] == 'F') {
        num[0] = 15;
    }else if(num[0] == 'G') {
        num[0] = 16;
    }else if(num[0] == 'H') {
        num[0] = 17;
    }else if(num[0] == 'I') {
        num[0] = 34;
    }else if(num[0] == 'J') {
        num[0] = 18;
    }else if(num[0] == 'K') {
        num[0] = 19;
    }else if(num[0] == 'L') {
        num[0] = 20;
    }else if(num[0] == 'M') {
        num[0] = 21;
    }else if(num[0] == 'N') {
        num[0] = 22;
    }else if(num[0] == 'O') {
        num[0] = 35;
    }else if(num[0] == 'P') {
        num[0] = 23;
    }else if(num[0] == 'Q') {
        num[0] = 24;
    }else if(num[0] == 'R') {
        num[0] = 25;
    }else if(num[0] == 'S') {
        num[0] = 26;
    }else if(num[0] == 'T') {
        num[0] = 27;
    }else if(num[0] == 'U') {
        num[0] = 28;
    }else if(num[0] == 'V') {
        num[0] = 29;
    }else if(num[0] == 'W') {
        num[0] = 32;
    }else if(num[0] == 'X') {
        num[0] = 30;
    }else if(num[0] == 'Y') {
        num[0] = 31;
    }else if(num[0] == 'Z') {
        num[0] = 33;
    }

    // 位數分離
    engone = num[0] % 10;
    engten = num[0] / 10;

    // 計算
    checking = engone * 9 + engten;
    for(int i = 1, j = 8; i < 8; i++) {
        num[i] *= j;
        j--;
    }
    for(int i = 1; i < 10; i++) {
        checking += num[i];
    }
    judgment(checking);
}

void judgment(int checking) {
    if(checking / 10 * 10 == checking) {
        cout << "\nreal";
    }else{
        cout << "\nfake";
    }
    cout << '\n';
}
