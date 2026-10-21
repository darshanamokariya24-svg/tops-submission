#include<iostream>
using namespace std;
class FoodOrder{
	public:
		int orderId;
    	string restaurantName;
    	bool isDelivered;

    void getData()
    {
        cout << "Enter Order ID: ";
        cin >> orderId;

        cin.ignore();

        cout << "Enter Restaurant Name: ";
        getline(cin, restaurantName);

        isDelivered = false;
    }


		void markDelivered() 
		{
			isDelivered=true;
			cout<<"Order Has been delivered successfully!"<<endl;
		}
		 void display()
    	{
        	cout << "\nOrder ID: " << orderId << endl;
        	cout << "Restaurant: " << restaurantName << endl;
        	cout << "Delivered: " << (isDelivered ? "Yes" : "No") << endl;
    	}
};
int main()
{
	FoodOrder food1;
	food1.getData();
	food1.markDelivered();
	food1.display();
}
