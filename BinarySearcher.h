#ifndef BINARYSEARCHER_H
#define BINARYSEARCHER_H

#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"

class BinarySearcher: public NeedSortedSearcher {
public:
    string getAlgorithm() override;
    int search(int value) override;
    BinarySearcher();
    BinarySearcher(vector<int> arr);
};

#endif // BINARYSEARCHER_H
