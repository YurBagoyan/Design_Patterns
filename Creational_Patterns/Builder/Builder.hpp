#ifndef BUILDER_HPP
#define BUILDER_HPP

#include <iostream>
#include <vector>


class Car
{
public:
    Car() =default;
    ~Car() = default;

    void setDoors();
    void setTires();
    void setSeats();
    void setBody();

    void printCarParts() const;
    std::vector<std::string> m_parts;
}; // class Car

class IBuilder
{

public:
    virtual ~IBuilder() = default;

public:
    virtual void buildDoors() = 0;
    virtual void buildTires() = 0;
    virtual void buildSeats() = 0;
    virtual void buildBody() = 0;

    virtual Car getCar() const = 0;

}; // class ICarBuilder

class Director
{
public:
    Director();
    ~Director() = default;
    Director(IBuilder* ibuilder);

public:
    void setBuilder(IBuilder* newBuilder);
    void makeCar();
    Car getCar();

private: // Members
    IBuilder* builder{nullptr};

}; // class Director


#endif // BUILDER_HPP

