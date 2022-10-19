#include <iostream>
using namespace std;

class Counter{
    private:
    int count;

    public:
        Counter(){ count=0; }

        void Count(){ count++; }

       int get_count(){ return count; }
};

int main(){
Counter c1,c2;

cout<<"The initial value of count is : "<<c1.get_count()<<endl<<endl;

c1.Count();
cout<<"The value of count after the count function is invoked 1st time : "<<c1.get_count()<<endl<<endl;

c2.Count();
cout<<"The value of count after the count function is invoked 2nd time : "<<c2.get_count()<<endl<<endl;


return 0;
}
