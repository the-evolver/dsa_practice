class Solution {
    public int minTimeToReach(int[][] moveTime) {
        
        return time(moveTime);
        
    }

    public int time(int[][] moveTime){
     Queue<int[]> queue = new PriorityQueue<>((o1,o2) -> o1[2]- o2[2]);
        queue.add(new int[]{0, 0, 0});
        Integer[][] visited = new Integer[moveTime.length][moveTime[0].length];
        
        
        while(!queue.isEmpty()){
            int[] poll = queue.poll();
            int i = poll[0];
            int j = poll[1];
            int time = poll[2];
              
            if(i == moveTime.length-1  && j == moveTime[0].length-1){
                return time;
            }
     

            if(isValid(moveTime, i+1, j, visited)){
                if(visited[i+1][j] == null || visited[i+1][j] >  Math.max(time+1, moveTime[i+1][j]+1)){
                                    queue.add(new int[]{i+1, j, Math.max(time+1, moveTime[i+1][j]+1)});
                    visited[i+1][j] =  Math.max(time+1, moveTime[i+1][j]+1);
                }

            }
            if(isValid(moveTime, i-1, j, visited)){
                 if(visited[i-1][j] == null || visited[i-1][j] >  Math.max(time+1, moveTime[i-1][j]+1)){
                          queue.add(new int[]{i-1, j, Math.max(time+1, moveTime[i-1][j]+1)});
                     visited[i-1][j] =Math.max(time+1, moveTime[i-1][j]+1);
                 }
           
            }
            if(isValid(moveTime, i, j+1, visited)){
                 if(visited[i][j+1] == null || visited[i][j+1] >  Math.max(time+1, moveTime[i][j+1]+1)){
                          queue.add(new int[]{i, j+1, Math.max(time+1, moveTime[i][j+1]+1)});
                     visited[i][j+1] = Math.max(time+1, moveTime[i][j+1]+1);
                 }
           
            }
            if(isValid(moveTime, i, j-1, visited)){
                 if(visited[i][j-1] == null || visited[i][j-1] >  Math.max(time+1, moveTime[i][j-1]+1)){
                            queue.add(new int[]{i, j-1, Math.max(time+1, moveTime[i][j-1]+1)});
                     visited[i][j-1] = Math.max(time+1, moveTime[i][j-1]+1);
                 }
         
            }
            
        }

        return -1;
    }

    public boolean isValid(int[][] moveTime, int i, int j, Integer[][] visited){
       if(i < 0 || j < 0 || i>=moveTime.length || j>=moveTime[0].length){
            return false;
        }  
        return true;
    }
}