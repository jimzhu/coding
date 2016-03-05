#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void count_sort(vector<int>& array) {
    vector<int>::iterator max_idx = max_element(array.begin(), array.end());
    vector<int> seq (*max_idx + 1, 0);
    for (int i = 0; i < array.size(); i++) {
        seq[array[i]]++;
    }
    int k = 0;
    for (int j = 0; j < seq.size(); j++) {
        while (seq[j] > 0) {
            array[k++] = j;
            seq[j]--;
        }
    }
}

void count_sort_stable(vector<int>& array) {
    vector<int> array_copy(array);
    vector<int>::iterator max_idx = max_element(array.begin(), array.end());
    vector<int> seq (*max_idx + 1, 0);
    for (int i = 0; i < array.size(); i++) {
        seq[array[i]]++;
    }
    // 小于等于array[j]的数的有多少个, 存入数组seq
    for (int j = 1; j < seq.size(); j++) {
        seq[j] += seq[j - 1];
    }
    //逆序输出确保稳定-相同元素相对顺序不变
    for (int k = array_copy.size() - 1; k >=0 ; k--) {
        array[seq[array_copy[k]] - 1] = array_copy[k];
        seq[array_copy[k]]--;
    }
}

int main() {
    vector<int> a = {9, 10, 1, 12, 1, 3, 5, 7};
    count_sort_stable(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << ", ";
    }
    cout << "\n";
    return 0;
}


