/*Check Permutation
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
Permutations of each other
Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.

Example: 
str1= "sinrtg" 
str2 = "string"

The character of the first string(str1) can be rearranged to form str2 and hence we can say that the given strings are a permutation of each other.
Input Format:
The first line of input contains a string without any leading and trailing spaces, representing the first string 'str1'.

The second line of input contains a string without any leading and trailing spaces, representing the second string 'str2'.
Note:
All the characters in the input strings would be in lower case.
Output Format:
The only line of output prints either 'true' or 'false', denoting whether the two strings are a permutation of each other or not.

You are not required to print anything. It has already been taken care of. Just implement the function. 
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abcde
baedc
Sample Output 1:
true
Sample Input 2:
abc
cbd
Sample Output 2:
false
*/



// bool isPermutation(char input1[], char input2[]) {
//     bool checkPermut = true;
//     if(strlen(input1)!=strlen(input2))
//     {	
//         checkPermut = false;
//         return checkPermut;
//     }
    
//     int frequency[256] = {0};
//     for(int i =  0;input1[i]!='\0';i++)
//     {	
//         int ASCII_CODE = input1[i];
        
//         frequency[ASCII_CODE]++;
        
//     }
    
//     for(int i = 0;input2[i]!='\0';i++)
//     {
//         int ASCII_CODE = input2[i];
//         frequency[ASCII_CODE]--;
//     }
    
    
//     for(int i = 0;i<256;i++)
//     {
//     if(frequency[i]!=0)
//     {
//         checkPermut = false;
//         return checkPermut;
//     }
//     }
    
//        return checkPermut; 
// }


#define NO_OF_CHARS 256
bool isPermutation(string str1, string str2) {

  // all values as 0
  int count1[NO_OF_CHARS] = {0};
  int count2[NO_OF_CHARS] = {0};
  int i;

  // For each character in input strings,
  // increment count in the corresponding
  // count array
  for (i = 0; str1[i] && str2[i]; i++) {
    count1[str1[i]]++;      // ****it is a frequency array which tell u how many times an element occurs
    count2[str2[i]]++;
  }

  // If both strings are of different length.
  // Removing this condition will make the
  // program fail for strings like "aaca"
  // and "aca"
  if (str1[i] || str2[i])
    return false;

  // Compare count arrays
  for (i = 0; i < NO_OF_CHARS; i++)
    if (count1[i] != count2[i])
      return false;

  return true;
}
