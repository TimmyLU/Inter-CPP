#include <iostream>
#include <vector>
using namespace std;
vector<char> stack;
char input[100];
void reverse(char *input){
	stack.clear();
	while(*input != '\0'){
		stack.push_back(*input);
		input++;
	}
	while(stack.empty() != true){
		cout << stack.back();
		stack.pop_back();
	}
	cout << " ";
}
int main(){
	while(cin >> input){
		reverse(input);
	}
	return 0;
}