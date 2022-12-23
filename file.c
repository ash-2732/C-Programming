#include<stdio.h>
#include<stdlib.h>
void solve(){
     // this code is for reading the file
    // FILE * ptr = NULL;
    // char string[34];
    // ptr = fopen("myfile.txt" , "r");
    // fscanf(ptr , "%s" , string);
    // printf("The content of the file has : %s\n" , string);

    //****** Now I want to write the file ******
    // FILE *ptr = NULL;
    // char string[34] = "Hello everyone , How are you";
    // ptr = fopen("myfile.txt" ,"a+");
    // fprintf(ptr , "%s\n" , string);

    // ***** using of different function *****
    // FILE *ptr = NULL;
    // ptr = fopen("myfile.txt" , "r");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n" , c);
    // // it will print the next character
    // c = fgetc(ptr);
    // printf("The next one is: %c\n" , c);
    // fclose(ptr);

    // ******* use of fgets ********
    // char str[10];
    // fgets(str , 6 , ptr);
    // printf("The string is : %s\n", str);

    // ****** using of fputs function ********
    // FILE *ptr = NULL;
    // ptr = fopen("myfile.txt" , "w+");
    // fputc('d' , ptr);
    // fputs("This is me hello everyone" , ptr);

    // sum of numbers from file
    int ar[10];
    int sum = 0;
    FILE *ptr;
    ptr = fopen("myfile.txt","r");
    if(ptr == NULL){
        printf("It is Error\n");
        exit(0);
    }
    for(int i = 0; i < 10; i++){
        fscanf(ptr,"%d",&ar[i]);
    }
    for(int i = 0; i < 10; i++){
        sum += ar[i];
    }
    fclose(ptr);
    printf("%d\n",sum);

}
int main(){
    solve();
    return 0;
}