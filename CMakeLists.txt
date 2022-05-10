cmake_minimum_required(VERSION 3.22)
project(leetcode)

set(CMAKE_CXX_STANDARD 14)

add_executable(leetcode main.cpp editor/cn/include/headers.cpp editor/cn/include/headers.h)
add_executable(94-binary-tree-inorder-traversal editor/cn/94-binary-tree-inorder-traversal.cpp)
add_executable(96-unique-binary-search-trees editor/cn/96-unique-binary-search-trees.cpp)
add_executable(102-binary-tree-level-order-traversal editor/cn/102-binary-tree-level-order-traversal.cpp)