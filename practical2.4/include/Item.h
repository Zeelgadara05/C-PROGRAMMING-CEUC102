#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include<string>
#include <iomanip>

using namespace std;



class Item
{
    public:
        Item()
        {
            itemID = 0;
            itemName = "abc";
            price = 0.0;
            quantity = 0;
        }

        Item(int id,string name,double p,int q)
        {
            itemID=id;
            itemName=name;
            price=p;
            quantity=q;
        }

        void addStock(int qut)
        {
            if (qut>0)
            {
                quantity+=qut;
                cout<<"Stock updated successfully. New quantity: "<<quantity<<endl;
            }
            else
            {
                cout<<"Error: Restock amount must be positive."<<endl;
            }
        }

        void sellItem(int qut)
        {
            if(qut>quantity)
            {
                cout<<"Error: Insufficient stock! Only"<<quantity<<"left."<< endl;
            }
            else if(qut<=0)
            {
                cout<<"Error: Sale amount must be positive.\n";
            }
            else
            {
                quantity-=qut;
                cout<<"Sale successful! Remaining stock:"<<quantity<<endl;
            }
        }

        void display() const
        {
            cout<<left<<setw(10)<<itemID<<setw(20)<<itemName<<"Rs"<<setw(9)<<fixed<<setprecision(2)<<price<<quantity<<endl;
        }

        int getID() const
        {
            return itemID;
        }

    protected:

    private:
        int itemID;
        string itemName;
        double price;
        int quantity;
};

#endif // ITEM_H
