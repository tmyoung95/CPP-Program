#include "GroceryItem.h"
#include <string>

using namespace std;
GroceryItem::GroceryItem(string& name)
	: name(name), quantity(0) {}

GroceryItem::GroceryItem(string& name, int quantity)
	: name(name), quantity(quantity) {}

string GroceryItem::getName() const {
	return name;
}
int GroceryItem::getQuantity() const {
	return quantity;
}
void GroceryItem::addItem() {
	quantity++;
}
void GroceryItem::removeItem() {
	if (quantity > 0) {
		quantity--;
	}
}
bool GroceryItem::operator<(const GroceryItem& other) const {
	return name.compare(other.getName()) < 0;
}