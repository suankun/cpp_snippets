// https://www.codewars.com/kata/5deeb1cc0d5bc9000f70aa74/train/cpp
#include <iostream>
#include <string>

std::string zombie_shootout(unsigned zombies, unsigned distance, unsigned ammo) {
    std::string res;
    distance *= 2;
    unsigned initZombies = zombies;

    while (distance--)
    {
        if (ammo && zombies) {
            zombies--;
            ammo--;
        }
        else if (ammo)
            return "You shot all " + std::to_string(initZombies - zombies) + " zombies.";
        else if (zombies)
            return "You shot " + std::to_string(initZombies - zombies) + " zombies before being eaten: ran out of ammo.";
    }

    if (zombies)
        res = "You shot " + std::to_string(initZombies - zombies) + " zombies before being eaten: overwhelmed.";
    
    return res;
}

int main() {
    std::cout << zombie_shootout(3, 10, 10) << std::endl;  // ("You shot all 3 zombies."));
    std::cout << zombie_shootout(100, 8, 200) << std::endl;  // ("You shot 16 zombies before being eaten: overwhelmed."));
    std::cout << zombie_shootout(50, 10, 8) << std::endl;  // ("You shot 8 zombies before being eaten: ran out of ammo."));

    return 0;
}
//
// #include <string>

// std::string zombie_shootout(unsigned zombies, double distance, unsigned ammo) {
//     unsigned ori = zombies;
//     while(zombies > 0 && distance > 0 && ammo > 0){
//         ammo--;
//         zombies--;
//         distance -= 0.5;
//     }
//     return !zombies ? "You shot all " + std::to_string(ori) + " zombies." : "You shot " + std::to_string(ori - zombies) + " zombies before being eaten: " + (!distance ? "overwhelmed" : "ran out of ammo") + ".";
// }
