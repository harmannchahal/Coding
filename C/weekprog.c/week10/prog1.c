// A supermarket wants to store the details of an item such as item code, item name, quantity, price per unit, and discount percentage. 

// Write a C program using a structure to: 
// 1. Read the item details from the user  
// 2. Display the entered details  
// 3. Calculate the total cost before discount  
// 4. Calculate the discount amount  
// 5. Calculate the final bill amount after discount 

// Sample input and output: 
// Enter item code: 102 
// Enter item name: Cooking Oil 
// Enter quantity: 4 
// Enter price per unit: 180 
// Enter discount percentage: 10 

//--- Item Details --- 
// Item Code : 102 
// Item Name : Cooking Oil 
// Quantity : 4 
// Price per Unit : 180.00 
// Discount Percentage : 10.00% 

//--- Bill Details --- 
// Total Cost : 720.00 
// Discount Amount : 72.00 
// Final Bill Amount : 648.00 



#include <stdio.h>
#include<string.h>
 struct Item
 {
    int code;
    char name[20];
    int qty;
    float price;
    float disc_per;
 };

 int main()
 {
    float total_cost,disc_amt,final_bill;

    struct Item i;

        printf("Enter Item Code: ");
        scanf("%d", &i.code);
        printf("Enter Item Name: ");
        scanf(" %[^\n]", i.name);
        printf("Enter Quantity: ");
        scanf("%d", &i.qty);
        printf("Enter Price per unit: ");
        scanf("%f", &i.price);
        printf("Enter discount percentage: ");
        scanf("%f", &i.disc_per);

        printf("\n------- Item Details -------\n");

        printf("Item Code: %d", i.code);
        printf("\nItem Name: %s", i.name);
        printf("\nQuantity: %d", i.qty);
        printf("\nPrice Per unit %.2f", i.price);

        total_cost = i.qty*i.price;
        disc_amt = total_cost*(i.disc_per/100);
        final_bill=total_cost-disc_amt;

        printf("\n\n------- Bill Details -------\n");
        printf("Total Cost : %.2f\n",total_cost);
        printf("Discount Amount : %.2f\n",disc_amt);
        printf("Final Bill Amount : %.2f\n",final_bill);

    return 0;
 }