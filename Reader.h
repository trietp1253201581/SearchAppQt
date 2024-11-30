#ifndef READER_H
#define READER_H

#include <bits/stdc++.h>
using namespace std;

class Reader {
protected:
    vector<int> inputArr;
    virtual vector<string> split(const string &str, char delimeter);
    virtual string clean(const string &str);
public:
    virtual bool read(string data);
    virtual vector<int> getInputArr();
};

#endif // READER_H
