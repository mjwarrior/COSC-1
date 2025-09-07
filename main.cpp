#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

/*
 * Author: Marc Streeter
 * Date: 02/07/2025
 * Time: 1:35 am
 Objective Completed: Creat C++ program that collects and displays an academic
 profile.


 */

int main() {
  string fullName;
  string placeOfBirth;
  string major;
  string sumHeader = "Academic Profile Summary";

  double age;
  double gpa;

  cout << "/////////////////////////////////////////////////////////" << endl
       << "      Welcome to your Academic Profile Generator!" << endl
       << "   Please answer the following for a complete profile!" << endl
       << "/////////////////////////////////////////////////////////" << endl;

  cout << "Please enter your full name: ";
  getline(cin, fullName);

  cout << "Enter your age: ";
  cin >> age;
  cin.ignore();

  cout << "Enter your place of birth: ";
  getline(cin, placeOfBirth);

  cout << "Enter your GPA: ";
  cin >> gpa;
  cin.ignore();

  cout << "Enter your current major: ";
  getline(cin, major);

  cout << "Press enter to proceed....  ";
  cin.get();

  cout << "##### Academic Profile Summary #####" << endl;

  cout << left << setfill('-') << setw(20) << "Age" << "> " << fixed
       << setprecision(0) << age << endl;

  cout << left << setfill('-') << setw(20) << "Place of Birth" << "> "
       << placeOfBirth << endl;

  cout << left << setfill('-') << setw(20) << "GPA" << "> " << showpoint
       << fixed << setprecision(2) << gpa << endl;

  cout << left << setfill('-') << setw(20) << "Current Major" << "> " << major
       << endl;

  return 0;
}
