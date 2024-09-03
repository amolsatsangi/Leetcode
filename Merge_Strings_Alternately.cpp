/******************************************************
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.

 

Example 1:

Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r
Example 2:

Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s
Example 3:

Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d
 

Constraints:

1 <= word1.length, word2.length <= 100
word1 and word2 consist of lowercase English letters.

*****************************************/


class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n_w1 = word1.size();
        int n_w2 = word2.size();
        string f_word = "";
        int i {0}, j{0};
        while(i<n_w1 && j<n_w2){
            f_word += word1[i];i++;
            f_word += word2[j];j++;
            cout << f_word <<endl;
            if(i == n_w1 or j == n_w2)
                break;
        }
        if(i!=n_w1){
            for (;i<n_w1;i++){
                f_word += word1[i];
            }
        }

        if(j!=n_w2){
            for (;j<n_w2;j++){
                f_word += word2[j];
            }
        }

    return  f_word;
    }
};
