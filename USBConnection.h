#include <iostream>       
#include <stack>  

#ifndef USBCONNECTION_H
#define USBCONNECTION_H
 
using namespace std;  

class USBConnection
{
private:
     int ID;
     static int count;
     static stack<int> ids;
     USBConnection() {
        if (!ids.empty()) {
            ID = ids.top();
            
            ids.pop();
        } 
        else
        {
            ID = count++;
        }
    }

public:

    int get_id () const{return ID;};
    static USBConnection* CreateUsbConnection(){
    if (ids.size() < 3) 
    {
        cout<<ids.size()<<endl;
        
            return new USBConnection();
    } 
    else 
    {
            return nullptr;
    }
   
    
    }
   static int get_count (){return count;}
    ~USBConnection(){ids.push(ID);}
};

int USBConnection::count = 1;
stack<int> USBConnection::ids = stack<int>({3,2,1});



#endif // USBCONNECTION_H