// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{   //Calculate tax amount
    float taxAmount = bill * (tax/100);
    //Calculate bill + tax amount
    float billAmount = bill + taxAmount;
    //Calculate tip amount
    float tipAmount = billAmount * ((float)tip/100);
    //Calculate total amount
    float totalAmount = billAmount + tipAmount;
    //Calculate and return half of the total amount
    return totalAmount / 2;
}
