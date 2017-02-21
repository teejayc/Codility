// you can use includes, for example:
#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

//  Solution1: rotate the array K times
//    Complexity: 
//      Time: O(n * k) or O(n^2) if n is ~= k
//  Solution2: Cut the array into two parts. First part is from the begining all the way before n - (k % n).
//              The second part is the rest of the array. Reverse each part and reverse the entire array at the end.
//    Complexity:
//      Time: O(n)

// BUG1: does not consider empty input
vector<int> solution(vector<int> &A, int K) {
    int n = A.size();
    if(!n) {
        return A;
    }
    int reversePivot = n - (K % n);
    
    reverse(A.begin(), A.begin() + reversePivot);
    reverse(A.begin() + reversePivot, A.end());
    reverse(A.begin(), A.end());
    
    return A;
}