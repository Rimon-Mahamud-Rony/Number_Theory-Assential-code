// C++ program to implement division with large 
// number 
#include <bits/stdc++.h> 
using namespace std; 

// A function to perform division of large numbers 
string longDivision(string number, int divisor) 
{ 
	// As result can be very large store it in string 
	string ans; 
	
	// Find prefix of number that is larger 
	// than divisor. 
	int idx = 0; 
	int temp = number[idx] - '0'; 
	while (temp < divisor) 
	temp = temp * 10 + (number[++idx] - '0'); 
	
	// Repeatedly divide divisor with temp. After 
	// every division, update temp to include one 
	// more digit. 
	while (number.size() > idx) 
	{ 
		// Store result in answer i.e. temp / divisor 
		ans += (temp / divisor) + '0'; 
		
		// Take next digit of number 
		temp = (temp % divisor) * 10 + number[++idx] - '0'; 
	} 
	
	// If divisor is greater than number 
	if (ans.length() == 0) 
		return "0"; 
	
	// else return ans 
	return ans; 
} 

// Driver program to test longDivison() 
int main() 
{ 
	string number = "1248163264128256512"; 
	int divisor = 125;	 
	cout << longDivision(number, divisor);	 
	return 0; 
} 

//all the credit goes to the geeksforgeeks  
