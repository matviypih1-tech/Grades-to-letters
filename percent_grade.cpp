#include <iostream>

#include <iomanip> // для заокруглення

int main(){

    std::cout << "Enter your marks from five subjects: " << std::endl;
    int a,b,c,d,e;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> d;
    std::cin >> e;

    if (a > 100 || b > 100 || c > 100 || d > 100 || e > 100){
        std::cout << "Bad news!";
        return 0;
    }
    else if (a < 0 || b < 0 || c < 0 || d < 0 || e < 0){
        std::cout << "Bad news!";
        return 0;
    }
    


    float avmark;


    avmark = (a + b + c + d + e) / 5.0;

    if (avmark >= 90){
        std::cout << "Average mark: " << std::fixed << std::setprecision(1) << avmark << "-> A" << std::endl;
    }
    else if (avmark >= 80){
        std::cout << "Average mark: " << std::fixed << std::setprecision(1) << avmark << "-> B" << std::endl;
    }
    else   if (avmark >= 75){
        std::cout << "Average mark: " << std::fixed << std::setprecision(1) << avmark << "-> C" << std::endl;
    }
    else    if (avmark >= 65){
        std::cout << "Average mark: " << std::fixed << std::setprecision(1) << avmark << "-> D" << std::endl;
    }
     else   if (avmark >= 60){
        std::cout << "Average mark: " << std::fixed << std::setprecision(1) << avmark << "-> E" << std::endl;
    }
    else{
        std::cout << "Average mark: " << std::fixed << std::setprecision(1) << avmark << "-> F" << std::endl;
    }

    return 0;

    

}