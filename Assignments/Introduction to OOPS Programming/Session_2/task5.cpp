#include <iostream>
#include <string>
using namespace std;

struct OrderDetails
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    // Constructor takes an object as a parameter
    FoodOrder(OrderDetails details)
    {
        orderId = details.orderId;
        restaurantName = details.restaurantName;
        isDelivered = details.isDelivered;
    }

    void markDelivered()
    {
        isDelivered = true;
        cout << "Order delivered successfully!" << endl;
    }

    void display()
    {
        cout << "Order ID: " << orderId << endl;
        cout << "Restaurant: " << restaurantName << endl;
        cout << "Delivered: "
             << (isDelivered ? "Yes" : "No") << endl;
    }
};

int main()
{
    OrderDetails details = {101, "Dominos", false};

    FoodOrder f1(details);

    f1.display();

    f1.markDelivered();

    cout << "\nAfter Delivery:" << endl;
    f1.display();

    return 0;
}
