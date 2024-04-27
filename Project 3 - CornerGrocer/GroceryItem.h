#pragma once
#include <string>

using namespace std;

class GroceryItem {

public:
	//Constructor method that takes in the product name, quantity initialized to 0 
	//@param name:  the name of the product
	GroceryItem(string& name);

	//Constructor method that takes in the name and quantity
	//@param name: the name of the product
	//@param quantity: the quantity of the product
	GroceryItem(string& name, int quantity);

	//Getter method for accessing the product name
	//@returns: the product's name
	string getName() const;

	//Getter method that accesses the item quantity
	//@returns: the item's quantity
	int getQuantity() const;

	//Method for adding to the item quantity
	void addItem();

	//Method for subtracting from the item quantity
	void removeItem();

	//Operator for sorting names of items within the set
	bool operator<(const GroceryItem& other) const;

private:
	string name;
	int quantity;
};