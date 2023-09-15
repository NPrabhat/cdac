#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char name[20] /*, flavour_selected[20]*/;
    int flavour, quantity;
    float gst, price, price_temp,total;

    printf("Enter name:");
    scanf("%s",&name);

    printf("\nChoose flavour(Choose between 1-4): ");
    printf("1.Vanilla \n 2.Chocolate \n 3.Strawberry \n 4.Butterscotch\n 0.Cancel");
    scanf("%d",&flavour);

    switch (flavour)
    {
    case 1:
        price = 20;
        // flavour_selected = "Vanilla";
        // printf("%s",flavour_selected);
        break;
    
    case 2:
        price = 25;
        // flavour_selected = "Chocolate";
        // printf("%s",flavour_selected);
        break;

    case 3:
        price = 25;
        // flavour_selected = "Strawberry";
        // printf("%s",flavour_selected);
        break;
    
    case 4:
        price = 30;
        // flavour_selected = "Butterscotch";
        // printf("%s",flavour_selected);
        break;

    default:
        printf("Not available\n");
        exit(0);
        break;
    }

    printf("Enter quantity: ");
    scanf(" %d",&quantity);

    gst = price*0.18;
    price_temp = price + gst;
    total  = quantity * price_temp;

    printf("------------------------------------------\nBILL\n");
    printf("Name: %s\n",name);
    // printf("%s\n",flavour_selected);
    printf("Quantity: %d\n",quantity);
    printf("Price: %.2f\n",price);
    printf("Gst: %.2f\n",gst);
    printf("Total: %.2f",total);
    printf("\n------------------------------------------");

    return 0;
}