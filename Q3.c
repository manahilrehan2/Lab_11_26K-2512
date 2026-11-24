
#include <stdio.h>

struct Item
{
    int ID;
    char Name[50];
    int Quantity;
    float UnitPrice;
};

int main()
{
    struct Item items[5];
    int i, searchID, found = 0;
    float totalValue = 0;

    for (i = 0; i < 5; i++)
    {
        printf("\nEnter details for item %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &items[i].ID);

        printf("Enter Name: ");
        scanf(" %[^\n]", items[i].Name);

        printf("Enter Quantity: ");
        scanf("%d", &items[i].Quantity);

        printf("Enter Unit Price: ");
        scanf("%f", &items[i].UnitPrice);

        totalValue = totalValue +
                     (items[i].Quantity * items[i].UnitPrice);
    }

    printf("\nTotal Inventory Value = %.2f\n", totalValue);

    printf("\nEnter Item ID to search: ");
    scanf("%d", &searchID);

    for (i = 0; i < 5; i++)
    {
        if (items[i].ID == searchID)
        {
            printf("\nItem Found!");
            printf("\nID: %d", items[i].ID);
            printf("\nName: %s", items[i].Name);
            printf("\nQuantity: %d", items[i].Quantity);
            printf("\nUnit Price: %.2f", items[i].UnitPrice);

            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("\nItem not found.");
    }

    return 0;
}
