#include <string>

class Contact
{
public:
	const std::string& getFirstName() const { return firstName; }
	const std::string& getLastName() const { return lastName; }
	const std::string& getNickame() const { return nickname; }
	const std::string& getPhoneNumber() const { return phoneNumber; }
	const std::string& getDarkestSecret() const { return darkestSecret; }

	void setFirstName(const std::string& input) { firstName = input; }
	void setLastName(const std::string& input) { lastName = input; }
	void setNickame(const std::string& input) { nickname = input; }
	void setPhoneNumber(const std::string& input) { phoneNumber = input; }
	void setDarkestSecret(const std::string& input) { darkestSecret = input; }

private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};
