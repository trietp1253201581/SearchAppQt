#ifndef TIMECOUNTER_H
#define TIMECOUNTER_H

#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

class TimeCounter {
protected:
    pair<system_clock::time_point, system_clock::time_point> searchCounter;
    pair<system_clock::time_point, system_clock::time_point> buildCounter;
public:
    void startSearch();
    void endSearch();
    void startBuild();
    void endBuild();
    double getSearchTime();
    double getBuildTime();
    TimeCounter();
};

#endif // TIMECOUNTER_H
