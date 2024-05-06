#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
using namespace std;
// The Invoice class can be used to manage billing information for various services, 
// track the total amount owed, and retrieve the invoice ID for record-keeping purposes.
//represents a billing invoice with functionality to manage and calculate the total amount owed for various services.
class Invoice{
    private:
    string invoiceId; //A unique identifier for the invoice.
    int dollarsOwed ;//The total amount owed in dollars for services.
    public:

Invoice(string Id);
void addServiceCost(int costDollars);//Adds the cost of a service to the current invoice in dollars. Accepts only positive dollar amounts.

int getDollarsOwed(); //Returns the total amount owed in dollars for the services on the invoice.
string getInvoiceId();//Returns the unique identifier (ID) for the invoice.

};
#endif



