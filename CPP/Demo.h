//
// Created by Admin on 10-10-2025.
//

#ifndef NEETCODE_DEMO_H
#define NEETCODE_DEMO_H

#include <iostream> // For std::cout
#include <vector>   // For std::vector

/**
 * @brief Prints a 1D vector (like an array) of any type.
 * @example pVector(nums); // Output: [1, 2, 3]
 */
template<typename T>
void pVector(const std::vector<T>& v) {
    std::cout << "[";
    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i];
        // Add a comma and space unless it's the last element
        if (i < v.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

/**
 * @brief Prints a 2D vector (matrix) of any type with formatting.
 * @example pMatrix(dp_table);
 * // Output:
 * // [
 * //   [1, 2]
 * //   [3, 4]
 * // ]
 */
template<typename T>
void pMatrix(const std::vector<std::vector<T>>& matrix) {
    // Handle the case of an empty matrix
    if (matrix.empty()) {
        std::cout << "(Empty Matrix)\n";
        return;
    }

    // Loop through each 'row' in the outer vector
    for (const auto& row : matrix) {
        // Loop through each element in the row
        for (int i = 0; i < row.size(); ++i) {
            // Print the element followed by a tab
            std::cout << row[i] << "\t";
        }
        // After the row is done, print a newline
        std::cout << "\n";
    }
}
#endif //NEETCODE_DEMO_H