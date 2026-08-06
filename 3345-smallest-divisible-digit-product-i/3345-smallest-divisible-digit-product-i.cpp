class Solution {
public:
    int productofdigits(int n){
        int res = 1;
        while(n!=0){
            int temp = n % 10;
            res = res * temp;
            n = n / 10;
        }
        return res;
    }
    int smallestNumber(int n, int t) {
        for(int i = n; i<=100; i++){
            if((productofdigits(i) % t) == 0)
                return i;
        }
        return -1;
    }
};