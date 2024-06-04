#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

string getInput() {
    string s;
    getline(cin, s);
    return s;
}

int getInputInt() {
    return stoi(getInput());
}

vector<int> split(string s) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = s.find(' ')) != string::npos) {
        result.push_back(stoi(s.substr(0, pos)));
        s.erase(0, pos + 1);
    }
    result.push_back(stoi(s));
    return result;
}

vector<vector<int>> transpose(vector<vector<int>>& mat) {
    int n = mat.size();
    vector<vector<int>> t(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = mat[i][j];
        }
    }
    return t;
}

void fun() {
    int n, m;
    vector<int> array = split(getInput());
    n = array[0];
    m = array[1];
    vector<vector<int>> mat1(n);
    vector<vector<int>> mat2(n);
    for (int i = 0; i < n; i++) {
        mat1[i] = split(getInput());
    }
    for (int i = 0; i < n; i++) {
        mat2[i] = split(getInput());
    }

    if (n == m) {
        set<set<int>> s_of_set;
        for (auto v : mat1) {
            set<int> cur(v.begin(), v.end());
            s_of_set.insert(cur);
        }
        for (auto v : mat2) {
            set<int> cur(v.begin(), v.end());
            if (s_of_set.find(cur) == s_of_set.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        mat1 = transpose(mat1);
        mat2 = transpose(mat2);
        s_of_set.clear();
        for (auto v : mat1) {
            set<int> cur(v.begin(), v.end());
            s_of_set.insert(cur);
        }
        for (auto v : mat2) {
            set<int> cur(v.begin(), v.end());
            if (s_of_set.find(cur) == s_of_set.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    } else {
        set<set<int>> s_of_set;
        for (auto v : mat1) {
            set<int> cur(v.begin(), v.end());
            s_of_set.insert(cur);
        }
        for (auto v : mat2) {
            set<int> cur(v.begin(), v.end());
            if (s_of_set.find(cur) == s_of_set.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        s_of_set.clear();
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(mat1[i][j]);
            }
            s_of_set.insert(cur);
        }
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(mat2[i][j]);
            }
            if (s_of_set.find(cur) == s_of_set.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
}

int main() {
    int t = getInputInt();
    for (int i = 0; i < t; i++) {
        fun();
    }
    return 0;
}