//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mechard <mechard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 02:48:12 by mechard           #+#    #+#             */
/*   Updated: 2025/03/27 02:48:12 by mechard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

template <typename T>
struct Test
{
    T value;
    int id;
    
    Test(T v, int i) : value(v), id(i) {}
};

template <typename T>
bool operator<(const Test<T>& a, const Test<T>& b)
{
    return a.value < b.value;
}

template <typename T>
bool operator>(const Test<T>& a, const Test<T>& b)
{
    return b < a;
}

int main(int ac, char **av)
{
    // Test avec des entiers
    std::cout << BOLD YELLOW << "---------" << UNDERLINE YELLOW << "First part" << RESET << BOLD YELLOW << " : Integer---------" << RESET << std::endl;
    {
        // Test 1 : a < b
        std::cout << BOLD CYAN << "----------------Test 1----------------" << RESET << std::endl;
        int a = 12;
        int b = 24;
        ::swap(a, b);
        std::cout << BOLD BLUE << "a = " << BOLD YELLOW << a << RESET << ", " << BOLD BLUE << "b = " << BOLD YELLOW << b << RESET << std::endl;
        std::cout << BOLD BLUE << "min(a, b) = " << BOLD GREEN << ::min(a, b) << RESET << std::endl;
        std::cout << BOLD BLUE << "max(a, b) = " << BOLD GREEN << ::max(a, b) << RESET << std::endl;
    }
    {
        // Test 2 : a > b
        std::cout << BOLD CYAN << "----------------Test 2----------------" << RESET << std::endl;
        int a = 42;
        int b = 24;
        ::swap(a, b);
        std::cout << BOLD BLUE << "a = " << BOLD YELLOW << a << RESET << ", " << BOLD BLUE << "b = " << BOLD YELLOW << b << RESET << std::endl;
        std::cout << BOLD BLUE << "min(a, b) = " << BOLD GREEN << ::min(a, b) << RESET << std::endl;
        std::cout << BOLD BLUE << "max(a, b) = " << BOLD GREEN << ::max(a, b) << RESET << std::endl;
    }
    {
        // Test 3 : a = b
        std::cout << BOLD CYAN << "----------------Test 3----------------" << RESET << std::endl;
        int a = 42;
        int b = 42;
        Test<int> t1(a, 1995);
        Test<int> t2(b, 2002);
        ::swap(a, b);
        Test<int> minResult = ::min(t1, t2);
        Test<int> maxResult = ::max(t1, t2);
        std::cout << RESET << "["<< BOLD BLUE << "a : " << BOLD YELLOW  << "\"" << t1.value << "\"" << RESET << ", " << BOLD YELLOW << t1.id << RESET << "]" << RESET << " [" << BOLD BLUE << "b : " << BOLD YELLOW << "\"" << t2.value << "\"" << RESET << ", " << BOLD YELLOW << t2.id << RESET << "]" << std::endl;
        if (minResult.id == t2.id)
            std::cout << BOLD BLUE << "min(a, b) = " << BOLD GREEN << minResult.value << ", id : " << minResult.id << ", variable : b " << RESET << std::endl;
        else
            std::cout << BOLD RED << "La variable retournée n'est pas la première..." << RESET << std::endl;
        
        if (maxResult.id == t2.id)
            std::cout << BOLD BLUE << "max(a, b) = " << BOLD GREEN << maxResult.value << ", id : " << maxResult.id << ", variable : b " << RESET << std::endl;
        else
            std::cout << BOLD RED << "La variable retournée n'est pas la première..." << RESET << std::endl;
    }

    // Test avec des chaînes de caractères
    std::cout << BOLD YELLOW << "\n---------" << UNDERLINE YELLOW << "Second part" << RESET << BOLD YELLOW << " : String---------" << std::endl;
    
    {
        // Test 4 : c < d
        std::cout << BOLD CYAN << "----------------Test 4----------------" << RESET << std::endl;
        std::string c = "chaine12";
        std::string d = "chaine24";
        ::swap(c, d);
        std::cout << BOLD BLUE << "c = " << BOLD YELLOW << c << RESET << ", " << BOLD BLUE << "d = " << BOLD YELLOW << d << RESET << std::endl;
        std::cout << BOLD BLUE << "min(c, d) = " << BOLD GREEN << ::min(c, d) << RESET << std::endl;
        std::cout << BOLD BLUE << "max(c, d) = " << BOLD GREEN << ::max(c, d) << RESET << std::endl;
    }
    {
        // Test 5 : c > d
        std::cout << BOLD CYAN << "----------------Test 5----------------" << RESET << std::endl;
        std::string c = "chaine42";
        std::string d = "chaine24";
        ::swap(c, d);
        std::cout << BOLD BLUE << "c = " << BOLD YELLOW << c << RESET << ", " << BOLD BLUE << "d = " << BOLD YELLOW << d << RESET << std::endl;
        std::cout << BOLD BLUE << "min(c, d) = " << BOLD GREEN << ::min(c, d) << RESET << std::endl;
        std::cout << BOLD BLUE << "max(c, d) = " << BOLD GREEN << ::max(c, d) << RESET << std::endl;
    }
    {
        // Test 6 : c = d en utilisant Test pour vérifier quelle variable est retournée
        std::cout << BOLD CYAN << "----------------Test 6----------------" << RESET << std::endl;
        std::string c = "chaine42";
        std::string d = "chaine42";
        Test<std::string> s1(c, 1995);
        Test<std::string> s2(d, 2002);
        ::swap(c, d);
        Test<std::string> minResult = ::min(s1, s2);
        Test<std::string> maxResult = ::max(s1, s2);
        std::cout << RESET << "["<< BOLD BLUE << "c : " << BOLD YELLOW << "\"" << s1.value << "\"" << RESET << ", " << BOLD YELLOW << s1.id << RESET << "]" << RESET << " [" << BOLD BLUE << "d : " << BOLD YELLOW << "\"" << s2.value << "\"" << RESET << ", " << BOLD YELLOW << s2.id << RESET << "]" << std::endl;
        if (minResult.id == s2.id)
            std::cout << BOLD BLUE << "min(c, d) = " << BOLD GREEN << minResult.value << ", id : " << minResult.id << ", variable : d " << RESET << std::endl;
        else
            std::cout << BOLD RED << "La variable retournée n'est pas la seconde..." << RESET << std::endl;
        
        if (maxResult.id == s2.id)
            std::cout << BOLD BLUE << "max(c, d) = " << BOLD GREEN << maxResult.value << ", id : " << maxResult.id << ", variable : d " << RESET << std::endl;
        else
            std::cout << BOLD RED << "La variable retournée n'est pas la seconde..." << RESET << std::endl;
    }
    {
        if (ac != 3 && ac != 1)
            std::cout << "\nYou can try this exercise with two arguments !\n./ex00 <string1> <string2>" << std::endl;
        else if (ac == 3)
        {
            Test<std::string> string1(av[1], 1995);
            Test<std::string> string2(av[2], 2002);
            ::swap(string1, string2);
            Test<std::string> minResult = ::min(string1, string2);
            Test<std::string> maxResult = ::max(string1, string2);
            std::cout << BOLD BLUE << "string1 = " << BOLD YELLOW << string1.value << "\"" << RESET << ", " << BOLD YELLOW << string1.id << RESET << ", " << BOLD BLUE << "string2 = " << BOLD YELLOW << string2.value << "\"" << RESET << ", " << BOLD YELLOW << string2.id << RESET << std::endl;
            std::cout << BOLD BLUE << "min(string1, string2) = " << BOLD GREEN << BOLD GREEN << minResult.value << ", id : " << minResult.id  << RESET << std::endl;
            std::cout << BOLD BLUE << "max(string1, string2) = " << BOLD GREEN << BOLD GREEN << maxResult.value << ", id : " << maxResult.id  << RESET << std::endl;
        }
    }
    
    return 0;
}