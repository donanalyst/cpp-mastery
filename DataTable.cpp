#include <iostream>
#include <vector>

using namespace std;

int main() 

{   
    string fname = "First Name";
    string lname = " Last Name";
    string Age = " Age";
    string Address = " City Address";
    
    vector<string> first_names;
    vector<string> last_names;
    vector<string> ages;
    vector<string> address;



    for (int i = 0; i < 4; i++) 
    {
        string first_name, last_name, address_input;
        string age_input;

        cout << i << " Enter first name: ";
        cin >> first_name;
        first_names.push_back(first_name);

        cout << i << " Enter last name: ";
        cin >> last_name;
        last_names.push_back(last_name);

        cout << i << " Enter age: ";
        cin >> age_input;
        ages.push_back(age_input);

        cout << i << " Enter City address: ";
        cin >> address_input;
        address.push_back(address_input);
        
        cout << endl;
    }
    
    
    

    int flen = fname.length();
    int llen = lname.size();
    int alen = Age.length();
    int adlen = Address.length();
    
    
    
    
    
    cout << "First Name|" << " Last Name|" << " Age|" << " City Address|\n";
    for (int i = 0; i < 4; i++) 
    
    {   
        {
            int fname = first_names[i].size();
    
            for (int space = 0; space < flen - fname; space++)
            {
                cout << " ";
            }
            
            cout << first_names[i] << "|";
        }

        {
            int lname = last_names[i].size();
    
            for (int space = 0; space < llen - lname; space++)
            {
                cout << " ";
            }
            
            cout << last_names[i]<< "|";
        }
        
        {
            int age = ages[i].size();
    
            for (int space = 0; space < alen - age; space++)
            {
                cout << " ";
            }
            
            cout << ages[i]<< "|";
        }
        
        {
            int address_len = address[i].size();
    
            for (int space = 0; space < adlen - address_len; space++)
            {
                cout << " ";
            }
            
            cout << address[i]<< "|";
        }

        cout << endl;
    }

    return 0;

}