#include<stdio.h>
#include<string.h>
int const N = 1e7+10;

void Seive_algo(int n){
    int prime[n+1];
    memset(prime , -1 , sizeof(prime));
    for(int p = 2; p * p <= n; p++){
        if(prime[p] == -1){
            for(int i = p * p; i <= n; i += p){
                prime[i] = 0;
            }
        }
    }
    for(int p = 2; p <= n; p++){
        if(prime[p]){
            printf("%d ",p);
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    Seive_algo(n);
    return 0;
}