#include <iostream>

class Gun
{
public:
	Gun() = default;
	~Gun() = default;
		 
	virtual std::string Fire() const {
		return "BANG!\n";
	}
};

class SubmachineGun
{
public:
	SubmachineGun() = default;
	~SubmachineGun() = default;

	std::string Fire() const {
		return "BANG! BANG! BANG!\n";
	}
};

class Adapter : public Gun
{
public:
	~Adapter() = default;

	Adapter(SubmachineGun* submachineGun) : m_submachineGun(submachineGun) { }
	
	std::string Fire() const override {
		std::cout << "Gun modified to Submachine gun!\n";
		return m_submachineGun->Fire();
	}

private:
	SubmachineGun* m_submachineGun;
};

void shoot(const Gun* first)
{
	std::cout << first->Fire();
}

int main()
{
	Gun* gun = new Gun;
	SubmachineGun* submachineGun = new SubmachineGun;

	shoot(gun);

	Adapter* adapter = new Adapter(submachineGun);
	shoot(adapter);

	delete adapter;
	delete submachineGun;
	delete gun;
}