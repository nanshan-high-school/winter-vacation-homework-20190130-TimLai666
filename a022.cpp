#include <iostream>
using namespace std;
void count(string);
void checkpal(string, int);
void couttheinfo(string);

int main() {
    string thestring;
    cout << "輸入字串:\n";
    cin >> thestring;
    count(thestring);
}


void count(string sentence) {
    int countword = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        countword++;
    }
    checkpal(sentence, countword);
}


void checkpal(string sentence, int n) {
    int length = n / 2;
    int n2 = n - 1;
    string coutinfo;
    for(int i = 0; i < n; i++) {
        if(sentence[i] == sentence[n2]) {
            coutinfo = "yes";
        }else {
            coutinfo = "no";
        }
        n2--;
    }
    couttheinfo(coutinfo);
}


void couttheinfo(string info) {
    cout << '\n' << info << '\n';
}
