class Solution {
    public int catMouseGame(int[][] graph) {
        int n = graph.length;

        int[] nonZeroNeighbor = new int[n];
        for(int i = 0; i < n; i++){
            nonZeroNeighbor[i] = graph[i].length;
            for(int neighbor : graph[i]){
                if(neighbor == 0){
                    nonZeroNeighbor[i]--;
                    break;
                }
            }
        }
        int[][][] nextStateCount = new int[n][n][2];
        for(int mousePos = 0; mousePos < n; mousePos++){
            for(int catPos = 0; catPos < n; catPos++){
                nextStateCount[mousePos][catPos][0] = graph[mousePos].length;
                nextStateCount[mousePos][catPos][1] = nonZeroNeighbor[catPos];
            }
        }
        int[][][] dp = new int[n][n][2];
        Queue<int[]> queue = new ArrayDeque<>();
        for(int catPos = 1; catPos < n; catPos++){
            for(int turn = 0; turn <= 1; turn++){
                dp[0][catPos][turn] = 1;
                queue.offer(new int[]{0, catPos, turn, 1});
                dp[catPos][catPos][turn] = 2;
                queue.offer(new int[]{catPos, catPos, turn, 2});
            }
        }
        while(!queue.isEmpty()){
            int[] curr = queue.poll();
            int mousePos = curr[0], catPos = curr[1], turn = curr[2], result = curr[3];
            if(turn == 0){
                if(mousePos == 1 && catPos == 2)
                    return result;
                for(int prev : graph[catPos]){
                    if(prev == 0 || dp[mousePos][prev][1] != 0)
                        continue;
                    if(result == 2 || --nextStateCount[mousePos][prev][1] == 0){
                        dp[mousePos][prev][1] = result;
                        queue.offer(new int[]{mousePos, prev, 1, result});
                    }
                }
            } else {
                for(int prev : graph[mousePos]){
                    if(dp[prev][catPos][0] != 0)
                        continue;
                    if(result == 1 || --nextStateCount[prev][catPos][0] == 0){
                        dp[prev][catPos][0] = result;
                        queue.offer(new int[]{prev, catPos, 0, result});
                    }
                }
            }
        }
        return dp[1][2][0];
    }
}