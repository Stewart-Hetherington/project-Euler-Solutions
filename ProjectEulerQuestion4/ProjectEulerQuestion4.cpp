#include <iostream>
#include <string>
#include <sstream>

using namespace std;

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
                stringstream sum1(sum);
                
                int newSum = 0;
                sum1 >> newSum;
                if(newSum > greatest) {
                    greatest = newSum;
                }
            }
        }
    }
    std::cout<< greatest <<std::endl;
    system("pause");
    return 0;
}
