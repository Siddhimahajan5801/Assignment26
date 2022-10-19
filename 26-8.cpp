#include <iostream>
using namespace std;

class Bank{
    private:
    int principle, r_o_i, year;
    float simple_interset;

    public:
        Bank (int p, int roi, int y){ principle=p; r_o_i=roi; year=y; }

        Bank (){ principle=0; r_o_i=0; year=0; }

        void show_details(){
           cout<<"The details of the customer : "<<endl;
           cout<<"Principle="<<principle<<"  Rate of interest="<<r_o_i<<"  Year="<<year<<endl;
        }

        void calculate_SI(){ simple_interset=(principle*r_o_i*year)/100.0;  }

        void display_SI(){  cout<<"Simple Interest="<<simple_interset<<endl<<endl; }

};

int main(){
    Bank ac1(1000,5,2), ac2(5000,5,6), ac3;

    ac1.show_details();
    ac1.calculate_SI();
    ac1.display_SI();

    ac2.show_details();
    ac2.calculate_SI();
    ac2.display_SI();

    ac3.show_details();
    ac3.calculate_SI();
    ac3.display_SI();
 }
