#include <bits/stdc++.h>
#include "ArrGenerator.h"
using namespace std;

vector<int> ArrGenerator::getGeneratedArr() {
    return arr;
}

string ArrGenerator::getGeneratedArrStr() {
    string result = "";
    int size = (int) arr.size();
    for (int i = 0; i < size; i++) {
        result += to_string(arr[i]) + " ";
    }
    return result;
}
