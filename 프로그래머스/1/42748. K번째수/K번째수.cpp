#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> v;

    for (auto command : commands)
    {
        v.clear();
        for (int i = command[0]-1; i < command[1]; i++)
        {
            v.push_back(array[i]); 
        }

        sort(v.begin(), v.end()); 

        answer.push_back(v[command[2]-1]); 
    }

    return answer;
}