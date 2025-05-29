class Solution {
public:
 int find(int n){
        int num1=0;
        int num2=1;
        int ans;
        for(int i=1;i<=n;i++){
            ans = num1 + num2;
            num1=num2;
            num2=ans;
        }
        return ans;
    }

    int climbStairs(int n) {
   
    //     if(n==1)
    //     {
    //         return 1;
    //     }
    //    return climbStairs(n - 1) + climbStairs(n - 2);

        return find(n);
    }
};
