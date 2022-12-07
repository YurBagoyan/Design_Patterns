#include "Youtube.h"

Channel::Channel(std::string channelName)
	: m_channelName(channelName)
{
}

void Channel::Subscribe(Account& newAccount)
{

	subscribers.push_back(&newAccount);
	std::cout << newAccount.getName() << " subscribed to " << m_channelName << std::endl;

	if (subscribers.size() % 10 == 0) {
		notifySubscribers();
	}
}

void Channel::Unsubscribe(Account& deletedAccount)
{
	subscribers.pop_back();
}

void Channel::notifySubscribers() const
{
	for (int i = 0; i < subscribers.size(); ++i) {
		subscribers[i]->update(m_channelName, subscribers.size());
	}
}

Account::Account(const std::string username)
	: m_username(username)
{

}

std::string Account::getName() const
{
	return m_username;
}

void Account::update(const std::string channcelName, const size_t subCount) const
{
	std::cout << this->m_username << " noticed that " << channcelName << " have already " << subCount << " subscribers!!!" << std::endl;
}


