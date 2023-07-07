class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n = answerKey.size();
        int start = 0;
        int end = 0;
        int t = 0, f = 0; // Counters for 'T' and 'F' characters
        int ans = 0; // Maximum consecutive answers

        while (end < n) {
            // Update counters based on the current character
            t += (answerKey[end] == 'T');
            f += (answerKey[end] == 'F');

            while (t > k && f > k) {
                // If both counters exceed 'k', move the start pointer and adjust counters
                if (answerKey[start] == 'T')
                    t--;
                else
                    f--;
                start++;
            }

            ans = max(ans, end - start + 1); // Update the maximum consecutive answers
            end++;
    }
    return ans;
    }
};