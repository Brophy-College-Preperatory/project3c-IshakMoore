#include <stdio.h>

int main(void){
    //Work here
    double myChange, totalCoins;
    double quarters = 0;
    double dimes = 0;
    double nickels = 0;
    double pennies = 0;
    printf("how many cents do you got bucko (answer in whole numbers) ");
    scanf("%lf", &myChange);

while (myChange >= 25) { 
    myChange = myChange - 25; 
    quarters++; 
}
printf("Quarters given: %lf\n", quarters);

while (myChange >= 10) { 
    myChange = myChange - 10; 
    dimes++; 
}
printf("Dimes given: %lf\n", dimes);

while (myChange >= 5) { 
    myChange = myChange - 5; 
    nickels++; 
}
printf("Nickels given: %lf\n", nickels);

while (myChange >= 1) { 
    myChange = myChange - 1; 
    pennies++; 
}
printf("Pennies given: %lf\n", pennies);

totalCoins = quarters += dimes += nickels += pennies;
printf("Total coins given: %lf\n", totalCoins);
    return 0;
}