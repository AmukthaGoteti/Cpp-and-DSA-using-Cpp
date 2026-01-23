/*
    Problem Statement:
        You are visiting a farm that has a single row of fruit trees arranged from left to right. 
        The trees are represented by an integer array fruits 
        where fruits[i] is the type of fruit the ith tree produces.
        You want to collect as much fruit as possible. 
        However, the owner has some strict rules that you must follow:
            You only have two baskets, and each basket can only hold a single type of fruit. 
            There is no limit on the amount of fruit each basket can hold.
            Starting from any tree of your choice, 
            you must pick exactly one fruit from every tree (including the start tree) while moving to the right. 
            The picked fruits must fit in one of your baskets.
            Once you reach a tree with fruit that cannot fit in your baskets, you must stop.
        Given the integer array fruits, return the maximum number of fruits you can pick.

    Examples:
        Input: fruits = [1,2,1]
        Output: 3
        Explanation: We can pick from all 3 trees.

        Input: fruits = [0,1,2,2]
        Output: 3
        Explanation: We can pick from trees [1,2,2].
        If we had started at the first tree, we would only pick from trees [0,1].

        Input: fruits = [1,2,3,2,2]
        Output: 4
        Explanation: We can pick from trees [2,3,2,2].
        If we had started at the first tree, we would only pick from trees [1,2].
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of trees: ";
    cin >> n;
    vector<int> fruits(n);
    cout << "Enter the types of fruits produced by each tree: ";
    for (int i = 0; i < n; i++) {
        cin >> fruits[i];
    }
    unordered_map<int, int> basket;
    int left = 0, maxFruits = 0;
    for (int right = 0; right < n; right++) {
        basket[fruits[right]]++;
        while (basket.size() > 2) {
            basket[fruits[left]]--;
            if (basket[fruits[left]] == 0) {
                basket.erase(fruits[left]);
            }
            left++;
        }
        maxFruits = max(maxFruits, right - left + 1);
    }
    cout << "Output: " << maxFruits << endl;
    return 0;
}