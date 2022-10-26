/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:55:26 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 12:55:27 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP
# define SEARCH_HEADER "\
---------------------------------------------\n\
|     Index|First name| Last name|  Nickname|\n\
---------------------------------------------\n"
# define SEARCH_FOOTER "\
---------------------------------------------\n"
# include "Contact.hpp"

class PhoneBook
{
private:
	Contact contacts[8];
	int		count;
public:
	PhoneBook();
	void	add(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number,
		std::string darkest_secret);
	void	search();
	void	display_contact(void);
};

#endif
