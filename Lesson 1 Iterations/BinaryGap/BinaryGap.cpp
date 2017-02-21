// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

// BUG1: Do not consider trailing zero
int solution(int N) {
    int longestBG = 0;
    int currBG = 0;
    bool triggered = false;
    while(N) {
        int currDigit = N % 2;
        N /= 2;
        if(currDigit) {
            longestBG = max(longestBG, currBG);
            currBG = 0;
            triggered = true;
        }
        else if(triggered) {
            ++currBG;
        }
    }
    return longestBG;
}