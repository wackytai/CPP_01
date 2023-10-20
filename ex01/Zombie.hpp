#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
    private:
        int         index;
        std::string _name;

    public:
        Zombie( std::string name );
        ~Zombie();
        void    announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif