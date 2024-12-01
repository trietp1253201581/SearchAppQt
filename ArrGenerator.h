#ifndef ARRGENERATOR_H
#define ARRGENERATOR_H

#include <bits/stdc++.h>
using namespace std;

class ArrGenerator {
protected:
    vector<int> arr;
public:
    virtual void generate(int size) = 0;
    virtual vector<int> getGeneratedArr();
    virtual string getGeneratedArrStr();
};

#endif // ARRGENERATOR_H
