#include "std_lib_facilities.h"

int main() {

  cout<<"What's your name: ";
  string first_name;
  cin>>first_name;
  cout<<"Dear " << first_name <<","; 
  cout<<"\n   How are you? I'm fine, I miss you. I wanted to write to you to talk to you about something. Trust me, it's pretty important.";

  cout<<"\nWhat's your friend's name (can be imaginary if you don't have one): ";
  string friend_name;
  cin>>friend_name;
  cout<<"\n   So, have you seen " << friend_name <<" lately";

  cout<<"\nWhat's your friend's sex (m/f please): ";
  string friend_sex;
  cin>>friend_sex;

  if (friend_sex == "m")
    cout<<"\n   Please ask him to call me";
  else if (friend_sex == "f")
    cout<<"\n   Please ask her to call me";

  cout<<"\nAge: ";
  int age;
  cin>>age;

  if (age<0 || age>110)
    simple_error("you're kidding!");

  cout<<"\nI heard you just had your birthday and you're " <<age <<" ! ";
  

}
