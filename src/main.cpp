
#include "wbison.h"

enum class symbol_class_enum {
    Unknown,
    Terminal,
    Nonterminal
};

using SymbolClass = symbol_class_enum;

class Token
{
    std::string content;
public:

    Token()
        : content{ }
    { }

    Token(char c)
        : content{ std::to_string(c) }
    { }

    Token(char* str)
        : content{ std::string(str) }
    { }

    Token(const char* str)
        : content{ std::string(str) }
    { }

    Token(const std::string& str)
        : content{ str }
    { }

    Token(std::string&& str)
        : content{ std::move(str) }
    { }

    std::string Content() const noexcept { return content; }
};


int main()
{
    const auto input = "1+2(3-1)a";
    const auto len = std::strlen(input);

    for (auto l = 0u; l < len; l++) {
        Token t(input[l]);

        std::cout << "t: " << t.Content() << '\n';
    }

    // const Token t1("1");

    // std::cout << "t1: " << t1.Content() << '\n';

    return EXIT_SUCCESS;
}
