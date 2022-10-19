#include <iostream>
using namespace std;

class Date {
    private:
    int day,month,year;

    public:
    Date (){ day=0; month=0; year=0; }

    Date (int d, int m, int y){ day=d; month=m; year=y; }

    void display_Date(){ cout<<"Day:month:year = "<<day<<":"<<month<<":"<<year<<endl; }
};

int main(){
  class Date d1(25,10,2022),d2(30,9,2021),d3;

   d1.display_Date();
   d2.display_Date();
   d3.display_Date();

return 0;
}
