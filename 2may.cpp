class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.length();
        
        vector<int> forces(n);
        
      
        int force = 0; 
        for(int i = 0; i<n; i++) {
            if(dominoes[i] == 'R')
                force = n; 
            else if(dominoes[i] == 'L')
                force = 0;
            else
                force = max(force-1, 0); 
            forces[i] = force;
        }
        
       
        force = 0; //initially
        for(int i = n-1; i>=0; i--) {
            if(dominoes[i] == 'L')
                force = n;
            else if(dominoes[i] == 'R')
                force = 0;
            else
                force = max(force-1, 0);
            forces[i] -= force;
        }
        
        //Now I will find resultant direction on each domino basis of resultant force on them
        string result(n ,'.');
        for(int i = 0; i<n; i++) {
            if(forces[i] < 0)
                result[i] = 'L';
            else if(forces[i] > 0)
                result[i] = 'R';
        }
        return result;
        
    }
};

