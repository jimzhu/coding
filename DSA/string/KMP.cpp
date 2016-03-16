#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

void prefix_table(string& pat, vector<int>& table) {
    table[0] = 0;
    int i = 1, index = 0;
    int len = table.size();
    while (i < len) {
        if (pat[i] == pat[index]) {
            table[i] = index + 1;
            index++;
            i++;
        }
        else if (index > 0) {
            index = table[index - 1];
        }
        else {
            table[i] = 0;
            i++;
        }
    }
}


void KMP(string& pat, string& txt) {
    int pat_len = pat.size();
    int txt_len = txt.size();
    vector<int> table(pat_len);
    prefix_table(pat, table);

    int i = 0, j = 0;
    while (i < txt_len) {
        if (pat[j] == txt[i]) {
            i++;
            j++;
            if (j == pat_len) {
                cout << "Found pattern at index " << i - j << endl;
                j = table[j - 1];
            }
        }
        else if (j > 0) {
            j = table[j - 1];
        }
        else {
            i++;
        }
    }
}

int main() {
    string txt = "AABAACAADAABAAABAA";
    string pat = "AABA";
    // Pattern found at index 0
    // Pattern found at index 9
    // Pattern found at index 13
    KMP(pat, txt);
    return 0;
}


