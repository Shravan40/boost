#include "boost/date_time/gregorian/gregorian.hpp"
#include <iostream>

using namespace std;
using namespace boost::gregorian;

int main(){
  string dob;
  cout << "Please enter your DOB in YY-MM-DD format : ";
  cin >> dob;
  date d(from_string(dob));
  date current = day_clock::local_day();

  int age_in_year = current.year() - d.year();
  int age_in_month = current.month() - d.month();
  int age_in_day = current.day() - d.day();

  if(age_in_month < 0) {
    age_in_year--;
    age_in_month = 12 + age_in_month-1;
  }

  cout << "You are " << age_in_year << "year and " << age_in_month << "month Old now \n";
  return 0;

}
