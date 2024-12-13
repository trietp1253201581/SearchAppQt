#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
#include "JumpSearcher.h"
#include "TimeCounter.h"
using namespace std;

string JumpSearcher::getAlgorithm() {
    return "Jump Search";
}

int JumpSearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    if(!isSorted) {
        buildSortedIndexArr();
    }
    newTimeCounter.endBuild();
    newTimeCounter.startSearch();
    int step = (int) floor(sqrt((int) arr.size()));
    if (step < 1) {
        step = 1;
    }
    int prev = 0, size = (int) arr.size();
    while (sortedIndexArr[prev].first < value) {
        prev += step;
        if (prev >= size) {
            break;
        }
    }
    prev -= step;

    int lower = max(0, prev), upper = min(size, prev + step);
    for (int i = lower; i <= upper; i++) {
        if (sortedIndexArr[i].first == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return sortedIndexArr[i].second;
        }
    }
    newTimeCounter.endSearch();
    timeCounters.push_back(newTimeCounter);
    return -1;
}

JumpSearcher::JumpSearcher(): NeedSortedSearcher() {
}

JumpSearcher::JumpSearcher(vector<int> arr): NeedSortedSearcher(arr) {
}
