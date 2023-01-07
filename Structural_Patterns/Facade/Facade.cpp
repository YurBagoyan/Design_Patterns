#include <iostream>


class SmartHome
{
public:
	void LightTurnOn()
	{
		m_light = true;
	}

	void LightTurnOff() {
		m_light = false;
	}

	bool IsLightOn()
	{
		return m_light;
	}

	void CurtainOpen() {
		m_curtain = true;
	}

	void CurtainClose() {
		m_curtain = false;
	}

	void GasTurnOn()
	{
		m_gas = true;
	}

	void GasTurnOff() {
		m_gas = false;
	}

	void SetTemperature(const double temperature) {
		m_temperature = temperature;
	}


	void AwayMode() {
		GasTurnOff();
		LightTurnOff();
		CurtainClose();
	}

	void HomeMode() {
		LightTurnOn();
		CurtainOpen();
		SetTemperature(24);
	}

	
private:
	double m_temperature;
	bool m_gas;
	bool m_light;
	bool m_curtain;
};


int main()
{
	SmartHome smartHome;


	// Go away
	smartHome.AwayMode();

	// Return home
	smartHome.HomeMode();




}