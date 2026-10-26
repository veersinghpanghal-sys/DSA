class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int hGain = 0;
        int maxAlt = 0;
        for (int i = 0; i < gain.size(); i++) {
            maxAlt = max(maxAlt, gain[i] + hGain);
            hGain += gain[i];
        }
        return maxAlt;
    }
};