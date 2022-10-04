#include "Builder.hpp"

void Car::setDoors()
{
    std::cout << "Doors built\n";
    this->m_parts.push_back("Doors = 4");
}

void Car::setTires()
{
    std::cout << "Tires built\n";
    this->m_parts.push_back("Tires = 4");
}

void Car::setSeats()
{
    std::cout << "Seats built\n";
    this->m_parts.push_back("Seats = 4");
}

void Car::setBody()
{
    std::cout << "Body built\n";
    this->m_parts.push_back("Body");
}

/// Car
void Car::printCarParts() const
{
    std::cout << "\n\nYour car have:\n";
    for (int i = 0; i < m_parts.size(); ++i) {
        std::cout << m_parts.at(i) << std::endl;
    }

    std::cout << "\n\n";
}


/// Director
Director::Director()
    : builder{ nullptr }
{

}

Director::Director(IBuilder* ibuilder)
    : builder{ ibuilder }
{

}


void Director::setBuilder(IBuilder* newBuilder)
{
    builder = newBuilder;    
}

void Director::makeCar()
{
    builder->buildDoors();
    builder->buildTires();
    builder->buildSeats();
    builder->buildBody();
}

Car Director::getCar()
{
    return builder->getCar();
}

