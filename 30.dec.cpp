class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";
        
        vector<int> result;
        for(int i = 0; i<9; i++) {
            for(int j = i+1; j<9; j++) {//why j = i+1 ? Bcz 10 <= low <= high <= 10^9 (No single digit)
                string temp = s.substr(i, j-i+1);
                
                int num = stoi(temp);
                if(num > high) break;
                
                if(num >= low && num <= high)
                    result.push_back(num);
            }
        }        
        
        
        sort(begin(result), end(result));
        return result;
    }
};
