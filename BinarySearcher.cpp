#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
#include "BinarySearcher.h"
#include "TimeCounter.h"
using namespace std;

string BinarySearcher::getAlgorithm() {
    return "Binary Search";
}

int BinarySearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    if(!isSorted) {
        buildSortedIndexArr();
    }
    newTimeCounter.endBuild();
    newTimeCounter.startSearch();
    int left = 0, right = (int) sortedIndexArr.size() - 1;
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

BinarySearcher::BinarySearcher(): NeedSortedSearcher() {
}

BinarySearcher::BinarySearcher(vector<int> arr): NeedSortedSearcher(arr) {
}
