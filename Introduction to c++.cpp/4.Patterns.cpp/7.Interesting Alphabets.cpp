/*Interesting Alphabets
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Input format :
N (Total no. of rows)
Output format :
Pattern in N lines
Constraints
0 <= N <= 26
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG  
*/


#include<iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=i;j<=n;j++){
            cout << (char)('A' + j - 1);
            // cout<<start;
             // start--;
        }
       cout<<endl;
    }
}