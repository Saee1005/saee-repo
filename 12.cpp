#include<iostream>
using namespace std;
bool isVowel(char ch)
{
 ch = tolower(ch);
 if(ch=='a' || ch== 'e' || ch=='i' || ch=='o' || ch=='u')
 return true;

 return false;

}

int main(){

    char character;
    cout<< "enter a character: ";
    cin >> character;
     if (isalpha(character)) { // Check if character is an alphabet
        if (isVowel(character)) {
            cout << character << " is a vowel." << endl;
        } else {
            cout << character << " is a consonant." << endl;
        }
    } else {
        cout << "Invalid input. Please enter an alphabet." << endl;
    }

    return 0;
}