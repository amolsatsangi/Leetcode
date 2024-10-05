/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int begin{0}, mid{-1}, end = n;
        
        while(begin<=end){
            mid = (begin +end)/2;
            int predict = guess(int(mid));
            if(predict == -1)
                end = mid -1;
            else if(predict ==0 )
                return int(mid);
            else
                begin = mid+1;
        }
    return int(mid);
    }
};
