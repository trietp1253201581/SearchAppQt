#include <bits/stdc++.h>
#include "Searcher.h"
#include "NeedSortedSearcher.h"
using namespace std;

void NeedSortedSearcher::buildSortedIndexArr() {
    int size = (int) arr.size();
    for (int i = 0; i < size; i++) {
        sortedIndexArr.push_back({arr[i], i});
    }
    if (isAscending(sortedIndexArr)) {
        isSorted = true;
        return;
    }
    sort(sortedIndexArr.begin(), sortedIndexArr.end());
    isSorted = true;
}

void NeedSortedSearcher::clear() {
    sortedIndexArr.clear();
    Searcher::clear();
}

NeedSortedSearcher::NeedSortedSearcher(): Searcher() {
    this->isSorted = false;
}

NeedSortedSearcher::NeedSortedSearcher(vector<int> arr): Searcher(arr) {
    this->isSorted = false;
}
