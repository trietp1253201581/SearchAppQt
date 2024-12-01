#ifndef FILEIO_H
#define FILEIO_H

#include <bits/stdc++.h>
using namespace std;

class FileIO {
public:
    static string read(string fileDir);
    static bool write(string data, string fileDir);
};

#endif // FILEIO_H
