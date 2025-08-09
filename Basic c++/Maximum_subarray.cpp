#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxSubArraySum(vector<int>& numbers) {
    int maxSumSoFar = numbers[0];       
    int currentSubArraySum = numbers[0]; 
    for (int i = 1; i < numbers.size(); i++) {
       
        currentSubArraySum = max(numbers[i], currentSubArraySum + numbers[i]);

        
        maxSumSoFar = max(maxSumSoFar, currentSubArraySum);
    }

    return maxSumSoFar;
}

int main() {
    vector<int> inputNumbers = {5,4,-1,7,8}; 
    int result = findMaxSubArraySum(inputNumbers);             
    cout << "Maximum subarray sum is: " << result << endl;     
    return 0;
}
