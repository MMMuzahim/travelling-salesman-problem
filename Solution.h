#ifndef SOLUTION_H
#define SOLUTION_H

#include "Graph.h"
#include "Path.h"
#include <iostream>
#include <limits>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
private:
    int n;                                      // количество вершин
    int** graph;                                // граф в виде двоичного массива n на n

public:
    Solution(const Graph& g);
    Path* Dijkstra(int v, Path* data);          // алгоритм Дейкстры
    Path calc(vector<int> v, int start);        // вычисление оптимального пути

};

#endif
