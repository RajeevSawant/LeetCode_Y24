/*
 * Number_of_islands.cpp
 *
 *  Created on: Oct 27, 2025
 *      Author: Rajeev Sawant
 */




/*
 *
 *
 * 200. Number of Islands
Solved
Medium
Topics
conpanies icon
Companies
Given an m x n 2D binary grid grid which represents a map of '1's (land) and '0's (water), return the number of islands.

An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically. You may assume all four edges of the grid are all surrounded by water.



Example 1:

Input: grid = [
  ["1","1","1","1","0"],
  ["1","1","0","1","0"],
  ["1","1","0","0","0"],
  ["0","0","0","0","0"]
]
Output: 1
Example 2:

Input: grid = [
  ["1","1","0","0","0"],
  ["1","1","0","0","0"],
  ["0","0","1","0","0"],
  ["0","0","0","1","1"]
]
Output: 3
 */


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int row = grid.size(), cols = row ? grid[0].size() : 0, islands = 0;

        for (int i = 0; i < row; i++){
            for (int j = 0; j < cols; j++){
                if (grid[i][j] == '1'){
                    islands++;
                    eraseislands(grid, i, j);
                }
            }
        }

        return islands;

    }

    void eraseislands(vector<vector<char>>& grid, int i, int j){
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == '0') return;


        grid[i][j] = '0';
        eraseislands(grid, i - 1, j);
        eraseislands(grid, i + 1, j);
        eraseislands(grid, i, j - 1);
        eraseislands(grid, i, j + 1);
    }
};
