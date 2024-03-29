/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebojo <lebojo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:30:18 by jchapell          #+#    #+#             */
/*   Updated: 2024/01/31 16:13:49 by lebojo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	ClapTrap ct("Minion");
	ClapTrap ct2("Sbire");

	ct.attack("Sbire");
	ct2.takeDamage(20);
	println("BoJack hear that, and he's angry!");

	ct.takeDamage(50);
	
	println("BoJack: Isn't that enough?");
	println("BoJack: Butt Stallion, chaaaaarge!");
	println("Butt Stallion: HuUUuuh");
	
	ct.takeDamage(1000);
	ct2.takeDamage(1000);

	println("BoJack: Oh no, Sbire?!");
	println("BoJack: Bad Butt Stallion, >:(");
	println("BoJack: I suppose that I have to do something...");

	ct2.beRepaired(50);
	println("*portal noises*");
	println("BoJack: What? Who's there ?");
	
	ScavTrap st("Majestix");

	println("BoJack: Eeeww.. what am I supposed to do ?");
	
	st.attack("Sbire");
	ct2.takeDamage(20);
	
	println("Sbire: Hey man what's your probleme ?");

	st.attack("Sbire");
	ct2.takeDamage(20);
	st.attack("Sbire");
	ct2.takeDamage(20);

	println("Majestix: I always win in the end.");
	st.guardGate();
	println("BoJack: That's was... weird...");
	print("\n\n\n");
	println("BoJack: Whatever, I've got a lot of these anyway");
	println("*explosion*");

	FragTrap ft("Bilbo");
	
	ft.highFivesGuys();

	println("BoJack: ENOUGH! STOP IT!");
	ft.attack("Majestix");
	st.takeDamage(30);
	st.guardGate();
	ft.attack("Majestix");
	st.takeDamage(30);
	st.attack("Bilbo");
	ft.takeDamage(20);

	DiamondTrap dt("Jesus");

	dt.guardGate();

	dt.whoAmI();
	
	dt.attack("Ziziman");
	
	println("Thanks for reading! It was fun to do :)");
	println("I hope you enjoyed it as much as I did");
	println("See you soon!");
	println("PS: Play borderlands");
	println("PS2: For real, play borderlands");
	println("PS3: I'm not kidding, play borderlands");
	println("PS4: I'm serious, play borderlands");
	println("PS5: I'm not joking, play borderlands");
	println("PS6: It's not out yet, but play borderlands");
	return 0;
}