#include "Data.h"

object:: object(int v, int w, int n){
    value = v; weight = w; num_object = n;
}

bool object:: operator< (const object& a) const{
    return (double)value/weight < (double)a.value/a.weight;
}

bool object:: operator> (const object& a) const{
    return (double)value/weight > (double)a.value/a.weight;
}

Data:: Data(ifstream &f_in): Parcer(f_in){
    int i;
    for (i=0;i<N;i++){
        obj.push_back(object(value[i],weight[i],i));
        result.push_back(0);
    }
    maxProfit = 0;
};

