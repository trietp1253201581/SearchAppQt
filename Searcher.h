#ifndef SEARCHER_H
#define SEARCHER_H

#include <bits/stdc++.h>
#include "TimeCounter.h"
using namespace std;

class Searcher {
protected:
    vector<int> arr;
    vector<TimeCounter> timeCounters;

public:
    vector<int> getArr();
    virtual void setArr(vector<int> arr);
    double getTotalSearchTime();
    double getTotalBuildTime();
    void addTimeCounter(TimeCounter newTimeCounter);
    TimeCounter getLastTimeCounter();
    virtual void clear();
    virtual string getAlgorithm() = 0;
    virtual int search(int value) = 0;
    Searcher();
    Searcher(vector<int> arr);
};

#endif // SEARCHER_H
