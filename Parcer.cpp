#include "Parcer.h"

Parcer:: Parcer (ifstream &f_in){
    string str;
    f_in >> str;
    N = stoi(str);
    f_in >> str;
    backpack_weight = stoi(str);
    for(int i=0;i<N;i++){
        f_in >> str;
        value.push_back(stoi(str));
        f_in >> str;
        weight.push_back(stoi(str));
    }
};
