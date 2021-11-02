#include <string>

class Contact
{
public:
	const std::string& getFirstName();
	const std::string& getLastName();
	const std::string& getNickame();
	const std::string& getPhoneNumber();
	const std::string& getDarkestSecret();

	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setNickame(const std::string& nickname);
	void setPhoneNumber(const std::string& phoneNumber);
	void setDarkestSecret(const std::string& darkestSecret);

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};
