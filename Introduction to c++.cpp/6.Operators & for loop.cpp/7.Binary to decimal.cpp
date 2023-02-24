/*Binary to decimal
Given a binary number as an integer N, convert it into decimal and print.
Input format :
An integer N in the Binary Format
Output format :
Corresponding Decimal number (as integer)
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
*/

#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int n,ans=0,pv=1,r;
    cin>>n;
    while(n>0){
        r=n%10;
        ans=pv*r+ans;
        pv=pv*2;
        n=n/10;
    }
    cout<<ans;
	
}
