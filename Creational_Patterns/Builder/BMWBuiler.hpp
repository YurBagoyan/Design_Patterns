#ifndef BMW_BUILDER_HPP
#define BMW_BUILDER_HPP

#include "Builder.hpp"

class BMWBuilder : public IBuilder
{
public:
    BMWBuilder() =default;
    ~BMWBuilder() =default;

public: // IBuilder methods
    void buildDoors() override;
    void buildTires() override;
    void buildSeats() override;
    void buildBody() override;

    Car getCar() const override;


private: // Members
    Car bmw;

}; // class BMWBuilder

#endif // BMW_BUILDER_HPP