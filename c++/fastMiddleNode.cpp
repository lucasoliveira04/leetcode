#include <iostream>

using namespace std;

int fastMiddleNode(int nums[], int length){
    int slow = 0;
    int fast = 0;

    while (fast < length && fast + 1 < length){
        slow++;
        fast += 2;
    }

    return nums[slow];
}

int main(int argc, char const *argv[])
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int length = sizeof(nums) / sizeof(nums[0]);
    
    cout << "Meio: " << fastMiddleNode(nums, length) << endl;


    return 0;
}
