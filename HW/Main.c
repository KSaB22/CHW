#include <stdio.h>
#include <stdlib.h>

#define N 100
#define SIZE 10
#define FACTORIAL 362880
#define SUMNINE 45

//2
int IsValidRoute(int arr[],int sum,int atzeret, int n){// sum saves the sum of all the indexes we passed through n is the index we are in currently, , atzeret is the muliplication of all location we have been in
    if(sum == SUMNINE && atzeret == FACTORIAL){
        return n == 0;//the sum of  0 + 1 +  2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 is 45 so a valid route will through all of them once and the sum has to be 45,the factorail of 9 is 362880 that means that atzeret has to be equal to that so that every house is contained, n==0 is checking if we are where we started
    }
    if(sum > SUMNINE){//if the sum is bigger than 45 then the route has to be invalid
        return 0;
    }
    return IsValidRoute(arr,sum + n,(n)?atzeret*n:atzeret, arr[n]);//going to the next "house" and adding to the sum,does not multiply atzeret if 0
}
//1
void reverseCode(char arr[],int i)
{
    if(arr[i] == '\n' || arr[i] == '\0'){//return if its the last character of the string
        return;
    }
    reverseCode(arr,i + 1);//call for  next character
    if((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z' ) || (arr[i] >= '0' && arr[i] <= '9'))//check if its in the Alphabet or 0-9
    {
        printf("%c", arr[i]);//print the letter if so
        return;
    }
}

int main()
{
    char message[N];
    int route[SIZE];
    printf("Please enter your message: \n");
    scanf("%s", message);
    reverseCode(message, 0);
    printf("\nPlease enter Daniel route: \n");
    if(scanf("%d %d %d %d %d %d %d %d %d %d", &route[0] , &route[1], &route[2] , &route[3], &route[4] , &route[5], &route[6] , &route[7], &route[8] , &route[9])!= 10)
    {
        printf("Invalid Input");
        return 1;
    }
    if(IsValidRoute(route,0,1,0)){
        printf("I'm coming!\n");
    }
    else{
        printf("Sorry, I did not find a way\n");
    }
    return 0;
}



