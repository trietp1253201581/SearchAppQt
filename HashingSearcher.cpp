#include <bits/stdc++.h>
#include "Searcher.h"
#include "HashingSearcher.h"
#include "TimeCounter.h"

const vector<int> HashingSearcher::primes = { 2, 3, 7, 17, 31, 61, 127, 257, 509,
                                             1021, 2053, 4099, 8191, 16381, 32771,
                                             65537, 131071, 262147, 524287, 1048583,
                                             2097169, 4194301, 8388617, 16777213,
                                             33554467, 67108859, 134217757, 268435459,
                                             536870923 };

string HashingSearcher::getAlgorithm() {
    return "Hashing Searcher";
}

int HashingSearcher::hashFunction(int value) {
    return value % hashTableSize;
}

void HashingSearcher::buildHashTable() {
    int arr_size = (int) arr.size();
    auto it = lower_bound(primes.begin(), primes.end(), arr_size);
    if (it == primes.end()) {
        hashTableSize = primes.back();
    } else {
        hashTableSize = *it;
    }
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
