#include <iostream>
//#include <stdio.h>
#include <string>
using namespace std;
//Із рядка символів видалити слова, номери яких парні. Серед слів з неперними номерами визначити найдовше.
string delete_words(string);
string Longest_Word(string);

int main(){
    cout << "Type some words: \n";
    string text;
    getline(cin, text);
    cout << "\nAfter deleting word with paired serial numbers: \n" << delete_words(text) << "\n";
	cout << "\nThe longest word amongst the remaining: \n" << Longest_Word(text) << "\n";
	return 0;
}

string delete_words(string text){
    text += " ";
    int serial_number = 0;
    bool New = false;
    double first, last; 
    for (int i = 0; i < text.length(); i++){
        if (!isspace(text[i])){
            first = i;
            last = text.find(" ", first);
            New = true;
            serial_number++;
        }
        if (serial_number % 2 == 0 && New){
            text.erase(first, last - first);
        }
        else if (New){
            i = last;
        }
        New = false;
    }
    text.pop_back();
    return text;
}

string Longest_Word(string text){
	string result_word, temp_str1;

	for (int x = 0; x < text.length(); x++){
		if (text[x] != ' '){
			result_word.push_back(text[x]);
		}
		else
			break;
	}

	for (int x = 0; x < text.length(); x++){
		if (text[x] != ' '){
			temp_str1.push_back(text[x]);
			if ((double)x + 1 == text.length() && temp_str1.length() > result_word.length()){
				result_word = temp_str1;
			}
		}
		else{
			if (temp_str1.length() > result_word.length()){
				result_word = temp_str1;
			}
			temp_str1.clear();
		}
	}
	return result_word;
}