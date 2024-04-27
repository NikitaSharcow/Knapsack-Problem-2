#include <iostream>
#include <string.h>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

class Parcer{
protected:
    int N, backpack_weight;
    vector <int> value, weight;
public:
    Parcer (ifstream &f_in);
    inline int get_N(){return N;};
};
