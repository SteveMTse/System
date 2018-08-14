#ifndef _STANDARD_HPP
#define _STANDARD_HPP

#include <iostream>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <string>
#include <exception>

using namespace std;

bool isFileExists(const string& filename) {
    return ifstream(filename).is_open();
}

#endif
