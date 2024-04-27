#include "Data.h"

class Solver: public Data{
    struct Node{
        int level, profit, bound, weight;
    };
public:
    int bound(Node u);
    Solver(ifstream &f_in);
};
