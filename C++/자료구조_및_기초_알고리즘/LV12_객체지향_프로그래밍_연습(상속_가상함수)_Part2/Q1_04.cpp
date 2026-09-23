#include <iostream>
#include <string>
using namespace std;

class Authenticator
{
protected:
	string Username;
	string Password;
public:
	virtual void Authenticate(string u, string p) = 0;
};

class PasswordAuth : public Authenticator
{
public:
	void Authenticate(string u, string p) override
	{
		Username = u;
		Password = p;
		if (Username == "user123" && Password == "pass456")
		{
			cout << "PasswordAuth Login..... Success!!" << endl;
		}
	}
};

class BiometricAuth : public Authenticator
{
public:
	void Authenticate(string u, string p) override
	{
		Password = p;
		if (Password == "pass456")
		{
			cout << "BiometricAuth Login..... Success!!" << endl;
		}
	}
};

int main()
{
	PasswordAuth passAuth; BiometricAuth bioAuth;
	Authenticator* auths[] = { &passAuth, &bioAuth };
	for (int i = 0; i < 2; ++i)
		auths[i]->Authenticate("user123", "pass456");

	return 0;
}
