#include <bits/stdc++.h>
#include "NeedSortedSearcher.h"
#include "FibonacciSearcher.h"
#include "TimeCounter.h"
using namespace std;

string FibonacciSearcher::getAlgorithm() {
    return "Fibonacci Search";
}

int FibonacciSearcher::search(int value) {
    TimeCounter newTimeCounter;
    newTimeCounter.startBuild();
    if(!isSorted) {
        buildSortedIndexArr();
    }
    newTimeCounter.endBuild();

    newTimeCounter.startSearch();
    int size = (int) sortedIndexArr.size();
    //Fibo
    int fib2 = 0; //m-2 th
    int fib1 = 1; //m-1 th
    int fib0 = fib1 + fib2; //m
    while (fib0 < size) {
        fib2 = fib1;
        fib1 = fib0;
        fib0 = fib1 + fib2;
    }
    for (int i = size; i <= fib0; i++) {
        sortedIndexArr.push_back({INT_MAX, i});
    }
    int idx = fib1 - 1; fib0 = fib1; fib1 = fib2; fib2 = fib0 - fib1;
    while (true) {
        if (sortedIndexArr[idx].first == value) {
            newTimeCounter.endSearch();
            timeCounters.push_back(newTimeCounter);
            return sortedIndexArr[idx].second;
        } else if (sortedIndexArr[idx].first < value) {
            if (fib1 == 1) break;
            idx += fib2;
            fib0 = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib0 - fib1;
        } else {
            if (fib2 == 0) break;
            idx -= fib2;
            fib0 = fib1;
            fib1 = fib2;
            fib2 = fib0 - fib1;
        }
    }
    if (sortedIndexArr[idx].first == value) {
        newTimeCounter.endSearch();
        timeCounters.push_back(newTimeCounter);
        return sortedIndexArr[idx].second;
    }
    newTimeCounter.endSearch();
    timeCounters.push_back(newTimeCounter);
    return -1;
}

FibonacciSearcher::FibonacciSearcher(): NeedSortedSearcher() {
}

FibonacciSearcher::FibonacciSearcher(vector<int> arr): NeedSortedSearcher(arr) {
}
