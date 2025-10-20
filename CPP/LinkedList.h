//
// Created by Admin on 20-10-2025.
//

#ifndef NEETCODE_LINKEDLIST_H
#define NEETCODE_LINKEDLIST_H

#include <iostream>
#include <vector>

// --- 1. LeetCode's Prerequisite Struct ---
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// --- 2. Your Helper Class ---
class LinkedList {
public:
    ListNode* head;

    // Constructor: Builds the list from a vector
    LinkedList(const std::vector<int>& nums) : head(nullptr) {
        if (nums.empty()) {
            return;
        }
        head = new ListNode(nums[0]);
        ListNode* current = head;
        for (size_t i = 1; i < nums.size(); ++i) {
            current->next = new ListNode(nums[i]);
            current = current->next;
        }
    }

    // Destructor: Cleans up memory
    ~LinkedList() {
        ListNode* current = head;
        while (current != nullptr) {
            ListNode* nodeToDelete = current;
            current = current->next;
            delete nodeToDelete;
        }
        head = nullptr;
    }

    // visualize: Prints the list
    void visualize() {
        ListNode* current = head;
        while (current != nullptr) {
            std::cout << current->val << " -> ";
            current = current->next;
        }
        std::cout << "NULL" << std::endl;
    }

    // getHead: Passes the list to your LeetCode solution
    ListNode* getHead() {
        return head;
    }
};

// --- 3. Helper to Print Solution Results ---
void printSolutionResult(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        std::cout << current->val << " -> ";
        current = current->next;
    }
    std::cout << "NULL" << std::endl;
}

#endif //NEETCODE_LINKEDLIST_H