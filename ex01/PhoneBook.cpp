/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:07:34 by lebojo            #+#    #+#             */
/*   Updated: 2023/12/04 01:06:27 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void print(std::string str)
{
	std::cout << str << "\n";
}

class Contact
{
private:
	std::string	FirstName;
	std::string	LastName;
	std::string	NickName;
	std::string	PhoneNumber;
	std::string	DarkestSecret;
public:
	void SetFirstName(std::string NewFirstName)
	{
		FirstName = NewFirstName;
	}
	std::string GetFirstName()
	{
		return FirstName;
	}

	void SetLastName(std::string NewLastName)
	{
		LastName = NewLastName;
	}
	std::string GetLastName()
	{
		return LastName;
	}

	void SetNickName(std::string NewNickName)
	{
		NickName = NewNickName;
	}
	std::string GetNickName()
	{
		return NickName;
	}

	void SetPhoneNumber(std::string NewPhoneNumber)
	{
		PhoneNumber = NewPhoneNumber;
	}
	std::string GetPhoneNumber()
	{
		return PhoneNumber;
	}

	void SetDarkestSecret(std::string NewDarkestSecret)
	{
		DarkestSecret = NewDarkestSecret;
	}
	std::string GetDarkestSecret()
	{
		return DarkestSecret;
	}
};

class PhoneBook
{
private:
	Contact contact[8];
	int		index;
public:
	void SetIndex(int i)
	{
		index = i;
	}
	int GetIndex()
	{
		return index;
	}
	
	void CreateContact()
	{
		std::string	tmp;
		print("Création d'un nouveau contact!");
		print("Quel est son prénom ?");
		std::cin >> tmp;
		contact[index].SetFirstName(tmp);
		print("Quel est son nom ?");
		std::cin >> tmp;
		contact[index].SetLastName(tmp);
		print("Quel est son surnom (pseudo) ?");
		std::cin >> tmp;
		contact[index].SetNickName(tmp);
		print("Quel est son n° de natel ?");
		std::cin >> tmp;
		contact[index].SetPhoneNumber(tmp);
		print("Et maintenant, quel est son plus sombre secret ?");
		std::cin >> tmp;
		contact[index].SetDarkestSecret(tmp);
		print("Le contact à été créer avec succès!");
		if (index < 7)
			index++;
		else
			index = 0;
	}
};

int main()
{
	PhoneBook repertoire;

	repertoire.SetIndex(0);
	repertoire.CreateContact();
}