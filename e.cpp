/* Create a class called Invoice that a hardware store might use to represent an invoice for an item sold at
the store. An Invoice should include four data members—a part number (type string), a part description
(type string), a quantity of the item being purchased (type int) and a price per item (type int). Your class
should have a constructor that initializes the four data members. Provide a set and a get function for
each data member. In addition, provide a member function named getInvoiceAmount that calculates the
invoice amount (i.e., multiplies the quantity by the price per item), then returns the amount as an int
value. If the quantity is not positive, it should be set to 0. If the price per item is not positive, it should
be set to 0. Write a test program that demonstrates class Invoice’s capabilities. */
#include<iostream>
#include <string>
using namespace std;

class Invoice
{
 public:
  Invoice( string, string, int, int );
  void setPartNr( string );
  string getPartNr();
  void setPartDespt(string);
  string getPartDespt();
  void setItemQuantity(int);
  int getItemQuantity();
  void setItemPrice(int);
  int getItemPrice();
  int getInvoiceAmt();
 private:
  string partNr;
  string partDespt;
  int itemQuantity;
  int itemPrice;
};
Invoice::Invoice( string number, string description, int quantity, int price )
{
 partNr=number;
 partDespt=description;
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
void Invoice::setPartNr( string number)
{
 if ( number.length() <= 25 )
  partNr = number;
 if ( number.length() > 25 )
 {
  partNr = number.substr( 0, 25 );
  cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
 }
}
void Invoice::setPartDespt(string description )
{
 if ( description.length() <= 25 )
  partDespt = description;
 if ( description.length() > 25 )
 {
  partDespt = description.substr( 0, 25 );
  cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partDescription to first 25 characters.\n" << endl;
 }
}
void Invoice::setItemQuantity(int quantity )
{
 if(quantity>0)
  itemQuantity=quantity;
 else
 {
  itemQuantity=0;
  cout<<"Initial quantity was invalid."<<endl;
 }
}
void Invoice::setItemPrice(int price )
{
 if(price>0)
  itemPrice=price;
 else
 {
  itemPrice=0;
  cout<<"Initial price was invalid."<<endl;
 }
}
string Invoice::getPartNr()
{
 return partNr;
}
string Invoice::getPartDespt()
{
 return partDespt;
}
int Invoice::getItemQuantity()
{
 return itemQuantity;
}
int Invoice::getItemPrice()
{
 return itemPrice;
}
int Invoice::getInvoiceAmt()
{
 return itemQuantity*itemPrice;
}
int main()
{
 Invoice Invoice1("ad23","hammer",5,40);
 Invoice Invoice2("cd32","hammers",17,3);
 cout << "Invoice1's initial part number is: "<< Invoice1.getPartNr()<< "\nand part description is: "<< Invoice1.getPartDespt()<<endl;
 cout<< "quantity per item is: "<< Invoice1.getItemQuantity()<< "\nprice per item is: "<< Invoice1.getItemPrice()<< endl;
 cout<<"Invoice1's total amount is: "<<Invoice1.getInvoiceAmt()<<endl<<endl;
 cout << "Invoice2's initial part number is: "<< Invoice2.getPartNr()<< "\nand part description is: "<< Invoice2.getPartDespt()<<endl;
 cout<< "quantity per item is: "<< Invoice2.getItemQuantity()<< "\nprice per item is: "<< Invoice2.getItemPrice()<< endl;
 cout<<"Invoice2's total amount is: "<<Invoice2.getInvoiceAmt()<<endl;
}

