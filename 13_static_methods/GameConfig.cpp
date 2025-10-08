#include <iostream>

// Enumeration (enum)
enum Difficulty
{
    Easy, Normal, Hard // 0, 1, 2, ...
};

class GameConfig
{
    private:

        static int defaultDifficulty;
        int playerDifficulty;

    public:

        GameConfig() : playerDifficulty(defaultDifficulty)
        {
        }

        int getPlayerDifficulty()
        {
            return playerDifficulty;
        }

        static int getDefaultDifficulty()
        {
            return defaultDifficulty;
        }

        static void setDifficulty(int level)
        {
            if (level >= Easy && level <= Hard)
            {
                defaultDifficulty = level;
            }
        }

        static std::string difficultyToString(int level)
        {
            switch(level)
            {
                case 0:
                    return "Easy";
                case 1:
                    return "Normal";
                case 2:
                    return "Hard";
                default:
                    return "Unknown";
            }
        }
};

// initialize static member
int GameConfig::defaultDifficulty = Normal;

int main()
{
    Difficulty d = Easy;

    std::cout << d << std::endl;

    GameConfig::setDifficulty(Hard);

    std::cout << "Default difficulty is " << GameConfig::difficultyToString(GameConfig::getDefaultDifficulty()) << std::endl;

    GameConfig player;
    std::cout << "Player difficulty is " << GameConfig::difficultyToString(player.getPlayerDifficulty()) << std::endl;

    return 0;
}