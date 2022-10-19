#include <iostream>
using namespace std;
class Time{
int h,m,s;

public:
void setTime(int a,int b,int c){ h=a;   m=b;  s=c; }

void showTime(){ cout<<"The time is = "<<h<<":"<<m<<":"<<s<<endl; }

void normalize(){
   m=m+s/60;
   s=s%60;
   h=h+m/60;
   m=m%60;
}

Time add(Time T){
   Time temp;
   temp.h=h+T.h;
   temp.m=m+T.m;
   temp.s=s+T.s;

   temp.normalize();
   return temp;
}
};
int main(){
    Time t1,t2,t3;

    t1.setTime(05,10,20);
    t1.showTime();

    t2.setTime(06,15,50);
    t2.showTime();

    cout<<endl<<"Addition of time is:"<<endl;
    t3=t1.add(t2);
    t3.showTime();
return 0;
}
