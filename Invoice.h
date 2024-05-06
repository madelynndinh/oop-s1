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

Invoice(string Id){
    this->invoiceId = Id;
    this->dollarsOwed = 0;
};//Constructor that initializes an invoice with a given invoice ID.
void addServiceCost(int costDollars)
{if (costDollars >0)
{
    dollarsOwed += costDollars;
}

};//Adds the cost of a service to the current invoice in dollars. Accepts only positive dollar amounts.

int getDollarsOwed(){return this->dollarsOwed;}; //Returns the total amount owed in dollars for the services on the invoice.
string getInvoiceId(){return this->invoiceId;};//Returns the unique identifier (ID) for the invoice.

};
#endif



