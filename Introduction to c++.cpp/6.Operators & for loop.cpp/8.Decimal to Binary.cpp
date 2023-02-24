/*Decimal to Binary
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. 
So you may want to take the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that
 function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's.
  Implement your own "pow" function to work for non-float data types.

Input format :
Integer N
Output format :
Corresponding Binary number (long)
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
*/




// #include<iostream>
// #include<vector>
// using namespace std;

// int main() {
// 	// Write your code here
    
//     int n;
//     cin>>n;
    
//     if(n == 0) {
//         cout<<0;
//         return 0;
//     }
//     vector<int> ans;
    
//     while(n > 0) {
//         int lastDigit;
//         if(n % 2 == 0) lastDigit = 0;
//         else if(n % 2 == 1) lastDigit = 1;
        
//         ans.push_back(lastDigit);
        
//         n = n / 2;
//     }
    
//     for(int i = ans.size() - 1; i >= 0; i--) {
//         cout<<ans[i];
//     }
    
    #include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    long int bin=0,pow=1;
    while(n>0){
     int last=n%2;
        bin+=last*pow;
        pow *= 10;
        n=n/2;
    }
    cout<<bin;	
    return 0;
	
}
