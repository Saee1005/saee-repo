#include <iostream>
#include <cctype>

using namespace std;

void checkCharacterType(char character)
{
    if(isalpha(character)){
        cout<< "alphabet " << endl;

    }else if(isdigit(character)){
        cout << "numerical" << endl;

    } else {
        cout <<" special character "<< endl;
    }
}
    int main(){
        char character;
        cout << "enter a charater:";
        cin >> character;
        checkCharacterType(character);
        return 0;
        
    }

