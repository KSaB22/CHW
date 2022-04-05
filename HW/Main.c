
#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

int main()
{
    float browniePrice = -1, cheesecakePrice = -1, teaPrice = -1, cafePrice = -1;
    int i = 0;
    int customer1[SIZE],customer2[SIZE],customer3[SIZE],customer4[SIZE],customer5[SIZE];//place 0 is for brownies amount 1 is for cheescake amount 2 is for tea amount and 3 is for cafe amount
    int mostOfThisID = 0, mostOfThisAmount = -1;
    float sums[SIZE] = {0};// saves the total amount of stuff in sold, seperated in brackets(place 0 is for brownies amount 1 is for cheescake amount 2 is for tea amount and 3 is for cafe amount)
    float Revenues = 0;

    printf("Welcome to 'Programming and eat' restaurant!\n\n");
    {//1
        printf("Enter the brownies price: ");
        while((scanf("%f",  &browniePrice) != 1) || browniePrice < 0){
            if (browniePrice < 0){
                printf("\nEnter the brownies price: ");
                continue;
            }
            else{
                printf("Input error!");
                return 1;
            }
        }
        printf("\nEnter the cheesecake price: ");
        while(scanf("%f",  &cheesecakePrice) != 1 || cheesecakePrice < 0){
            if (cheesecakePrice < 0){
                printf("\nEnter the cheesecake price: ");
                continue;
            }
            else{
                printf("Input error!");
                return 1;
            }
        }
        printf("\nEnter the tea price: ");
        while(scanf("%f",  &teaPrice) != 1 || teaPrice < 0){
            if (teaPrice < 0){
                printf("\nEnter the tea price: ");
                continue;
            }
            else{
                printf("Input error!");
                return 1;
            }
        }
        printf("\nEnter the cafe price: ");
        while(scanf("%f",  &cafePrice) != 1 || cafePrice < 0){
            if (cafePrice < 0){
                printf("\nEnter the cafe price: ");
                continue;
            }
            else{
                printf("Input error!");
                return 1;
            }
        }
    }
    {// 2 and 3
        {// Customer 1
            printf("\nCUSTOMER 1:\n");
            printf("Enter the brownies amount: ");
            scanf("%d",  &customer1[0]);
            if (customer1[0] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cheesecake amount: ");
            scanf("%d", &customer1[1]);
            if(customer1[1] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the tea amount: ");
            scanf("%d", &customer1[2]);
            if(customer1[2] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cafe amount: ");
            scanf("%d", &customer1[3]);
            if(customer1[3] < 0)
            {
                printf("Input error!");
                return 1;
            }
        }
        {// Customer 2
            printf("\nCUSTOMER 2:\n");
            printf("Enter the brownies amount: ");
            scanf("%d",  &customer2[0]);
            if (customer2[0] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cheesecake amount: ");
            scanf("%d", &customer2[1]);
            if(customer2[1] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the tea amount: ");
            scanf("%d", &customer2[2]);
            if(customer2[2] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cafe amount: ");
            scanf("%d", &customer2[3]);
            if(customer2[3] < 0)
            {
                printf("Input error!");
                return 1;
            }
        }
        {// Customer 3
            printf("\nCUSTOMER 3:\n");
            printf("Enter the brownies amount: ");
            scanf("%d",  &customer3[0]);
            if (customer3[0] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cheesecake amount: ");
            scanf("%d", &customer3[1]);
            if(customer3[1] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the tea amount: ");
            scanf("%d", &customer3[2]);
            if(customer3[2] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cafe amount: ");
            scanf("%d", &customer3[3]);
            if(customer3[3] < 0)
            {
                printf("Input error!");
                return 1;
            }
        }
        {// Customer 4
            printf("\nCUSTOMER 4:\n");
            printf("Enter the brownies amount: ");
            scanf("%d",  &customer4[0]);
            if (customer4[0] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cheesecake amount: ");
            scanf("%d", &customer4[1]);
            if(customer4[1] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the tea amount: ");
            scanf("%d", &customer4[2]);
            if(customer4[2] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cafe amount: ");
            scanf("%d", &customer4[3]);
            if(customer4[3] < 0)
            {
                printf("Input error!");
                return 1;
            }
        }
        {// Customer 5
            printf("\nCUSTOMER 5:\n");
            printf("Enter the brownies amount: ");
            scanf("%d",  &customer5[0]);
            if (customer5[0] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cheesecake amount: ");
            scanf("%d", &customer5[1]);
            if(customer5[1] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the tea amount: ");
            scanf("%d", &customer5[2]);
            if(customer5[2] < 0)
            {
                printf("Input error!");
                return 1;
            }
            printf("\nEnter the cafe amount: ");
            scanf("%d", &customer5[3]);
            if(customer5[3] < 0)
            {
                printf("Input error!");
                return 1;
            }
        }
    }
    {
        //4
        for(i = 0; i < SIZE; i++){//4abcd
            if(customer1[i] > mostOfThisAmount){
                mostOfThisAmount = customer1[i];
                mostOfThisID = 1;
            }
            if(customer2[i] > mostOfThisAmount){
                mostOfThisAmount = customer2[i];
                mostOfThisID = 2;
            }
            if(customer3[i] > mostOfThisAmount){
                mostOfThisAmount = customer3[i];
                mostOfThisID = 3;
            }
            if(customer4[i] > mostOfThisAmount){
                mostOfThisAmount = customer4[i];
                mostOfThisID = 4;
            }
            if(customer5[i] > mostOfThisAmount){
                mostOfThisAmount = customer5[i];
                mostOfThisID = 5;
            }
            switch (i)
            {
                case 0:
                    printf("\nThe customer who order the highest amount of brownies is: %d.\n", mostOfThisID);
                    break;
                case 1:
                    printf("The customer who order the highest amount of cheesecakeArr is: %d.\n", mostOfThisID);
                    break;

                case 2:
                    printf("The customer who order the highest amount of tea is: %d.\n", mostOfThisID);
                    break;
                case 3:
                    printf("The customer who order the highest amount of cafe is: %d.\n", mostOfThisID);
                    break;
            }
            mostOfThisAmount = -1;
            mostOfThisID = 0;
        }

        for(i = 0; i < SIZE; i++){//filling sums
            sums[i] = customer1[i] + customer2[i] + customer3[i] + customer4[i] + customer5[i];
        }
        // 4e
        Revenues = sums[0]*browniePrice + sums[1]*cheesecakePrice + sums[2]*teaPrice + sums[3]*cafePrice;//calculating the revenue
        printf("The restaurant revenue is: %.2f\n", Revenues);

        //4f
        printf("The average amount of brownies ordering is: %.2f\n", sums[0]/5);
        printf("The average amount of cheesecake ordering is: %.2f\n", sums[1]/5);
        printf("The average amount of tea ordering is: %.2f\n", sums[2]/5);
        printf("The average amount of cafe ordering is: %.2f\n", sums[3]/5);
    }
    return 0;
}



