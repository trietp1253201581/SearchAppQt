#ifndef SEARCHCONTEXT_H
#define SEARCHCONTEXT_H

#include "Searcher.h"

class SearchContext {
private:
    Searcher *searcher;
public:
    void setSearcher(Searcher *searcher);
    Searcher* getSearcher();
    string executeSearch(int value);
    SearchContext();
    SearchContext(Searcher *searcher);
};

#endif // SEARCHCONTEXT_H
