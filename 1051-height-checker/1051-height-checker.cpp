class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // 1. Array ki copy banana lazmi hai taake 'expected' variable declare ho sake
        vector<int> expected = heights;
        int n = expected.size();

        // 2. Insertion Sort (Only sorting 'expected')
        for (int i = 1; i < n; i++) {
            int key = expected[i];
            int j = i - 1;
            while (j >= 0 && expected[j] > key) {
                expected[j + 1] = expected[j];
                j--;
            }
            expected[j + 1] = key;
        }

        // 3. Compare original 'heights' with sorted 'expected'
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }

        // 4. Final result return karein
        return count;
    }
};
    