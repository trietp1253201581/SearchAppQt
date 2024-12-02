#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
#include "InterpolationSearcher.h"
#include "TimeCounter.h"
using namespace std;

string InterpolationSearcher::getAlgorithm() {
    return "Binary Search";
}

int InterpolationSearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    if(!isSorted) {
        buildSortedIndexArr();
    }
    newTimeCounter.endBuild();

    newTimeCounter.startSearch();
    int left = 0, right = (int) sortedIndexArr.size() - 1;
    while (left <= right) {
        if (left == right) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            if (sortedIndexArr[left].first == value) {
                return sortedIndexArr[left].second;
            }
            else {
                return -1;
            }
        }
        int rightValue = sortedIndexArr[right].first;
        int leftValue = sortedIndexArr[left].first;
        if ((value < leftValue) || (value > rightValue)) {
            break;
        }
        int pos = left + floor(((value - leftValue) * 1.0) / (rightValue - leftValue) * (right - left));

        if (sortedIndexArr[pos].first == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return sortedIndexArr[pos].second;
        } else if (sortedIndexArr[pos].first < value) {
            left = pos + 1;
        } else {
            right = pos - 1;
        }
    }
    newTimeCounter.endSearch();
    timeCounters.push_back(newTimeCounter);
    return -1;
}

InterpolationSearcher::InterpolationSearcher(): NeedSortedSearcher() {
}

InterpolationSearcher::InterpolationSearcher(vector<int> arr): NeedSortedSearcher(arr) {
}
