#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];

public:
    // void initCounter(void) { counter = 0; }
    int counter = 0;
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no :" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item :" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item id is  : " << itemId[i] << ",  And price is  : " << itemPrice[i] << endl;
    }
}

int main()
{
    int quantity_of_items;
    cout << "how many quantity of items you need to add in data : " << endl;
    cin >> quantity_of_items;

    Shop dukaan;
    // dukaan.initCounter();
    for (int i = 0; i < quantity_of_items; i++)
    {
        dukaan.setPrice();
    }
    dukaan.displayPrice();
    return 0;
}
