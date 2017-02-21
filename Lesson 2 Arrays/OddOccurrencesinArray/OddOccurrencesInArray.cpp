// you can use includes, for example:
// #include <algorithm>
#include <unordered_set>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int size = A.size();
    unordered_set<int> hash;
    for (int i = 0; i < size; ++i) {
        if (hash.find(A[i]) == hash.end()) {
            hash.insert(A[i]);
        }
        else {
            hash.erase(A[i]);
        }
    }
    return *(hash.begin());    
}