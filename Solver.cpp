#include "Solver.h"

int Solver:: bound(Node u){
    if (u.weight >= backpack_weight) return 0;
    int profit_bound = u.profit;
    int j = u.level + 1;
    int totweight = u.weight;
    while ((j < N) && (totweight+obj[j].weight<=backpack_weight)){
        totweight += obj[j].weight;
        profit_bound += obj[j].value;
        j++;
    }
    if (j != N) profit_bound += (backpack_weight - totweight)*obj[j].value/obj[j].weight;
    return profit_bound;
}

Solver:: Solver(ifstream &f_in): Data(f_in){
    sort(obj.begin(), obj.end(), greater<object>());
    queue<Node> Q;
    Node u, v;
    u.level = -1;
    u.profit = u.weight = 0;
    Q.push(u);
    while (!Q.empty()){
        u = Q.front();
        Q.pop();
        if (u.level != N-1){
            v.level = u.level + 1;
            v.weight = u.weight + obj[v.level].weight;
            v.profit = u.profit + obj[v.level].value;
            if (v.weight <= backpack_weight && v.profit > maxProfit){
                maxProfit = v.profit;
            }
            v.bound = bound(v);
            if (v.bound > maxProfit){
                Q.push(v);
            }
            v.weight = u.weight;
            v.profit = u.profit;
            v.bound = bound(v);
            if (v.bound > maxProfit){
                Q.push(v);
            }
            
        }
    }
    int i, w = 0;
    for (i=0; i<N; i++) w += result[i]*weight[i];
    cout << maxProfit << endl;
}
 
