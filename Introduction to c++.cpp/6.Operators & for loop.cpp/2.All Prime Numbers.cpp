/*All Prime Numbers
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :
Integer N
Output Format :
Prime numbers in different lines
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19
*/

// #include <iostream>
// using namespace std;

// int main(){
//   /*  int n;
//     cin>>n;
    
//     for(int i=2;i<=n;i++){
//         if
//     }*/
//     int n;
//     cin >> n;
//     for (int no=2; no<=n; no++){
//         bool prime = true ;
//         for(int div=2 ; div<no ; div++){
//             if(no%div == 0){
//                 prime = false ;
//                 break ;
//             }
//         }
//         if(prime){
//             cout << no << endl ;
//         }
//     }
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=2;i<=n;i++){
        for(int j=2;j<n;j++){
            if(i%j!=0){
                cout<<i;
            }
            else{
                cout<<"not prime";
            }
        }
    }
}
