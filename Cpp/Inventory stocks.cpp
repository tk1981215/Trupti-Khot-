#include <iostream>
#include <vector>
using namespace std;

struct Item {
    int id;
    string name;
    int quantity;
    float price;
};

vector<Item> inventory;

// Function to add item
void addItem() {
    Item item;
    cout << "Enter Item ID: ";
    cin >> item.id;
    cout << "Enter Item Name: ";
    cin >> item.name;
    cout << "Enter Quantity: ";
    cin >> item.quantity;
    cout << "Enter Price: ";
    cin >> item.price;

    inventory.push_back(item);
    cout << "Item added successfully!\n";
}

// Function to display items
void displayItems() {
    if (inventory.empty()) {
        cout << "Inventory is empty!\n";
        return;
    }

    cout << "\nID\tName\tQuantity\tPrice\n";
    for (auto &item : inventory) {
        cout << item.id << "\t" << item.name << "\t" 
             << item.quantity << "\t\t" << item.price << endl;
    }
}

// Function to search item
void searchItem() {
    int id;
    cout << "Enter Item ID to search: ";
    cin >> id;

    for (auto &item : inventory) {
        if (item.id == id) {
            cout << "Item Found:\n";
            cout << "Name: " << item.name << "\nQuantity: " 
                 << item.quantity << "\nPrice: " << item.price << endl;
            return;
        }
    }
    cout << "Item not found!\n";
}

// Function to update stock
void updateItem() {
    int id;
    cout << "Enter Item ID to update: ";
    cin >> id;

    for (auto &item : inventory) {
        if (item.id == id) {
            cout << "Enter new quantity: ";
            cin >> item.quantity;
            cout << "Stock updated successfully!\n";
            return;
        }
    }
    cout << "Item not found!\n";
}

// Function to delete item
void deleteItem() {
    int id;
    cout << "Enter Item ID to delete: ";
    cin >> id;

    for (int i = 0; i < inventory.size(); i++) {
        if (inventory[i].id == id) {
            inventory.erase(inventory.begin() + i);
            cout << "Item deleted successfully!\n";
            return;
        }
    }
    cout << "Item not found!\n";
}

int main() {
    int choice;

    do {
        cout << "\n--- Inventory Management System ---\n";
        cout << "1. Add Item\n";
        cout << "2. Display Items\n";
        cout << "3. Search Item\n";
        cout << "4. Update Stock\n";
        cout << "5. Delete Item\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: addItem(); break;
            case 2: displayItems(); break;
            case 3: searchItem(); break;
            case 4: updateItem(); break;
            case 5: deleteItem(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
