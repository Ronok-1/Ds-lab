#include<iostream>
using namespace std;
struct Student
   {
    int semester_completed,credits_completed;
    float cgpa;
    string id;
   };


int main ()
{
   Student s[10];
   s[1].id="22-34567-2";
   s[1].semester_completed=6;
   s[1].credits_completed=111;
   s[1].cgpa=3.75;

   s[2].id="20-34567-3";
   s[2].semester_completed=7;
   s[2].credits_completed=131;
   s[2].cgpa=3.50;

   s[4].id="19-34567-2";
   s[4].semester_completed=6;
   s[4].credits_completed=49;
   s[4].cgpa=3.15;

   s[3].id="23-34567-3";
   s[3].semester_completed=6;
   s[3].credits_completed=41;
   s[3].cgpa=3.75;

   s[5].id="22-34567-2";
   s[5].semester_completed=2;
   s[5].credits_completed=11;
   s[5].cgpa=3.44;


  s[6].id="22-34567-2";
  s[6].semester_completed=5;
  s[6].credits_completed=111;
  s[6].cgpa=3.75;

  s[7].id="22-34567-3";
  s[7].semester_completed=6;
  s[7].credits_completed=121;
  s[7].cgpa=3.75;

  s[8].id="22-34567-2";
  s[8].semester_completed=6;
  s[8].credits_completed=111;
  s[8].cgpa=3.75;

  s[9].id="21-23456-1";
  s[9].semester_completed=6;
  s[9].credits_completed=111;
  s[9].cgpa=3.75;

  s[10].id="22-34567-2";
  s[10].semester_completed=6;
  s[10].credits_completed=111;
  s[10].cgpa=3.79;

   cout<<"\n Scholarship Students (CGPA>=3.75):"<<endl;
    for(int i=1;i<10;i++)
      {
        if(s[i].cgpa>=3.75)
         {
            cout<<"student id:"<<s[i].id<<endl;
         }
      }
    cout<<"\n student with more than 50 credits:"<<endl;
      for(int i=1;i<10;i++)
       {
          if(s[i].credits_completed>50)
            {
        cout<<"student id:"<<s[i].id<<endl;
            }
       }
       cout<<"\n students with at least 2 semester and 28 credits:"<<endl;
      for(int i=1;i<10;i++)
       {
          if(s[i].credits_completed>=28 && s[i].semester_completed>=2)
            {
        cout<<"student id:"<<s[i].id<<endl;
            }
       }


 return 0;



}
