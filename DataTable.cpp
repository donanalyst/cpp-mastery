#include <iostream>
#include <vector>

using namespace std;

int main() 

{
    vector<string> first_names;
    vector<string> last_names;
    vector<int> ages;
    vector<string> address;



    for (int i = 0; i < 5; i++) 
    {
        string first_name, last_name, address_input;
        int age_input;

        cout << "Enter first name: ";
        cin >> first_name;
        first_names.push_back(first_name);

        cout << "Enter last name: ";
        cin >> last_name;
        last_names.push_back(last_name);

        cout << "Enter age: ";
        cin >> age_input;
        ages.push_back(age_input);

        cout << "Enter address: ";
        cin >> address_input;
        address.push_back(address_input);
    }


    cout << "First Name Last Name Age Address" << endl;

    for (int i = 0; i < 5; i++) 
    {
        cout << first_names[i] << " " << last_names[i] << " " << ages[i] << " " << address[i] << endl;
    }




    return 0;


}