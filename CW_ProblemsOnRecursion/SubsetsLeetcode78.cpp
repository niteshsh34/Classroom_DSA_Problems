#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution{
    public:
    vector<vector<int>> ans;
    void helper(vector<int> A, vector<int> temp, int i){
        if(i==A.size()){ ans.push_back(temp);
        return;
        } 
        temp.push_back(A[i]); 
        helper (A, temp, i+1); 
        temp.pop_back(); 
        helper (A, temp, i+1);
        return;
        }
        vector<vector<int> > subsets(vector<int>& A){
            {
                vector<int> temp; 
                helper (A, temp, 0); 
                sort(ans.begin(), ans.end());
                return ans;}
                }
};
int main() {
    Solution s;
    vector<int> A = {1, 2, 3};
    vector<vector<int>> result = s.subsets(A);

    // Simple printing of subsets
    for (vector<int>& subset : result) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}

