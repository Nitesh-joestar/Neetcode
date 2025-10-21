//
// Created by Admin on 20-10-2025.
//

#include "LinkedList.h"
#include <iostream>
#include <vector>
int main() {
    std::vector<int> leetcodeInput = {1, 2, 3, 4, 5};
    LinkedList myList(leetcodeInput);
    std::cout << "Original List: ";
    myList.visualize();

    return 0;
}