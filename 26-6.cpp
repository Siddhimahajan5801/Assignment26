#include <iostream>
using namespace std;

class Student {
   private:
       int roll_no;
       char grade;

   public:
       Student (int x, char y){
          roll_no=x;
          grade=y;
          }

       Student (){ roll_no=0; grade='0'; }

       void display_details(){
         cout<<endl<<"The details of the student is :";
         cout<<endl<<"Roll no.= "<<roll_no<<"  grade="<<grade<<endl;
       }
};

int main (){
    Student s1(1,'A'), s2(2,'B'),s3;

    s1.display_details();
    s2.display_details();
    s3.display_details();

    return 0;
}
