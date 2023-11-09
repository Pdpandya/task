#include <stdio.h>

int main() {
   char name[50], gender[10], email[50], address[100]; //The char data type is used to store character values, such as letters and symbols.
   int age; // The int data type is used to store integer values
   float height, weight;  
   // The float data type is used to store decimal values, such as height and weight 

   printf("Enter name: ");
   gets("%s", name);

   printf("Enter age: ");
   scanf("%d", &age);

   printf("Enter gender: ");
   gets("%s", gender);

   printf("Enter email: ");
   scanf("%s", email);

   printf("Enter address: ");
   scanf("%s", address);

   printf("Enter height: ");
   scanf("%f", &height);

   printf("Enter weight: ");
   scanf("%f", &weight);

   printf("\nYour name is: %s\n", name);
   printf("Your age is: %d\n", age);
   printf("Your gender is: %s\n", gender);
   printf("Your email is: %s\n", email);
   printf("Your address is: %s\n", address);
   printf("Your height is: %.2f\n", height);
   printf("Your weight is: %.2f\n", weight); //2f specifier is used to print the floating-point numbers with two decimal places.
   
   return 0;
}

