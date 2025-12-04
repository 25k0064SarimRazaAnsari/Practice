#include <stdio.h>

int factorial(int n){
    if(n==1) return 1;
    return n*factorial(n-1);
}

int sum(int n){
    if(n==1) return 1;
    return n+ sum(n-1);
}

int reverse(int n){
    static int rev=0;
    if(n==0) return rev;

    rev=rev*10 +(n%10);
    return reverse(n/10);
}

int count(int no){
    if(no==0) return 0;
    return 1+count(no/10);
}
int powe(int a, int b){
    if(b==0) return 1;
    return a*powe(a,b-1);
}

void strReverse(char *arr, int i){
    if(arr[i]=='\0') return;
    strReverse(arr,i+1);
    printf("%c",arr[i]);
}

int countVowel(char *arr, int i){
    if(arr[i]=='\0') return 0;
    char c =arr[i];
    int isV=(c=='A'|| c=='a'||c=='E'|| c=='e'||c=='I'|| c=='i'||c=='O'|| c=='o'||c=='U'|| c=='u');

    return isV + countVowel(arr,i+1);
}

int strlene(char *arr, int i){
    if(arr[i]=='\0') return 0;

    return 1+strlene(arr,i+1);
}

int countChar(char *arr, char find){
    if(*arr=='\0') return 0;
    return (*arr==find)+countChar(arr+1,find);
}

int palindrome(char *arr,int start, int end){
    if(start>=end) return 1;
    if(arr[start]!=arr[end]) return 0;
    palindrome(arr, start+1, end-1);
}

void upper(char *arr){
    if(*arr=='\0') return;
    if(*arr>='a'&&*arr<='z') *arr-=32;
    upper(arr+1);
}

int  main(){
    int no;
    int fact=factorial(5);
    printf("%d\n",fact);

    printf("%d\n",sum(5));

    printf("%d\n",reverse(123));

    printf("%d\n",count(123));

    printf("%d\n",powe(2,3));

    char arr[20]={"ssrim"};
    strReverse(arr,0);

    printf("\n%d\n",countVowel(arr,0));

    printf("\n%d\n",strlene(arr,0));

    printf("%d\n",countChar(arr,'s'));
    char arr2[20]={"civi"};
    printf("%d\n",palindrome(arr2,0,4)); //1 //0

    upper(arr);

}