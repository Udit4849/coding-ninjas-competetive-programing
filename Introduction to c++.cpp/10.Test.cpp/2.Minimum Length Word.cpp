/*Minimum Length Word
Given a string S (that can contain multiple words), you need to find the word which has minimum length.
Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.
Input Format :
String S
Output Format :
Minimum length word
Constraints :
1 <= Length of String S <= 10^5
Sample Input 1 :
*/


#include <cstring>
void minLengthWord(char input[], char output[]) {
  int len = strlen(input);
  int si = 0, ei = 0;
  int min_length = len, min_start_index = 0;
  while (ei <= len) {
    if (ei < len && input[ei] != ' ')                         // ei gets calculated for a word
      ei++;                      

    else {
      int curr_length = ei - si;
      if (curr_length < min_length) {
        min_length = curr_length;
        min_start_index = si;
      }
      ei++;
      si = ei;
    }
  }
  for (int i = 0; i < min_length; i++) {
    output[i] = input[min_start_index++];
  }
}
