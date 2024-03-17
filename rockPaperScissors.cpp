#include <experimental/random>
#include <iostream>

/*
0: rock
1: paper
2: scissors
3: lizard
4: spock
*/

std::string assignValue(int inp)
{
    std::string player_var;
    switch (inp)
    {
    case 0:
        player_var = "rock";
        break;
    case 1:
        player_var = "paper";
        break;
    case 2:
        player_var = "scissors";
        break;
    case 3:
        player_var = "spock";
        break;
    case 4:
        player_var = "lizard";
        break;
    default:
        std::cout << "not a valid value!";
        break;
    }
    return player_var;
}

int main()
{
    int inp;
    std::cout << "Choose a type (rock/paper/scissors/spock/lizard)\n(0-4) > ";
    std::cin >> inp;

    int rnd = std::experimental::randint(0, 4);

    std::string p1 = assignValue(inp), p2 = assignValue(rnd);

    std::cout << "You: " << p1 << " (" << inp << ")" << std::endl;
    std::cout << "Enemy: " << p2 << " (" << rnd << ")" << std::endl;

    if ((inp + 2 % 5 == rnd) || (inp + 4 % 5 == rnd))
    {
        std::cout << "You won!";
    }
    else if (inp == rnd)
    {
        std::cout << "Tie.";
    }
    else
    {
        std::cout << "You lost.";
    }

    return 0;
}