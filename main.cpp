#include <iostream>

int main(){

    char op;
    double num1, num2, num3, result;

    std::cout <<"***********CALCULATOR***********" << '\n';

    std::cout <<"Enter either (+ - * /): ";
    std::cin >> op;

    std::cout <<"Enter 1st number: ";
    std::cin >> num1;

    std::cout <<"Enter 2nd number: ";
    std::cin >> num2;


    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Your result is: " << result;
            break;

        case '-':
            result = num1 - num2;
            std::cout << "Your result is: " << result;
            break;

        case '*':
            result = num1 * num2;
            std::cout << "Your result is: "<< result;
            break;

        case '/':
            result = num1 / num2;
            std::cout << "Your result is: " << result;
            break;

        default:
            std::cout <<"ERROR!!!";
    }



    std::cout <<'\n' <<"********************************";
    return 0;

}