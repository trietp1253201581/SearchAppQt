#ifndef HASHINGSEARCHER_H
#define HASHINGSEARCHER_H

#include <bits/stdc++.h>
#include "Searcher.h"

class HashingSearcher: public Searcher {
protected:
    vector<vector<pair<int, int>>> hashTable;
    int hashTableSize;
    bool isBuilt;
public:
    string getAlgorithm() override;
    int search(int value) override;
    void buildHashTable();
    virtual int hashFunction(int value);
    HashingSearcher();
    HashingSearcher(vector<int> arr);
};

#endif // HASHINGSEARCHER_H
