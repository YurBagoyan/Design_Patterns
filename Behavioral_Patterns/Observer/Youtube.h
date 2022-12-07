#ifndef YOUTUBE_H
#define YOUTUBE_H

#include <iostream>
#include <vector>

class Account
{
public:
	Account(const std::string username);
	~Account() = default;

public:
	std::string getName() const;
	void update(const std::string channelName, const size_t subCount) const;

private:
	std::string m_username;
};


class Channel
{
public:
	Channel(const std::string chanelName);
	~Channel() = default;

public:
	void Subscribe(Account& newAccount);
	void Unsubscribe(Account& deletedAccount);

private:
	void notifySubscribers() const;

private:
	std::string m_channelName;
	std::vector<Account*> subscribers;
	
};


#endif // YOUTUBE_H
