#include <bits/stdc++.h>
#include "Searcher.h"
#include "HashingSearcher.h"
#include "TimeCounter.h"

string HashingSearcher::getAlgorithm() {
    return "Hashing Searcher";
}

int HashingSearcher::hashFunction(int value) {
    return value % hashTableSize;
}

void HashingSearcher::buildHashTable() {
    int arr_size = (int) arr.size();
    if (arr_size < 5000) hashTableSize = 997;
    else if (arr_size < 4e5) hashTableSize = 99991;
    else if (arr_size < 3e7) hashTableSize = 1e7 + 19;
    else if (arr_size < 2e8) hashTableSize = 1e8 + 7;
    else if (arr_size < 2e9) hashTableSize = 1e9 + 7;
    else hashTableSize = 1e9 + 7;
    hashTable.resize(hashTableSize);
    for (int i = 0; i < arr_size; i++) {
        int key = hashFunction(arr[i]);
        hashTable[key].push_back({arr[i], i});
    }
    isBuilt = true;
}

int HashingSearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    if (!isBuilt) {
        buildHashTable();
    }
    newTimeCounter.endBuild();

    newTimeCounter.startSearch();
    int key = hashFunction(value);
    int size = (int) hashTable[key].size();
    for (int i = 0; i < size; i++) {
        if (hashTable[key][i].first == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return hashTable[key][i].second;
        }
    }
    newTimeCounter.endSearch();
    timeCounters.push_back(newTimeCounter);
    return -1;
}

HashingSearcher::HashingSearcher(): Searcher() {
    this->isBuilt = false;
}

HashingSearcher::HashingSearcher(vector<int> arr): Searcher(arr) {
    this->isBuilt = false;
}
