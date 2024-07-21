//editorial

class Solution {
public:
    vector<string> sortPeople(vector<string>& names,
                              const vector<int>& heights) {
        int numberOfPeople = names.size();

        // Create a permutation vector to store sorted indices
        vector<int> sortedIndices(numberOfPeople);
        iota(sortedIndices.begin(), sortedIndices.end(), 0);

        // Sort indices based on heights in descending order
        sort(sortedIndices.begin(), sortedIndices.end(),
             [&heights](int a, int b) { return heights[a] > heights[b]; });

        // Prepare the result vector to store sorted names
        vector<string> sortedNames;
        sortedNames.reserve(numberOfPeople);

        // Apply the sorted indices to rearrange names using a traditional for
        // loop
        for (int i = 0; i < numberOfPeople; i++) {
            sortedNames.push_back(move(names[sortedIndices[i]]));
        }

        return sortedNames;
    }
};
// Title: Sort the People
