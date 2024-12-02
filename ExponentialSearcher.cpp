#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
#include "ExponentialSearcher.h"
#include "TimeCounter.h"
using namespace std;

string ExponentialSearcher::getAlgorithm() {
    return "Exponential Search";
}

int ExponentialSearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    if(!isSorted) {
        buildSortedIndexArr();
    }
    newTimeCounter.endBuild();

    newTimeCounter.startSearch();
    if (sortedIndexArr[0].first == value) {
        newTimeCounter.endSearch();
        timeCounters.push_back(newTimeCounter);
        return sortedIndexArr[0].second;
    }
    int size = (int) sortedIndexArr.size();
    int pos = 1;
    while ((pos < size) && (sortedIndexArr[pos].first <= value)) {
        pos *= 2;
    }
    int left = pos / 2, right = min(pos, size - 1);
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (sortedIndexArr[mid].first == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return sortedIndexArr[mid].second;
        } else if (sortedIndexArr[mid].first < value) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    newTimeCounter.endSearch();
    timeCounters.push_back(newTimeCounter);
    return -1;
}

ExponentialSearcher::ExponentialSearcher(): NeedSortedSearcher() {
}

ExponentialSearcher::ExponentialSearcher(vector<int> arr): NeedSortedSearcher(arr) {
}
