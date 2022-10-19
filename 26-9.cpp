#include <iostream>
using namespace std;

class Bill{
   private:
       int customer_ID,units;
       float bill;

   public:
        void get_data(int id, int x) { customer_ID=id; units=x; }

        void show_data(){ cout<<"Customer's ID="<<customer_ID<<"  Units used="<<units<<endl;  }

        void CalculateBill(){
           if (units<=100)
           {
               bill=1.20*units;
           }
           if (units>100 && units<=200)
           {
               bill=120+(units-100)*2.0;
           }
           if (units>200)
           {
               bill=120+200+(units-200)*3.0;
           }
        }
        void show_Bill(){ cout<<"Your Bill in rupees is : "<<bill<<"Rs"<<endl<<endl; }
};

int main (){
    Bill c1, c2, c3;

    c1.get_data(1125,85);
    c1.show_data();
    c1.CalculateBill();
    c1.show_Bill();

    c2.get_data(1126,120);
    c2.show_data();
    c2.CalculateBill();
    c2.show_Bill();

    c3.get_data(1127,250);
    c3.show_data();
    c3.CalculateBill();
    c3.show_Bill();

    return 0;
}
