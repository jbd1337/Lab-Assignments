#include <iostream>
#include <assert.h>
using namespace std;

class Add_Me{
public:
	Add_Me();
	double add(double number1,double number2);
	double multiply(double number1,double number2);
};
Add_Me::Add_Me(){
}
double Add_Me::add(double number1,double number2){
	double answer = number1 + number2;
	return answer;
}
double Add_Me::multiply(double number1,double number2){
	double answer = 0;
	for(int i = 0; i < number2; i++){
		answer += number1;
	//	cout << answer;
	}
	return answer;
	//cout << answer;
}
int main(){
	Add_Me e;
	double number = e.add(1,2);
	double mult = e.multiply(1,2);	
	assert(number == 3);
	assert(mult == 2);
	mult = e.multiply(2,5);
	number = e.add(40,40);
	assert(mult == 10);
	assert(number == 80);
}
