#ifndef JUMPSEARCHER_H
#define JUMPSEARCHER_H

#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"

class JumpSearcher: public NeedSortedSearcher {
public:
    string getAlgorithm() override;
    int search(int value) override;
    JumpSearcher();
    JumpSearcher(vector<int> arr);
};

#endif // JUMPSEARCHER_H
