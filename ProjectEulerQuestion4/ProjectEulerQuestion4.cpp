#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/*A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
 *Find the largest palindrome made from the product of two 3-digit numbers.
 *
 *Author: Stewart Hetherington.
 */
int main()
{
    int greatest = 0;
    for(int i=999; i>900; i--) {
        for (int j=999; j>900; j--) {
            std::string sum = std::to_string( i * j);
            std::string reverse ="";
            
            for (int k= sum.length()-1; k >= 0; k--) {
                reverse += sum.at(k);
            }
            if (reverse.compare(sum) == 0) {
                
                int palindrome;
                std::stringstream(sum) >> palindrome;
                if(palindrome > greatest) {
                    greatest = palindrome;
                }
            }
        }
    }
    std::cout<< greatest <<std::endl;
    system("pause");
    return 0;
}
