class Solution {
    public double dis(int x1, int y1, int x2, int y2){
        double dis=Math.sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
        return dis;
    }
    public int[] countPoints(int[][] points, int[][] queries) {
        int c=0;
        int[] answer=new int[queries.length];
        for(int i=0;i<queries.length;i++){
            for(int j=0;j<points.length;j++){
                if(dis(queries[i][0],queries[i][1],points[j][0],points[j][1])<=queries[i][2])
                    c++;
            }
            answer[i]=c;
            c=0;
        }
        return answer;
    }
}
