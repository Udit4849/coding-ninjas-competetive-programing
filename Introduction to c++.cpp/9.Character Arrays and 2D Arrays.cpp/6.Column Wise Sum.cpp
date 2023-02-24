/*Column Wise Sum
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
Input Format :
First and only line of input contains M and N, followed by M * N space separated integers representing the elements in the 2D array.
Output Format :
Sum of every ith column elements (separated by space)
Constraints :
1 <= M, N <= 10^3
Sample Input :
4 2 1 2 3 4 5 6 7 8
Sample Output :
16 20
*/


#include<iostream>
using namespace std;

int main(){
  	int rows, cols;
    cin>>rows>>cols;
    int mat[rows][cols];
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin>>mat[i][j];
        }
    }
    for(int i = 0; i < cols; i++){
        int sum = 0;
        for(int j = 0; j < rows; j++){
            sum += mat[j][i];
        }
        cout<<sum<<" ";
    }
}

