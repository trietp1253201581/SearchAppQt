#ifndef NEEDSORTEDSEARCHER_H
#define NEEDSORTEDSEARCHER_H

#include <bits/stdc++.h>
#include "Searcher.h"
using namespace std;

class NeedSortedSearcher: public Searcher {
protected:
    bool isSorted;
    vector<pair<int, int>> sortedIndexArr;
public:
    template<typename T> bool isAscending(const vector<T> &arr) {
        //Kiểm tra tăng
        for (int i = 0; i < (int) arr.size() - 1; i++) {
            if (arr[i] > arr[i+1]) {
                return false;
            }
        }
        return true;
    }
    void buildSortedIndexArr();
    void clear() override;
    NeedSortedSearcher();
    NeedSortedSearcher(vector<int> arr);
};

#endif // NEEDSORTEDSEARCHER_H
