// Question 1
#include <iostream>
#include <vector>

int numberOfDuplicates(const std::vector<int>& nums);
void printVector(const std::vector<int>& nums);

int numberOfDuplicates(const std::vector<int>& nums)
{
    std::vector<int> duplicates;
    for (int i = 0; i < nums.size(); i++)
    {
        bool isDuplicate = false;
        
        for (int j = 0; j < nums.size(); j++)
        {
            if (i != j && nums[i] == nums[j])
            {
                isDuplicate = true;
                break;
            }
        }

        if (isDuplicate)
        {
            bool repeat = false;
            
            for (int x = 0; x < duplicates.size(); x++)
            {
                if (duplicates[x] == nums[i])
                {
                    repeat = true;
                    break;
                }
            }
            
            if (!repeat)
            {
                duplicates.push_back(nums[i]); 
            }
        }
    }
    return duplicates.size();
}

void printVector(const std::vector<int>& nums)
{
    std::cout << "{ ";
    
    for (int i = 0; i < nums.size(); i++)
    {
        std::cout << nums[i];
        if (i < nums.size() - 1)
        {
            std::cout << ", ";
        }
    }
    std::cout << " }";
}


// Question 2
void setDeepValue(int ***p, int value);

void setDeepValue(int ***p, int value)
{
    ***p = value;
}