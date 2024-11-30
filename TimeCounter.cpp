#include <bits/stdc++.h>
#include "TimeCounter.h"
using namespace std;
using namespace std::chrono;

void TimeCounter::startSearch() {
    TimeCounter::searchCounter.first = high_resolution_clock::now();
}

void TimeCounter::endSearch() {
    TimeCounter::searchCounter.second = high_resolution_clock::now();
}

void TimeCounter::startBuild() {
    TimeCounter::buildCounter.first = high_resolution_clock::now();
}

void TimeCounter::endBuild() {
    TimeCounter::buildCounter.second = high_resolution_clock::now();
}

double TimeCounter::getSearchTime() {
    system_clock::time_point startTime = TimeCounter::searchCounter.first;
    system_clock::time_point endTime = TimeCounter::searchCounter.second;
    long long duration = duration_cast<microseconds>(endTime - startTime).count();
    return duration * 1.0 / 1000;
}

double TimeCounter::getBuildTime() {
    system_clock::time_point startTime = TimeCounter::buildCounter.first;
    system_clock::time_point endTime = TimeCounter::buildCounter.second;
    long long duration = duration_cast<microseconds>(endTime - startTime).count();
    return duration * 1.0 / 1000;
}

TimeCounter::TimeCounter() {
}
