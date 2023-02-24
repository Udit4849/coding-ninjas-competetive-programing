/*Diamond of stars
Print the following pattern for the given number of rows.
Note: N is always odd.


Pattern for N = 5
..*
.***
*****
.***
..*


The dots represent spaces.



Input format :
N (Total no. of rows and can only be odd)
Output format :
Pattern in N lines
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
  */


     #include <iostream>
using namespace std;
int main()
{
	
	
	
	int i=1,j=1,n1,N,n2,spaces;
    
    cin>>N;
    n1 = (N+1)/2;
    n2 = n1-1;
    
    while(i<=n1){ 
        
        j=1;
        spaces  = 1;
        while(spaces<=n1-i){
            
            cout<<" ";
            spaces++;
        }
        
        j=1;
        while(j<=(2*i-1)){
            
            cout<<"*";
            j++;
        }
        
        i++;
        cout<<endl;
        
        
    }

    
    i=n2;
    while(i>=1){
        j=1,spaces=1;
        
        while(spaces<=n2-i+1){
            
            cout<<" ";
            spaces++;
        }
        j=1;
        while(j<=2*i-1){

            cout<<"*";
            j++;
        }
        
        i--;
        cout<<endl;
    }
    
    
}