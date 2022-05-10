//
// Created by water on 2022/5/10.
//

#ifndef LEETCODE_HEADERS_H
#define LEETCODE_HEADERS_H

#include <vector>
#include <deque>
#include <queue>
#include <iostream>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class headers {

};


#endif //LEETCODE_HEADERS_H
