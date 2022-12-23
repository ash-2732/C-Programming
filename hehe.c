#include<stdio.h>
#include<limits.h>
int const N = 1e5 + 10;

int XOR(int a[] , int size){
    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans ^ a[i];
    }
    return ans;
}
// return multiple values using pointer
void compare(int x, int y, int *add_great, int *add_small){
    if(x >= y){
        *add_great = x;
        *add_small = y;
    }else{
        *add_great = y;
        *add_small = x;
    }
}
// return multiple values using array        
void find_great_small(int x, int y, int ar[]){
    if(x >= y){
        ar[0] = x;
        ar[1] = y;
    }else{
        ar[0] = y;
        ar[1] = x;
    }
}

int length(char str1[]){
    int len = 0;
    while(str1[len]){
        len++;
    }
    return len;
}
void reverse(char str[]){
    int l = length(str);
    l--;
    if(str[l] == '.'){
        l--;
    }
    for(int i = 0; i <= l/2; i++){
        char t = str[i];
        str[i] = str[l-i];
        str[l-i] = t;
    }
}
int main(){
    //int a[N];
    char str[100];
    char str2[100];
    //fgets(str , sizeof(str) , stdin);
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&array[i]);
    }
    int temp;
    for(int i = 1; i < n; i++){
        for(int j = 0; j <= (n-i-1); j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ",array[i]);
    }

    return 0;
}