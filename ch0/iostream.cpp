#include <iostream>

int main(){
    int v1 = 0, v2 = 0;
    int sum = 0;
    int value = 0;

    while (v2 <= 10){
        v1 += v2;
        ++v2;
    }

    std::cout << " The result of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
    
    while (std::cin >> value){
        sum += value;
    }
    std::cout << sum << std::endl;
    return 0;
}
