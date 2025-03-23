#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

int main()

{
  string fname = " First Name";
  string lname = " Last Name";
  string Age = " Age";
  string Address = " City Address";
  string Number = " No.";

  vector < string > first_names;
  vector < string > last_names;
  vector < string > ages;
  vector < string > address;

  for (int i = 0; i < 4; i++) {
    string first_name, last_name, address_input;
    string age_input;

    std::cout << "No. " << i + 1 << " Enter first name: ";
    getline(cin, first_name);
    first_names.push_back(first_name);

    std::cout << "No. " << i + 1 << " Enter last name: ";
    getline(cin, last_name);
    last_names.push_back(last_name);

    std::cout << "No. " << i + 1 << " Enter age: ";
    getline(cin, age_input);
    ages.push_back(age_input);

    std::cout << "No. " << i + 1 << " Enter City address: ";
    getline(cin, address_input);
    address.push_back(address_input);

    std::cout << "\n";
  }

    int flen = fname.length();
    int llen = lname.size();
    int alen = Age.length();
    int adlen = Address.length();
    int nlen = Number.length();
    
    // finding the longest string in vector list and counting the number of char 

    int first_name_max = max_element(first_names.begin(), first_names.end(), []( const string &a, string &b) {
        return a.size() < b.size();
    })->size();
    int last_name_max = max_element(last_names.begin(), last_names.end(), []( const string &a, string &b) {
        return a.size() < b.size();
    })->size();
    int age_max = max_element(ages.begin(), ages.end(), []( const string &a, string &b) {
        return a.size() < b.size();
    })->size();
    int address_max = max_element(address.begin(), address.end(), []( const string &a, string &b) {
        return a.size() < b.size();
    })->size();
        


    // condition that will be use for flexible column title
    
    int new_flen, new_llen, new_alen, new_adlen;
    
    if (first_name_max > flen) {
        new_flen = first_name_max;
    }
    else
    {
        new_flen = fname.length();
    }
    if (last_name_max > llen) {
        new_llen = last_name_max;
    }
    else
    {
        new_llen = lname.length();
    }
    if (age_max > alen) {
        new_alen = age_max;
    }
    else
    {
        new_alen = Age.length();
    }
    if (address_max > adlen) {
        new_adlen = address_max;
    }
    else
    {
        new_adlen = Address.length();
    }
    
    
    
    string up_border = string(new_flen + new_llen + new_alen + new_adlen + nlen + 9, '-');
    string low_border = string(new_flen + new_llen + new_alen + new_adlen + nlen + 9, '-');

    std::cout << up_border << "\n";
    
    std::cout << Number << "|";
    
    
    // for loop for the column title
    
    
    for (int space = 0; space < new_flen - flen + 1; space++) {
        std::cout << " ";
        
    }

    std::cout << fname << "|";

    for (int space = 0; space < new_llen - llen + 1; space++) {
        std::cout << " ";
        
    }
    std::cout << lname << "|";

    for (int space = 0; space < new_alen - alen + 1; space++) {
        std::cout << " ";
        
    }

    std::cout << Age << "|";

    for (int space = 0; space < new_adlen - adlen + 1; space++) {
        std::cout << " ";
        
    }
    std::cout << Address << "|\n";


    
    std::cout << up_border << "\n";
    
  for (int i = 0; i < 4; i++)

  {
    {
      int number = to_string(i + 1).size();
      for (int space = 0; space < nlen - number; space++) {
        std::cout << " ";
      }
      std::cout << i + 1 << "|";
    }

    {
      int fname = first_names[i].size();

      for (int space = 0; space < new_flen - fname + 1; space++) {
        std::cout << " ";
      }

      std::cout << first_names[i] << "|";
    }

    {
      int lname = last_names[i].size();

      for (int space = 0; space < new_llen - lname + 1; space++) {
        std::cout << " ";
      }

      std::cout << last_names[i] << "|";
    }

    {
      int age = ages[i].size();

      for (int space = 0; space < new_alen - age + 1; space++) {
        std::cout << " ";
      }

      std::cout << ages[i] << "|";
    }

    {
      int address_len = address[i].size();

      for (int space = 0; space < new_adlen - address_len + 1; space++) {
        std::cout << " ";
      }

      std::cout << address[i] << "|";
    }

    std::cout << endl;

    
  }
  
  std::cout << low_border << "\n";

  return 0;

}
