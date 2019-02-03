#include <iostream>
using namespace std;
string check1(string);
void check3(string);
string check2(string, int);
int main() {
    int amount = 0;
    cout << "輸入字串數量:\n";
    cin >> amount;
    int length = 7;
    length -= 1;
    length *= amount;
    int password[length];
    for(int i = 0; i < length; i++) {
        password[i] = 0;
    }
    for(int k = 0; k < amount; k++) {
        string word;
        cout << "輸入7個大寫字母(" << k + 1 << "):\n";
        cin >> word;
        word = check1(word);
        for(int i = 0; i < 7; i++) {
            if(word[i] > word[i + 1]) {
                password[i + 6 * k] = word[i] - word[i + 1];
            }else if(word[i] < word[i + 1]) {
                password[i + 6 * k] = word[i + 1] - word[i];
            }
        }
    }

    cout << '\n';
    // 顯示
    for(int j = 0; j < amount; j++) {
        for(int i = 0 + 6 * j; i < 6 + 6 * j; i++) {
            cout << password[i];
        }
        cout << '\n';
    }   
}

// 檢查字數
string check1(string word) {
    int wordamount = 0;
    for(int i = 0; word[i] != '\0'; i++) {
        wordamount++;
    } 
    while(wordamount > 7 || wordamount < 7) {
        cout << "請重新輸入(7個大寫字母):\n";
        cin >> word;
        wordamount = 0;
        for(int i = 0; word[i] != '\0'; i++) {
            wordamount++;
        }
    }
    word = check2(word, wordamount);
    return word;
}

// check1的分身
void check3(string word) {
    int wordamount = 0;
    for(int i = 0; word[i] != '\0'; i++) {
        wordamount++;
    } 
    while(wordamount > 7 || wordamount < 7) {
        cout << "請重新輸入(7個大寫字母):\n";
        cin >> word;
        wordamount = 0;
        for(int i = 0; word[i] != '\0'; i++) {
            wordamount++;
        }
    }
    check2(word, wordamount);
}

// 檢查是否大寫
string check2(string word, int wordamount) {
    for(int i = 0; i < wordamount; i++) {
        if(word[i] < 'A' || word[i] > 'Z') {
            cout << "請重新輸入(7個大寫字母):\n";
            cin >> word;
            check3(word);
        }
    }
    return word;
}
