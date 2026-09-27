class Solution {
public:
    bool checkPerfectNumber(int num) {
        long sum=0;
        int x=num;
        int i=1;
        if(x==1) return false;
        while(i*i<=x){
            if(x%i==0){
            int div=x/i;
            sum=sum+i+div;}
            i++;
        }
        cout<<sum;
        return (sum-num)==num;
    }
};