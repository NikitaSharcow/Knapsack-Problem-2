#include "Parcer.h"

class object{
public:
    int value, weight, num_object;
    object(int v, int w, int n);
    bool operator< (const object& a) const;
    bool operator> (const object& a) const;
};

class Data: public Parcer{
protected:
    vector<object> obj;
    vector<int> result;
    int maxProfit;
public:
    Data(ifstream &f_in);
};
