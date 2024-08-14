#include <vector>
#include <unordered_set> 

using namespace std;

int solution(vector<int> nums)
{
    int n = nums.size()/2; 
    unordered_set<int> collections (nums.begin(), nums.end()); 

    if(collections.size() <= n)
        return collections.size(); 
    else 
        return n;
}