#include <bits/stdc++.h>
#include "Searcher.h"
#include "LinearSearcher.h"
#include "TimeCounter.h"
using namespace std;

string LinearSearcher::getAlgorithm() {
    return "Linear Search";
}

int LinearSearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    newTimeCounter.endBuild();
    newTimeCounter.startSearch();
    int size = (int) arr.size();
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return i;
        }
    }
    newTimeCounter.endSearch();
    timeCounters.push_back(newTimeCounter);
    return -1;
}

LinearSearcher::LinearSearcher(): Searcher() {
}

LinearSearcher::LinearSearcher(vector<int> arr): Searcher(arr) {
}
