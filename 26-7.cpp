#include <iostream>
using namespace std;

class Box{
   private:
    int l,b,h,volume;

    public:
   Box (int x,int y,int z){ l=x; b=y;  h=z; }

   Box (){ l=0; b=0; h=0; }

   void Volume(){ volume=l*b*h; }

   void displayData(){
       cout<<"The dimensions of the cuboid is "<<endl;
       cout<<"Length:"<<l<<" Breadth:"<<b<<" Height:"<<h<<endl;
       cout<<"The volume of cuboid is : "<<volume<<endl<<endl;
   }
};

int main(){
    class Box B1(10,12,14),B2(7,2,6),B3;

    B1.Volume();
    B1.displayData();

    B2.Volume();
    B2.displayData();

    B3.Volume();
    B3.displayData();

return 0;
}
