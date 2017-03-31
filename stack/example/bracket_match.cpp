#include <iostream>
#include <stack>
#include <vector>

using std::cin;
using std::cout;
using std::endl;

bool is_left_bracket(char c) {
	return c == '[' || c == '{' || c == '(';
}

bool is_right_bracket(char c) {
	return c == ']' || c == '}' || c == ')';
}

bool matched(char l, char r) {
	return
		(l == '(' && r == ')') ||
		(l == '{' && r == '}') ||
		(l == '[' && r == ']' );
}

int main(void) {
	std::stack<char> openings;
	char symbol;
	bool is_matched = true;
	while(is_matched && (symbol = cin.get())!='\n' ) {
		if(is_left_bracket(symbol)) {
			openings.push(symbol);
		}
		if(is_right_bracket(symbol)) {
			if(openings.empty()) {
				cout << "Unmatched closing bracket" << symbol << endl;
				is_matched = false;
			} else {
				char match;
				match = openings.top();
				openings.pop();
				is_matched = matched(match, symbol);
				if(!is_matched) {
					cout << "Bad match" << symbol << match << endl;
				}
			}

		}
	}
	if(!openings.empty()) {
		cout << "Unmatched open bracket(s) detected." << endl;
	} else {
		cout << "Matched brackets." << endl;
	}
}