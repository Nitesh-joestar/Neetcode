//
// Created by Admin on 10-10-2025.
//

#include "Demo.h"
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main() {
    std::vector<int> nums{3,3,3,3,3};
    int index{};
    for (int number:nums) {
        index=std::abs(number);
        nums[index]=nums[index]*-1;
        if (nums[index]>0) {
            cout<<"oops "<<index<<'\n';
            break;
        }
    }

}
