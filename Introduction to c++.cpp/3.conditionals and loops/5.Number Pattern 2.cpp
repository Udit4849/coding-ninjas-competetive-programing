/*Number Pattern 2

Print the following pattern
Pattern for N = 4
* * * 1
* * 2 3
* 3 4 5
4 5 6 7

The dots represent spaces.

Input Format :
N (Total no. of rows)
Output Format :
Pattern in N lines
Sample Input :
5
Sample Output :
* * * * 1
* * * 2 3
* * 3 4 5
* 4 5 6 7
5 6 7 8 9
The dots represent spaces.*/

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
// 	int i=1;
//     while(i<=n){
//         int space=1;
//         while(space<=n-i){
//             cout<<" ";
//             space++;
//         }
//         int j=1,k=i;
//         while(j<=i){
//             cout<<k;
//             k++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int spaces;
        for(int spaces=1;spaces<=n-i;spaces++){
            cout<<" ";
        }
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
             k++;
        }
      
        cout<<endl;
    }
}
