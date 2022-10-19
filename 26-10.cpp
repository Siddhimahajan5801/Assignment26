#include <iostream>
using namespace std;

class StaticCount{
    private:
    static int count;

    public:
        StaticCount(){ count=0; }

        void Count(){ count++; }

       static int get_count(){ return count; }
};

int StaticCount :: count;

int main(){
StaticCount c1;

cout<<"The initial value of count is : "<<c1.get_count()<<endl;
c1.Count();
c1.Count();
c1.Count();
cout<<"The value of count after the count function is invoked : "<<StaticCount::get_count()<<endl;



return 0;
}
