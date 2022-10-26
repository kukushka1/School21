/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myuriko <myuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 14:26:27 by myuriko           #+#    #+#             */
/*   Updated: 2022/10/23 14:26:27 by myuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


/* string::find takes a string to look and a character 
position at which to start looking.
Returns the position of the occurrence of the string
or string::npos if the string is not found. */

void    replace(std::string s1, std::string s2, std::string fullText, std::string fileName)
{
    std::fstream    fileReplace;
    std::string     replace;
    int index;

    index = 0;
    while((index = fullText.find(s1, index)) != -1)
    {
        fullText.erase(index, s1.length());
        fullText.insert(index, s2);
        index += s2.length();
    }
    fileReplace.open((fileName + ".replace").c_str(), std::ios::out);
    if (!fileReplace)
        std::cout << "error\ncould not create file: " + fileName + ".replace" << std::endl;
    fileReplace << fullText;
}

std::string getText(std::string fileName, std::string *fullText)
{
    std::fstream    file;
    std::string     line;

    file.open((fileName).c_str(), std::ios::in);
    if (!file)
    {
        std::cout << "error\ncould not open file: " + fileName << std::endl;
        return (*fullText);
    }
    while(std::getline(file, line))
    {
        (*fullText).append(line);
        if (!file.eof())
            (*fullText).push_back('\n');
    }
    file.close();
    return (*fullText);
}

int main(int argc, char **argv)
{
    std::string fullText;
    std::string fileName;
    std::string s1;
    std::string s2;

    if (argc == 4)
    {
        s1 = argv[2];
        s2 = argv[3];
        if (s1.empty() || s2.empty())
        {
            std::cout << "error\ns1 or s2 can't be empty strings" << std::endl;
            return (1);
        }
        fileName = argv[1];
        getText(fileName, &fullText);
        if (fullText.empty())
            return (1);
        replace(s1, s2, fullText, fileName);
    }
    else
        std::cout << "error\nusage: ./replace [file] [s1] [s2]" << std::endl;
    return (0);
}