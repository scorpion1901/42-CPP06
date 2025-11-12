int main(void)
{
    std::string cmd;
    int choice;
    int nb;
    float   nb2;
    
    if (!std::getline(std::cin, cmd))
        std::exit(1);
    std::cout << "cmd = " << cmd << std::endl;
    if (!parsing(cmd))
    {
        std::cout << "probleme parsing" << std::endl;
        return (0);
    }
    choice = whats_the(cmd);
    std::cout << "choice = " << choice << std::endl;
    if (choice == 1)
    {
        nb = std::atoi(cmd.c_str());
        if (nb == 0)
        {
            std::cout << "char = Non displayable" << std::endl;
            std::cout << "int = 0" << std::endl;
            std::cout << "float = 0.0f" << std::endl;
            std::cout << "double = 0.0" << std::endl;
        }
        else if (nb > 126 || nb < 0)
        {
            std::cout << "char = impossible" << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << static_cast<float>(nb) << std::endl;
            std::cout << "double = " << static_cast<double>(nb) << std::endl;
        }
        else
        {
            if (nb > 47 && nb < 58)
                std::cout << "char = " << static_cast<char>(nb) << std::endl;
            else
                std::cout << "char = Non displayable" << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << static_cast<float>(nb) << std::endl;
            std::cout << "double = " << static_cast<double>(nb) << std::endl;
        }
    }
    else if (choice == 2)
    {
        nb2 = std::atof(cmd.c_str());
        nb = static_cast<int>(nb2);
        if (nb2 == 0.0f)
        {
            std::cout << "char = impossible" << std::endl;
            std::cout << "int = 0" << std::endl;
            std::cout << "float = 0.0f" << std::endl;
            std::cout << "double = 0.0" << std::endl;
        }
        else if (nb > 126 || nb < 0)
        {
            std::cout << "char = impossible" << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << nb2 << std::endl;
            std::cout << "double = " << static_cast<double>(nb2) << std::endl;
        }
        else
        {
            std::cout << "char = " << static_cast<char>(nb) << std::endl;
            std::cout << "int = " << nb << std::endl;
            std::cout << "float = " << nb2 << std::endl;
            std::cout << "double = " << static_cast<double>(nb2) << std::endl;
        }
    }
    else
        std::cout << "probleme parsing = " << cmd << std::endl;
    
    
    
    return (0);
}

// int whats_the(std::string str)
// {
//     int i = 0;
//     str[46] = 0;
//     std::cout << "ppp3" << std::endl;
//     while (str[i] != '\0')
//     {
//        // std::cout << "str[i] = "<< str[i] << std::endl;
//         if ((str[i] > 47 && str[i] < 58) || str[i] == '.')
//         {
//             i++;
//             //std::cout << "str[i] = "<< str[i] << std::endl;
//             if (str[i] == '.' && str[46] == 0)
//                 str[46] = 1;
//             else if (str[i] == '.' && str[46] == 1)
//                 return (0);
//         }
//         else if (str[i] == 'f' && str[i + 1] == '\0')
//             return (2);
        
//     }
//     if (str[i] == '\0')
//         return (1);
    
//     r


        // if (!nb2)
        // {
        //     std::cout << "float = " << static_cast<float>(nb) << "f" << std::endl;
        //     std::cout << "double = " << static_cast<double>(nb) << std::endl;
        // }
        // else
        // {
        //     std::cout << "float = " << static_cast<float>(nb2) << "f" << std::endl;
        //     std::cout << "double = " << nb2 << std::endl;
        // }