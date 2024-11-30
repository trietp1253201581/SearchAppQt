#include <bits/stdc++.h>
#include "Searcher.h"
#include "SearchContext.h"
using namespace std;

void SearchContext::setSearcher(Searcher *searcher) {
    this->searcher = searcher;
}

string SearchContext::executeSearch(int value) {
    string resultLog = "...";
    resultLog += "Search " + to_string(value) + ": ";
    int pos = searcher->search(value);
    if (pos != -1) {
        resultLog += "find at " + to_string(pos);
    } else {
        resultLog += "not found";
    }
    ostringstream outBuild;
    double buildTime = searcher->getLastTimeCounter().getBuildTime();
    outBuild << fixed << setprecision(3) << buildTime;
    resultLog += ", build time = " + outBuild.str() + " ms";
    ostringstream outSearch;
    double searchTime = searcher->getLastTimeCounter().getSearchTime();
    outSearch << fixed << setprecision(3) << searchTime;
    resultLog += ", search time = " + outSearch.str() + " ms";
    resultLog += ".\n";
    return resultLog;
}

Searcher* SearchContext::getSearcher() {
    return searcher;
}

SearchContext::SearchContext() {
}

SearchContext::SearchContext(Searcher *searcher) {
    this->searcher = searcher;
}
