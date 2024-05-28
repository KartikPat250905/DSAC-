#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution{
    private:
    int isValid(vector<vector<int>> &m, int n, vector<vector<int>> &visited,
    int x, int y)
    {
        if((x>=0 && x <n) && (y>=0 && y <n)&& m[x][y] == 1 && visited[x][y] == 0)
            return 1;
        return 0;
    }
    
    void solve(vector<vector<int>> &m, int n,
    vector<vector<int>> &visited,int x, int y,vector<string> &ans,
    string output)
    {
        if(x == n-1 && y == n - 1)
        {
            ans.push_back(output);
            return;
        }
        //Up
        visited[x][y] = 1;
        if(isValid(m,n,visited,x-1,y))
        {
            output.push_back('U');
            solve(m,n,visited,x-1,y,ans,output);
            output.pop_back();
        }
        //Down
        if(isValid(m,n,visited,x+1,y))
        {
            output.push_back('D');
            solve(m,n,visited,x+1,y,ans,output);
            output.pop_back();
        }
        //Left
        if(isValid(m,n,visited,x,y-1))
        {
            output.push_back('L');
            solve(m,n,visited,x,y-1,ans,output);
            output.pop_back();
        }
        //Right
        if(isValid(m,n,visited,x,y+1))
        {
            output.push_back('R');
            solve(m,n,visited,x,y+1,ans,output);
            output.pop_back();
        }
        visited[x][y] = 0;
    }
    public:
    vector<string> findPath(vector<vector<int>> &m, int n) {
        int x= 0;
        int y = 0;

        vector<string> ans;
        if(m[0][0] == 0)
            return ans;
        string output="";
        vector<vector<int>> visited =m;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<n;j++)
            {
                visited[i][j] = 0;
            }
        }
        solve(m,n,visited,x,y,ans,output);
        sort(ans.begin(),ans.end());
        return ans;
    }
};