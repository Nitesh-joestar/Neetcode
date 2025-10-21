//
// Created by Admin on 10-10-2025.
//

#include "Demo.h"
#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_map>

#include "SinglyLinkedList/LinkedList.h"
using namespace std;

int main() {
    const std::vector<std::vector<int>> grid{
    {1,2,3},
    {4,5,6}};
    int m{static_cast<int>(grid.size()-1)};
    int n{static_cast<int>(grid[0].size()-1)};
    std::vector<std::vector<int>> memo(grid.size(),std::vector<int>(grid[0].size()));
    memo[m][n]=grid[m][n];
    for (int i{m};i>-1;--i) {
        for (int j{n};j>-1;--j) {
            if (i<m&&j<n) {
                memo[i][j]=grid[i][j]+std::min(memo[i+1][j],memo[i][j+1]);
            }
            else if (i<m) {
                memo[i][j]=grid[i][j]+memo[i+1][j];//works
            }
            else if (i==m && j<n) {
                memo[i][j]=grid[i][j]+memo[i][j+1];
                cout<<grid[i][j]<<'\n';
            }
        }
    }
    pMatrix(grid);
    cout<<"yA"<<'\n';
    pMatrix(memo);
    //cout<<grid[m][n];

}