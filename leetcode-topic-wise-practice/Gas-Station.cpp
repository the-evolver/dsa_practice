class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int allGas = 0;
        int localGas = 0;

        int starting = 0;

        for(int i = 0 ;  i < gas.size(); i++){
            int leftGas = (gas[i] - cost[i]);
             allGas += leftGas;
             localGas += leftGas;

             if(localGas < 0){
                localGas = 0;
                starting = i+1;
               
              }
        }
        return (allGas >= 0 ? starting : -1);
        
    }
};

 /* contributions 
     4 -1 -2 -1 3 6 -7
       ------------
     starting at index of 4(index - 0 ) 
     fails at index of -7 (index -  6  )

     see between the i,j no valid stating is there 


 */