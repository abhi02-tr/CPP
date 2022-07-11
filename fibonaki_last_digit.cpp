#include <iostream>
int get_fibonacci_last_digit_naive(int n) {
    int f[n+2];
    f[0]=0;
    f[1]=1;

    for(int i=2; i<=n; i++){
        f[i]=((f[i-1]%10)+(f[i-2]%10))%10;
    }
    return f[n];
}

int main() {
    int n;
    std::cin >> n;
    int c = get_fibonacci_last_digit_naive(n);
    
    
    
    
        std::cout << c << '\n';
    
    return 0;
}
