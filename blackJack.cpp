#include <iostream>
#include <string>
#include <vector>
#include <ctime>
using namespace std;

int main(){
    string card;
    std::srand(std::time(0));
    std::vector<std::string> decks = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
    "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
    "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",
    "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A",};

    vector<string> player_hand = {};
    vector<string> dealer_hand = {};

    for(int i = 0; i < 2; i++){
        int randomIndex = std::rand() % decks.size();
        std::string card = decks[randomIndex];
        player_hand.push_back(card);
        auto it = std::remove(decks.begin(), decks.end(), card);
        decks.erase(it, decks.end());
    } 

    for (const auto& num : player_hand) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    for(int i = 0; i < 2; i++){
        int randomIndex = std::rand() % decks.size();
        card = decks[randomIndex];
        dealer_hand.push_back(card);
    } 

    for (const auto& num : dealer_hand) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}