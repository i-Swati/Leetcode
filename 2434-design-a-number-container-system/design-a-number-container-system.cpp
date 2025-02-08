class NumberContainers {
private:
    unordered_map<int, int> indexToNumber; // Maps index to number
    unordered_map<int, set<int>> numberToIndices; // Maps number to sorted indices

public:
    NumberContainers() {}

    void change(int index, int number) {
        // If index already exists, remove it from its old number's set
        if (indexToNumber.count(index)) {
            int oldNumber = indexToNumber[index];
            numberToIndices[oldNumber].erase(index);
            if (numberToIndices[oldNumber].empty()) {
                numberToIndices.erase(oldNumber);
            }
        }
        
        // Update index-to-number mapping
        indexToNumber[index] = number;
        // Insert index into the number's sorted set
        numberToIndices[number].insert(index);
    }

    int find(int number) {
        // If number exists, return the smallest index, otherwise return -1
        if (numberToIndices.count(number) && !numberToIndices[number].empty()) {
            return *numberToIndices[number].begin();
        }
        return -1;
    }
};