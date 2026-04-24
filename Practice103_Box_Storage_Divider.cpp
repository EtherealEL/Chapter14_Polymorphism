#include <iostream>
using namespace std;



class StorageBox
{
private:
    int item_count;

public:
    void setItemCount(int count)
    {
        item_count = count;
    }

    int getItemCount()
    {
        return item_count;
    }


    StorageBox operator/(int divisor)
    {
        StorageBox result_box;

        if (divisor != 0)
        {
            result_box.item_count = item_count / divisor;
        }
        else
        {
            cout << "Error: You can't divide by 0!" << endl;
            result_box.item_count = 0;
        }

        return result_box;
    }
};



int main()
{
    StorageBox box1;
    StorageBox box2;

    int count;
    int divisor;

    cout << "Enter Number of Items: ";
    cin >> count;

    cout << "Enter divisor: ";
    cin >> divisor;

    box1.setItemCount(count);

    box2 = box1 / divisor;

    cout << "Items After Division: " << box2.getItemCount() << endl;

    return 0;
}
