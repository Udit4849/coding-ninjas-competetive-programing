/*Reverse Word Wise
Reverse the given string word wise. That is, the last word in given string should come at 1st place, last second word at 2nd place and so on. Individual words should remain as it is.
Input format :
String in a single line
Output format :
Word wise reversed string in a single line
Constraints :
0 <= |S| <= 10^7
where |S| represents the length of string, S.
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome
Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/

/*#include <cstring>
void reverseStringWordWise(char input[]) {
    
    int size = strlen[input];
    for(int i=0;input[i]!='\0';i++){
		int j=size-1;
        int temp = input[i];
        input[i] = j;
        j = temp;
        j--;
    }
}*/

// the swap function comes underr this header file, o need to add now, since we added while calling the function
void reverse(char input[],int start, int end){
    while(start<end){
       std:: swap(input[start++],input[end--]);//instead of using swap stl function, u can also write the whole swap fuction
    }
}
void reverseStringWordWise(char input[]){
    int previousSpaceIndex=-1;
    int i=0;
    
    for(;input[i]!=0;i++){
        if(input[i]==' '){
            reverse(input,previousSpaceIndex+1,i-1);//we will make s reverse function
            previousSpaceIndex=i;
        }
    }
    reverse(input,previousSpaceIndex+1,i-1);
    reverse(input,0,i-1);
}