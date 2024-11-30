#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
#include "TernarySearcher.h"
#include "TimeCounter.h"
using namespace std;

string TernarySearcher::getAlgorithm() {
    return "Ternary Searcher";
}

int TernarySearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    if(!isSorted) {
        buildSortedIndexArr();
    }
    newTimeCounter.endBuild();
    newTimeCounter.startSearch();
    int left = 0, right = (int) sortedIndexArr.size() - 1;
    while (left <= right) {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if (sortedIndexArr[mid1].first == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return sortedIndexArr[mid1].second;
        }
        if (sortedIndexArr[mid2].first == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return sortedIndexArr[mid2].second;
        }
        if (value < sortedIndexArr[mid1].first) {
            right = mid1 - 1;
        } else if (value > sortedIndexArr[mid2].first) {
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    newTimeCounter.endSearch();
    timeCounters.push_back(newTimeCounter);
    return -1;
}

TernarySearcher::TernarySearcher(): NeedSortedSearcher() {
}

TernarySearcher::TernarySearcher(vector<int> arr): NeedSortedSearcher(arr) {
}
