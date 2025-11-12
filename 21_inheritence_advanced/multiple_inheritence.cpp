#include <iostream>

class Character
{
    private:

    public:
        Character(unsigned hp_ = 100) : hp(hp_)
        {
            std::cout << "Characters's constructor";
        }

        int hp;
};

class Elf : public Character
{
    private:

    public:
        Elf()
        {
            std::cout << "I am an Elf\n";
        }

        void think() const
        {
            std::cout << "Let's not fight!\n";
        }
};

class Warrior : public Character
{
    private:

    public:
        Warrior()
        {
            std::cout << "I am a Warrior\n";
        }

        void fight() const
        {
            std::cout << "Slash!!!!!\n";
        }
};

class ElfWarrior : public Elf, public Warrior {};

int main()
{
    ElfWarrior buddy;

    buddy.fight();
    buddy.think();

    std::cout << buddy.Elf::hp << std::endl;
    return 0;
}