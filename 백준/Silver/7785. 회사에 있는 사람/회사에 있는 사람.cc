#include<iostream>
#include<unordered_set>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    unordered_set<string> logs;
    int num; 
    cin>>num; 
    
    while(num--)
    {
        string name,state; 
        cin>>name>>state;
        
        if(state == "enter")
            logs.insert(name);
        else 
            logs.erase(name);
    }
    
    vector<string> names(logs.begin(), logs.end());
    sort(names.begin(),names.end(),greater<string>()); 
    for(auto name : names) cout<<name<<'\n';
    
}