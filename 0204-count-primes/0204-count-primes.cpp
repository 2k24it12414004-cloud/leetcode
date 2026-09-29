class Solution1 {
public:
        int prime(int a){
            int count=0;
            if(a==1)
            return 0;
            if(a==0)
            return 0;
            for(int i=1;i<=a/2;i=i){//some optimise
            if(a%i==0)
            count++;
        }
        if(count==1)
        return 1;
        else
        return 0;}

    int countPrimes(int n) {
        int flag=0;
        for(int i=2;i<n;i++){
            if(prime(i))
            flag++;

        }
        return flag;
    }
};
class Solution {
public:
    void fillSieve(vector<char>& Sieve){
        int n = Sieve.size() - 1;
        for(long long i = 3; i*i <= n; i+=2){
            if(Sieve[i]){ 
                for(long long j = i*i; j < n; j += 2*i){
                    Sieve[j] = 0;
                }
            }
        }
    }

    int countPrimes(int n) {
        if(n <= 2) return 0;
        vector<char> Sieve(n+1, 1); 
        Sieve[0] = 0;
        Sieve[1] = 0;

        fillSieve(Sieve);

        int count = 1;
        for(int i = 3; i < n; i+=2){
            if(Sieve[i]) count++;
        }
        return count;
    }
};