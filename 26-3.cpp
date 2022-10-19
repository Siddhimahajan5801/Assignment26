#include <iostream>
using namespace std;

class Cube {
   private:
   int side,volume;

   public:

   Cube (int x){  side=x; }

   Cube (){ side=0; }

   int get_side(){ return side; }

   void calculate_volume(){ volume=side*side*side; }

   int show_volume(){ return volume; }
};

int main(){
    Cube c1(5) ,c2(10), c3;

    c1.calculate_volume();
    cout<<"The volume of cube with side="<<c1.get_side()<<" is : "<<c1.show_volume()<<endl<<endl;


    c2.calculate_volume();
    cout<<"The volume of cube with side="<<c2.get_side()<<" is : "<<c2.show_volume()<<endl<<endl;

}
