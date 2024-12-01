#include <bits/stdc++.h>
#include "FileIO.h"
using namespace std;

string FileIO::read(string fileDir) {
    ifstream file(fileDir);
    string result = "";
    if (!file) {
        return result;
    }
    string line;
    while (getline(file, line)) {
        result += line + " ";
    }
    file.close();
    return result;
}

bool FileIO::write(string data, string fileDir) {
    ofstream file(fileDir);
    if (!file) {
        return false;
    }
    file << data << endl;
    file.close();
    return true;
}
