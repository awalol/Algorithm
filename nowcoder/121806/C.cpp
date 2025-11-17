//
// Created by awalol on 2025/11/9.
//
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

bool contain(vector<string> groups, string target) {
    for (const string & group : groups) {
        if (group == target) {
            return true;
        }
    }
    return false;
}

// c cpp java and more
void style1() {
    int n;
    cin >> n;
    string line;
    for (int i = 0;i <= n;i++){
        getline(cin, line);
        int c = line.find("//");
        if (c != -1) {
            string content = line.substr(c + 2);
            cout << "#" << i << ": " << quoted(content) << endl;
        }
        int d = 0;
        while ((d = line.find("/*",d)) != -1) {
            int end = line.find("*/",d + 2);
            if (end != -1) {
                string content = line.substr(d + 2,end - d - 2);
                cout << "#" << i << ": " << quoted(content) << endl;
                d = end + 2;
            }else {
                break;
            }
        }
    }
}

//php
void style2() {
    int n;
    cin >> n;
    string line;
    for (int i = 0;i <= n;i++) {
        getline(cin, line);
        int f = line.find("//");
        if (f != -1) {
            string content = line.substr(f + 2);
            cout << "#" << i << ": " << quoted(content) << endl;
        }
        int c = line.find('#');
        if (c != -1) {
            string content = line.substr(c + 1);
            cout << "#" << i << ": " << quoted(content) << endl;
        }
        int d = 0;
        while ((d = line.find("/*",d)) != -1) {
            int end = line.find("*/",d + 2);
            if (end != -1) {
                string content = line.substr(d + 2,end - d - 2);
                cout << "#" << i << ": " << quoted(content) << endl;
                d = end + 2;
            }else {
                break;
            }
        }
    }
}

//html
void style3() {
    int n;
    cin >> n;
    string line;
    for (int i = 0;i <= n;i++) {
        getline(cin, line);
        int d = line.find("<!--");
        if (d != -1) {
            int end = line.rfind("-->");
            string content = line.substr(d + 4,end - d - 4);
            cout << "#" << i << ": " << quoted(content) << endl;
        }
    }
}

//py
void style4() {
    int n;
    cin >> n;
    string line;
    bool inComment = false;
    for (int i = 0;i <= n;i++){
        getline(cin, line);
        int d = line.find("\"\"\"");
        if (d != -1) {
            if (inComment) {
                string content = line.substr(0,d);
                cout << "#" << i << ": " << quoted(content) << endl;
            }else {
                string content = line.substr(d + 3);
                cout << "#" << i << ": " << quoted(content) << endl;
            }
            inComment = !inComment;
            continue;
        }
        if (inComment) {
            cout << "#" << i << ": " << quoted(line) << endl;
            continue;
        }

        int c = line.find('#');
        if (c != -1) {
            string content = line.substr(c + 1);
            cout << "#" << i << ": " << quoted(content) << endl;
        }
    }
}

int main() {
    string fileName;
    cin >> fileName;
    vector<string> a = {"c", "cpp", "cxx", "cc", "js", "go", "java"};
    vector<string> b = {"php"};
    vector<string> c = {"html"};
    vector<string> d = {"py"};
    string lang = fileName.substr(fileName.rfind('.') + 1);

    if (contain(a, lang)) {
        style1();
    }
    if (contain(b,lang)) {
        style2();
    }
    if (contain(c,lang)) {
        style3();
    }
    if (contain(d,lang)) {
        style4();
    }

    return 0;
}
