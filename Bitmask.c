#include<stdio.h>
#include<limits.h>
int const N = 1e5 + 10;

void print_Binary(int num){
    int ans;
    for(int i = 7; i >= 0; i--){
        ans = ((num >> i) & 1);
        printf("%d",ans);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    print_Binary(n);

    int a = n;
    int i = 3;
    if((a & (1 << i)) != 0){
        printf("Set Bit\n");
    }else{
        printf("Not Set Bit\n");
    }
    // how to set bit
    print_Binary(a | (1 << i));

    // how to unset bit
    print_Binary(a & (~(1 << i)));

    // how to toggle bit
    print_Binary(a ^ (1 << i));

    // how to count set bit
    int count_setBit = 0;
    for(int i = 31; i >= 0; i--){
        if((a & (1 << i)) != 0){
            count_setBit++;
        }
    }
    printf("%d\n",count_setBit);

    // // how to swap bit using XOR
    // int a = 4 , b = 6;
    // int a = a ^ b;
    // int b = b ^ a; // b ==> a
    // int a = a ^ b; // a ==> b
    // // output  a = 6 , b = 4;



    return 0;
}