#include<iostream>
#include<stack>
using namespace std;

// balancedparenthesis
bool isbalanced(char arr[100]){//"({{()]))"

	stack<char> s;

	for(int i=0;arr[i]!='\0';i++){

	char ch=arr[i];//'}'
	switch(ch){
		case '(':s.push(ch);
		break;
		case '[':s.push(ch);
		break;
		case '{':s.push(ch);
		break;
		case '}':if(!s.empty() and s.top()=='{'){
			s.pop();
		}
		else{
			return false;
		}

		break;
		case ']':if(!s.empty() and s.top()=='['){
			s.pop();
		}
		else{
			return false;
		}


		break;

		case ')':if(!s.empty() and s.top()=='('){
			s.pop();
		}
		else{
			return false;
		}

	}

}

if(s.empty()){
	return true;
}
return false;



}



int main(){


	char arr[100]="({{()}][({})])";

	if(isbalanced(arr)==true){
		cout<<"balanced"<<endl;
	}
	else{
		cout<<"not balanced"<<endl;

	}

	


	return 0;
}