#include <iostream>
#include <vector>

class SymbolTable
{

private:
    SymbolTable() =default;
    
public:
    ~SymbolTable() =default;
    static SymbolTable* getInstance();
    
public: // Methods
    inline void addSymbol(const std::string);
    void print();

private: // Members
    static SymbolTable* instance;
    std::vector<std::string> symbols;

};


SymbolTable* SymbolTable::getInstance()
{
    if (instance == nullptr) {
        instance = new SymbolTable();               
    }

    return instance;        
}

void SymbolTable::print()
{
    for (int i = 0; i < symbols.size(); ++i) {
            std::cout << symbols[i] << std::endl;          
    }
    std::cout << std::endl;
        
}

inline void SymbolTable::addSymbol(const std::string newSymbol)
{
    symbols.push_back(newSymbol);
        
}

SymbolTable* SymbolTable::instance = nullptr;

int main()
{
        SymbolTable* symbolTable_1 = SymbolTable::getInstance();

            symbolTable_1->addSymbol("abc");
                symbolTable_1->addSymbol("def");
                    symbolTable_1->addSymbol("44");
                        symbolTable_1->print();

                            SymbolTable*  symbolTable_2 = SymbolTable::getInstance();
                                symbolTable_2->print();

                                
}


