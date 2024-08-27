
#include<iostream>
#include<sstream>
#include<vector>
#include<string>
using namespace std;

vector<string> split(string str, char Delimiter) {
    istringstream iss(str);
    string buffer; 

    vector<string> result;

    while (getline(iss, buffer, Delimiter)) {
			if(!buffer.empty()){
				result.push_back(buffer);
			}
    }

    return result;
}

int main(){
	string str;
	vector<string> result;

	getline(cin, str);

	result = split(str, ' ');

	cout << result.size() << endl;

	return 0;
}