#include<iostream>
#include<unordered_map>
using namespace std;
unordered_map<int,int> dp;
int fibonacci(int n){
    if (n <= 1){
        return n;
    }
    if(dp.find(n) != dp.end()){
        return dp[n];
    }
    dp[n] = fibonacci(n-1) + fibonacci(n-2);
    return dp[n];
}
int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "Fibonacci of " << n << " is: " << fibonacci(n) << endl;
    return 0;
}