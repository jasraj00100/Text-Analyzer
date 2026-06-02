// Terxt Analyzer

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    string text;
    // taking input(sentences) from the user
    cout << "Enter your text : ";
    // getline() - Read everything until Enter is pressed.
    getline(cin,text);

    // this will change any upper case letter to lower case
    transform(text.begin(), text.end(), text.begin(), ::tolower);

    int count = 0;
    int vowel_count = 0;
    int count_consonants = 0;
    string consonants = "bcdfghjklmnpqrstvwxyz";

    cout << "size of text : " << text.size() << endl;

    for(int i = 0; i<text.size();i++){
        if(text[i] == ' '){
            count++;
        }
        if(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u'){
            vowel_count++;
        }
        for(int j = 0; j<consonants.size();j++){
            if(consonants[j] == text[i]){
                count_consonants++;
            }
        }
    }

    cout << "No of Words in the text is " << count + 1 << endl;
    cout << "No of Vowel in the text is " << vowel_count << endl;
    cout << "No of Consonants in the text is " << count_consonants << endl;
    

    return 0;
}
