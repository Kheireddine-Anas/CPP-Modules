#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>

class RPN {
    private:
        std::stack <int> stack;
        bool isOperator( char c ) const;
        int performOperation ( char op, int a, int b ) const;

    public:
        RPN();
        RPN( const RPN &other );
        RPN& operator=( const RPN &other );
        ~RPN();
        void evaluate( const std::string& expression );

};

#endif
