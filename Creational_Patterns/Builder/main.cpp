#include "BMWBuiler.hpp"

int main()
{
	
	Car myCar;
	
	std::cout << " ----- BMW ----- \n";
	BMWBuilder* bmwBuilder = new BMWBuilder();
	Director* director = new Director();
	director->setBuilder(bmwBuilder);
	director->makeCar();
	myCar = director->getCar();
	myCar.printCarParts();
	

	delete bmwBuilder;
	delete director;
}
