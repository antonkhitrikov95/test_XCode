#include "main.h"

int main ()
{
    user_cout_function(user_sum_fuction(5, 5));
    user_cout_function(user_sum_fuction(5.5, 5.2));

    user_cout_function(user_multiply_function(7,8));
    user_cout_function(user_multiply_function(7.3, 8.4));
}

void user_cout_function (int arg)
{
    std::cout << "Test console application v1.0"<< std::endl;
    std::cout << arg << std::endl;
}
void user_cout_function (double arg)
{
    std::cout << "Test console application v1.0"<< std::endl;
    std::cout << arg << std::endl;
}
