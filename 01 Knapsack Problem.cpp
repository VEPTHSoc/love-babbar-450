Recursion:

 int knapSack(int W, int wt[], int val[], int n) { 
       // Your code here
       
       if(W==0 || n==0){
           return 0;
       }
       
       if(wt[n-1]>W){
           return knapSack(W, wt, val, n-1);
       }
       return max(val[n-1]+knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
 }
 
 
 Memoisation:
 int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       
       if(W==0 || n==0){
           return 0;
       }
       if(t[n][W]!=-1){
           return t[n][w];
       }
       
       if(wt[n-1]>W){
           return t[n][W]=knapSack(W, wt, val, n-1);
       }
       return t[n][W]= max(val[n-1]+knapSack(W-wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));
    }
    
    
    DP:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int t[n+1][W+1];
        for(int i=0; i<=n; i++){
            for(int w=0 ; w<=W; w++){
                if (i == 0 || w == 0){
                  t[i][w] = 0;
                }else if (wt[i - 1] <= w){
                  t[i][w] = max(val[i - 1] + t[i - 1][w - wt[i - 1]], t[i - 1][w]);
                }else{
                  t[i][w] = t[i - 1][w];}
            }
        }
        
        return t[n][W];
     }
