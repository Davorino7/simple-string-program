#include <iostream>
#include <string>
using namespace std;

int main () {
    string people;

    cout << "\nName 3 people you adore:\n\n";
    cout << "ex: \nName1, Name2, Name3\n\n";
    cout << ":";
    getline (cin, people);

    int count = 0;
    for (char i : people) {
        char lower_i = tolower(i);
        if (lower_i == 'a' || lower_i == 'e' || lower_i == 'i' || lower_i == 'o' || lower_i == 'u') {
            count++;
        }
    }

    cout << "\nYou entered: "<< people << "\n";
    cout << "There are " << people.length() << " characters including spaces.\n";
    cout << "In total, there are " << count << " numbers of vowel characters (a, e, i, o, u).\n\n"; 
    
    for (int i = 0; i < people.length(); i++) {
        people[i] = toupper(people[i]);
    }
        cout << "In all caps: " << people;
        
    return 0;
        
}