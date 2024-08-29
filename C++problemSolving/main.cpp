#include <iostream>

using namespace std;

int main(){
    int a, b, c, secondMax;

    // Input three integer
    std::cout << "Enter Three Integers Numbers: " << std::endl;
    // user Input
    std::cin >> a >> b >> c;

    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        secondMax = a;
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        secondMax = b;
    } else {
        secondMax = c;
    }
    // Output the second maximum number
    std::cout << "The second maximum number is: " << secondMax << std::endl;
    
    return 0;
}
