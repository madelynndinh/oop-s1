#include "Invoice.h"

Invoice::Invoice(string Id){
    this->invoiceId = Id;
    this->dollarsOwed = 0;
};//Constructor that initializes an invoice with a given invoice ID.
void Invoice::addServiceCost(int costDollars)
{if (costDollars >0)
{
    dollarsOwed += costDollars;
}

};//Adds the cost of a service to the current invoice in dollars. Accepts only positive dollar amounts.

int Invoice::getDollarsOwed(){return this->dollarsOwed;}; //Returns the total amount owed in dollars for the services on the invoice.
string Invoice::getInvoiceId(){return this->invoiceId;};//Returns the unique identifier (ID) for the invoice.
