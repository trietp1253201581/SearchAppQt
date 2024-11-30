#include <bits/stdc++.h>
#include "Reader.h"
using namespace std;

vector<string> Reader::split(const string &str, char delimeter) {
    vector<string> tokens;
    string token;
    istringstream tokenStream(str);
    while (getline(tokenStream, token, delimeter)) {
        tokens.push_back(token);
    }
    return tokens;
}

string Reader::clean(const string &str) {
    istringstream iss(str);
    string token;
    string result;

    while (iss >> token) {
        if (!result.empty()) {
            result += " ";
        }
        result += token;
    }
    size_t firstChar = result.find_first_not_of(' ');
    size_t lastChar = result.find_last_not_of(' ');
    return result.substr(firstChar, (lastChar - firstChar + 1));
}

bool Reader::read(string data) {
    inputArr.clear();
    int num;
    data = clean(data);
    vector<string> splited = split(data, ' ');
    for (string str: splited) {
        try {
            num = stoi(str);
            inputArr.push_back(num);
        } catch (const invalid_argument &e) {
            return false;
        } catch (const out_of_range &e) {
            return false;
        }
    }
    return true;
}

vector<int> Reader::getInputArr() {
    return inputArr;
}

