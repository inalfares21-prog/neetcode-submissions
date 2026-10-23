class Solution {
    int hoursNeeded(vector<int>& piles, int k) {
        int hours = 0;
        for (int p : piles) {
            hours += (p + k - 1) / k; // ceil(p/k)
        }
        return hours;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());

        while (l < r) {
            int m = l + (r - l) / 2;

            if (hoursNeeded(piles, m) > h)
                l = m + 1;
            else
                r = m;
        }

        return l;
    }
};