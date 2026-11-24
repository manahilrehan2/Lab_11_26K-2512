
#include <stdio.h>

struct Product
{
    int ID;
    char Name[50];
    char Category[30];
    float Price;
    int StockQuantity;
};

void displayProductDetails(struct Product p)
{
    float finalPrice;

    finalPrice = p.Price - (p.Price * 0.05);

    printf("\nProduct ID: %d", p.ID);
    printf("\nName: %s", p.Name);
    printf("\nCategory: %s", p.Category);
    printf("\nOriginal Price: %.2f", p.Price);
    printf("\nStock Quantity: %d", p.StockQuantity);
    printf("\nFinal Price after 5%% discount: %.2f",
           finalPrice);
}

int main()
{
    struct Product p1 = {
        101, "Laptop", "Electronics", 100000, 20
    };

    struct Product p2 = {
        102, "Mouse", "Accessories", 2000, 50
    };

    displayProductDetails(p1);
    displayProductDetails(p2);

    return 0;
}
