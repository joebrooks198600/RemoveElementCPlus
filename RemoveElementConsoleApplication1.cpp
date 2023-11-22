// RemoveElementConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int removeElement(std::vector<int>& nums, int val) {
    
    int i = 0; 
    int j = 0;
        
    while (i < nums.size()) {        
        if (nums[i] == val) {
            i++;
        }
        else {            
            nums[j] = nums[i];            
            i++;
            j++;
        }
    }
    
    return j;
}

int main()
{
    //Example: Given input array nums = [3,2,2,3], val = 3
    std::vector<int> nums = { 3, 1, 2, 3, 2 };
    int val = 3;

    // Call remove element function
    int newLength = removeElement(nums, val);

    // Output result
    std::cout << "New Length: " << newLength << std::endl;

    // Output modified array
    std::cout << "Modified Array: ";
    for (int i = 0; i < newLength; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
