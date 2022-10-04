#include "BMWBuiler.hpp"

void BMWBuilder::buildDoors()
{
    bmw.setDoors();
    std::cout << "The doors set\n";
}

void BMWBuilder::buildTires()
{
    bmw.setTires();
    std::cout << "The tires set\n";
}

void BMWBuilder::buildSeats()
{
    bmw.setSeats();
    std::cout << "The seats set\n";
}

void BMWBuilder::buildBody()
{
    bmw.setBody();
    std::cout << "The body set\n";
}

Car BMWBuilder::getCar() const
{
    return bmw;
}

