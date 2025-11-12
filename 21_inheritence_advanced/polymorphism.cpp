#include <iostream>

//TODO
// Reload function for weapon and all derived classes
// Create an inventory for the player (set of weapons)

class Weapon // Abstract class
{
    private:

    public:
        virtual void use() = 0; // Pure virtual function
        
};

class Gun : public Weapon
{
    private:

    public:
        void use() override
        {
            std::cout << "BANG!" << std::endl;
        }
        virtual void reload() 
        {
            std::cout << "Reloading!" << std::endl;
        }
};

class MachineGun : public Gun
{
    private:

    public:
        int magazine = 20;

        void reload() override
        {
            std::cout << "Reloading!" << std::endl;
            magazine = 20;
        }

        void use() override
        {
            while (magazine-- > 0)
            {
                std::cout << "BANG!";
            }
            std::cout << '\n';
            reload();
        }
        
};

class Bazooka : public Weapon
{
    private:

    public:
        void use() override
        {
            std::cout << "BOOM!" << std::endl;
        }
};   

class Knife : public Weapon
{
    private:
        bool is_stainless;
        
    public:
        Knife(bool stainless = false) : is_stainless(stainless) {}
        
        void use() override
        {
            std::cout << "SLASH!" << std::endl;
        }
    
        bool get_isStainless()
        {
            return is_stainless;
        }

};


class Player
{
    private:

    public:
        void use_weapon(Weapon& weapon)
        {
            //dynamic casting
            Knife *knife = dynamic_cast<Knife*>(&weapon); // casting of a parent address to a child pointer
            if (knife != NULL)
            {
                if (knife->get_isStainless())
                {
                    std::cout << "Stainless knife. Can use it." << std::endl; 
                    weapon.use();
                }
                else
                {
                    std::cout << "cannot use not stainless knife" << std::endl;
                }
            }
            else
            {
                std::cout << "Not a knife." << std::endl;
                weapon.use();
            }
        }
};

int main()
{
    Gun gun;
    MachineGun mg;
    Bazooka bazooka;
    Knife knife;

    gun.use();
    // mg.shoot();

    // Creare a reference to a base class
    Gun& weapon = mg;
    weapon.use();

    std::cout << "------------\n";
    Player player;
    player.use_weapon(knife);


    return 0;
}