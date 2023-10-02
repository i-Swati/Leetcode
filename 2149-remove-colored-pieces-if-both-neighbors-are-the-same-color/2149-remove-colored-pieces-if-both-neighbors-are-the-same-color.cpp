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
                consecutiveB = 0; // Reset consecutiveB
            } else if (c == 'B') {
                consecutiveB++;
                consecutiveA = 0; // Reset consecutiveA
            }

            // Check for Alice's wins
            if (consecutiveA >= 3) {
                aliceWins++;
            }

            // Check for Bob's wins
            if (consecutiveB >= 3) {
                bobWins++;
            }
        }

        return aliceWins > bobWins;
    }
};
