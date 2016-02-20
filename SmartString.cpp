#include <iostream>
#include <vector>
#include <string>
using namespace std;
// string included for taking input fromuser only
class SmartString {
	// vector storng input string character by character
	vector<char> temp;
public:
	void append(string input){
		for (int i = 0; i < input.size(); i++){
			temp.push_back(input[i]);
		}
	}
	char getcharat(int i){
		if (i>temp.size() - 1){
			return NULL;
		}
		return temp[i-1];

	}
	int length(){
		return temp.size();
	}
	void currstring(){
		
		for (int i = 0; i < temp.size(); i++){
			cout << temp[i];
		}
	}
};


int main(){
	SmartString ssObj;
	string in;
	int indexval;
	// Takinf input from user
	cout << "Input your string: ";
	cin >> in;
	ssObj.append(in);
	cout << "\n Size of String is " << ssObj.length();
	cout << "\nEnter Index Number: ";
	cin >> indexval;
	char c = ssObj.getcharat(indexval);
	if (c != NULL){
		cout << "\nChar at " << indexval << " is :" << c<<endl;

	}
	else{
		cout << "Index greater than size\n";

	}
	// Second String for append
	cout << "Enter next String: ";
	cin >> in;
	ssObj.append(in);
	cout << "Appended String: ";
	ssObj.currstring();
	cout << "\n Size of String is " << ssObj.length();
	cout << "\nEnter Index Number: ";
	cin >> indexval;
	 c = ssObj.getcharat(indexval);
	if (c != NULL){
		cout << "\nChar at " << indexval << " is :" << c << endl;

	}
	else{
		cout << "Index greater than size\n";

	}
	
	return 0;
}