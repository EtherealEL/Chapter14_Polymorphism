#include <iostream>
using namespace std;




class BillCalculator
{
public:
    int calculateBill(int burger_price, int pizza_price)
    {
        return burger_price + pizza_price;
    }

    double calculateBill(double food_total, double tax_rate)
    {
        return food_total + (food_total * tax_rate);
    }

    double calculateBill(double food_total, double tax_rate, double discount)
    {
        return (food_total + (food_total * tax_rate)) - discount;
    }
};




int main()
{
    BillCalculator calculator_object;

    int burger_price;
    int pizza_price;
    double tax_rate;
    double discount;

    cout << "Enter Burger Price: ";
    cin >> burger_price;

    cout << "Enter Pizza Price: ";
    cin >> pizza_price;

    cout << "Enter Tax Rate: ";
    cin >> tax_rate;

    cout << "Enter Discount: ";
    cin >> discount;

    int food_total = calculator_object.calculateBill(burger_price, pizza_price);
    double total_with_tax = calculator_object.calculateBill((double)food_total, tax_rate);
    double final_total = calculator_object.calculateBill((double)food_total, tax_rate, discount);

    cout << "Food Total: " << food_total << endl;
    cout << "Total With Tax: " << total_with_tax << endl;
    cout << "Total After Tax and Discount: " << final_total << endl;


    return 0;
}
