class Solution {
public:
    bool winnerOfGame(string colors) {
        int aliceWins = 0;
        int bobWins = 0;
        int consecutiveA = 0;
        int consecutiveB = 0;

        for (char c : colors) {
            if (c == 'A') {
                consecutiveA++;
                if (consecutiveA >= 3) {
                    aliceWins++;
                }
                consecutiveB = 0; // Reset consecutiveB
            } else if (c == 'B') {
                consecutiveB++;
                if (consecutiveB >= 3) {
                    bobWins++;
                }
                consecutiveA = 0; // Reset consecutiveA
            }
        }

        return aliceWins > bobWins;
    }
};
