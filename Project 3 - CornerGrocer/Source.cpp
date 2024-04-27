#include "groceryitem.h"  
#include <iostream>       
#include <fstream>        
#include <set>            

using namespace std;

// Function to load inventory from a file into a set of GroceryItem.
// Uses the set find method to read item names until the loop reaches end of set.
// Creates an outfile to store item name and frequencies
// @param filename - name of the file being read from
// @returns - set of GroceryItem with frequencies found within the file 
set<GroceryItem> readItemList(string filename) {
    ifstream inFS(filename);
    set<GroceryItem> items;
    string name;

    while (getline(inFS, name)) {  
        GroceryItem* item = new GroceryItem(name);
        auto existingItem = items.find(*item); 

        if (existingItem != items.end()) {  
            GroceryItem updatedItem = *existingItem;  
            items.erase(existingItem);  
            updatedItem.addItem();
            items.insert(updatedItem);  
            delete item;  
        }
        else {
            item->addItem();  
            items.insert(*item);  
            delete item;  
        }
    }
    inFS.close();

    ofstream outFS("frequency.dat");
    for (GroceryItem item : items) {
        outFS << item.getName() << " " << item.getQuantity() << endl;
    }
    outFS.close();  

    return items;
}
int main() {
    set<GroceryItem> items = readItemList("inventory.txt");
    string input;
    int choice;

    do {
        cout << "1. Search for an item" << endl;
        cout << "2. Display all frequencies" << endl;
        cout << "3. Print histogram" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice (1-4): " << endl;

        try {
            cin >> choice;

            if (cin.fail()) {
                throw runtime_error("Invalid entry. Please enter a valid number.");
            }

            if (choice == 1) {  
                cout << "Enter item name: ";
                cin >> input;  
                bool found = false;  
                for (GroceryItem item : items) {  
                    if (item.getName() == input) {  
                        cout << item.getName() << " " << item.getQuantity() << endl;
                        found = true;  
                        break;  
                    }
                }
                if (!found) cout << "Item not found." << endl;  
            }
            else if (choice == 2) {  
                for (GroceryItem item : items) {  
                    cout << "Item: " << item.getName() << " Quantity: " << item.getQuantity() << endl;
                }
            }
            else if (choice == 3) {
                cout << "HISTOGRAM:" << endl;
                for (GroceryItem item : items) {
                    cout << item.getName() << ": ";
                    for (int i = 0; i < item.getQuantity(); ++i) {
                        cout << "*";
                    }
                    cout << endl;
                }
            }
            else if (choice == 4) {
                cout << "Backup File created. Goodbye." << endl;
            }
            else {
                cout << "Invalid choice. Please select numbers 1-4." << endl;
            }
        }
        catch (runtime_error& excpt) {
            cout << excpt.what() << endl;
            cin.clear();
            string remainingText;
            getline(cin, remainingText);
        }
    } while (choice != 4);

    return 0;
}