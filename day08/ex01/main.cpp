#include "span.hpp"
# include <iostream>

#include<vector>


int main(){
    std::cout << "Test from subject:" << std::endl;
    span sp = span(5);
    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;


    std::cout << std::endl << "Other tests:" << std::endl;
    span sp1= span(3);
    try{
        sp1.addNumber(5);
        sp1.addNumber(8);
        sp1.addNumber(-4);
//        span.addNumber(-10);
    }
    catch (std::exception const & ex){
       std::cout << ex.what() << std::endl;
    }
    try{
        int min_sp = sp1.shortestSpan();
        std::cout << "The shortest span is " << min_sp << std::endl;
    }
    catch (std::exception const & ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        int max_sp = sp1.longestSpan();
        std::cout << "The longest span is " << max_sp << std::endl;
    }
    catch (std::exception const & ex){
        std::cout << ex.what() << std::endl;
    }


    std::cout << std::endl;
    span span_2 = span(10001);
    std::vector<int> v;
    for (int i = 0; i < 10200; i++){
        v.push_back(i);
    }
    try{
        span_2.addNumber(v.begin(), v.end());
    }
    catch (std:: exception & ex){
        std::cout << ex.what() << std::endl;
    }

    try{
        int min_sp_2 = span_2.shortestSpan();
        std::cout << "The shortest span is " << min_sp_2 << std::endl;
    }
    catch (std::exception const &ex){
        std::cout << ex.what() << std::endl;
    }
    try{
        int max_sp_2 = span_2.longestSpan();
        std::cout << "The longest span is " << max_sp_2 << std::endl;
    }
    catch (std::exception const &ex){
        std::cout << ex.what() << std::endl;
    }

    return 0;
};
 