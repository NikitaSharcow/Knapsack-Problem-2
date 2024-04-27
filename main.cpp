#include "Solver.h"

/*
 Идею реализации брал отсюда:
 https://www.geeksforgeeks.org/0-1-knapsack-using-branch-and-bound/?ref=lbp
 */

int main(){
    ifstream f_in;
    f_in.open("/Users/test/Desktop/2 курс/C++/Задачи второй семестр/4. Knapsack problem 2/data/ks_4_0");
    Solver S(f_in);
    return 0;
}
