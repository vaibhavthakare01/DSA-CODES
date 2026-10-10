#include <iostream>
#include <string>
using namespace std;

struct Order
{
    int id, quantity;
    string item;
    Order* next;
};

Order* head = NULL;

// Add Order
void addOrder()
{
    Order* n = new Order;

    cout << "Enter Order ID: ";
    cin >> n->id;

    Order* t = head;

    while (t != NULL)
    {
        if (t->id == n->id)
        {
            cout << "Order ID already exists!\n";
            delete n;
            return;
        }
        t = t->next;
    }

    cout << "Enter Food Item: ";
    cin >> n->item;

    cout << "Enter Quantity: ";
    cin >> n->quantity;

    n->next = NULL;

    if (head == NULL)
        head = n;
    else
    {
        t = head;
        while (t->next != NULL)
            t = t->next;

        t->next = n;
    }

    cout << "Order Added Successfully!\n";
}

// Display Orders
void displayOrders()
{
    Order* t = head;

    if (t == NULL)
    {
        cout << "No Orders Available!\n";
        return;
    }

    cout << "\n--- CANTEEN ORDERS ---\n";

    while (t != NULL)
    {
        cout << "Order ID: " << t->id << endl;
        cout << "Food Item: " << t->item << endl;
        cout << "Quantity: " << t->quantity << endl;
        cout << "--------------------\n";

        t = t->next;
    }
}

// Delete Order
void deleteOrder()
{
    int id;
    cout << "Enter Order ID to delete: ";
    cin >> id;

    Order* t = head;
    Order* p = NULL;

    while (t != NULL && t->id != id)
    {
        p = t;
        t = t->next;
    }

    if (t == NULL)
    {
        cout << "Order Not Found!\n";
        return;
    }

    if (p == NULL)
        head = t->next;
    else
        p->next = t->next;

    delete t;
    cout << "Order Deleted Successfully!\n";
}

// Main Function
int main()
{
    int choice;

    do
    {
        cout << "\n=== CANTEEN ORDER MANAGEMENT ===\n";
        cout << "1. Add Order\n";
        cout << "2. Display Orders\n";
        cout << "3. Delete Order\n";
        cout << "4. Exit\n";
        cout << "Enter Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                addOrder();
                break;

            case 2:
                displayOrders();
                break;

            case 3:
                deleteOrder();
                break;

            case 4:
                cout << "Program Exited!\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    // Free memory
    while (head != NULL)
    {
        Order* t = head;
        head = head->next;
        delete t;
    }

    return 0;
}
