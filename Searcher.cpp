#include <bits/stdc++.h>
#include "TimeCounter.h"
#include "Searcher.h"
using namespace std;

vector<int> Searcher::getArr() {
    return arr;
}

void Searcher::setArr(vector<int> arr) {
    this->arr = arr;
}

double Searcher::getTotalSearchTime() {
    double totalSearchTime = 0;
    for (TimeCounter timeCounter: timeCounters) {
        totalSearchTime += timeCounter.getSearchTime();
    }
    return totalSearchTime;
}

double Searcher::getTotalBuildTime() {
    double totalBuildTime = 0;
    for (TimeCounter timeCounter: timeCounters) {
        totalBuildTime += timeCounter.getBuildTime();
    }
    return totalBuildTime;
}

void Searcher::addTimeCounter(TimeCounter newTimeCounter) {
    timeCounters.push_back(newTimeCounter);
}

TimeCounter Searcher::getLastTimeCounter() {
    return timeCounters.back();
}

void Searcher::clear() {
    arr.clear();
    timeCounters.clear();
}

Searcher::Searcher() {
}

Searcher::Searcher(vector<int> arr) {
    this->arr = arr;
}
