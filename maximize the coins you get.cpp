std::sort(piles.begin(), piles.end(), std::greater<int>());
    
    int totalCoins = 0;
    for (int i = 1; i < piles.size() / 3 * 2; i += 2) {
        totalCoins += piles[i];
    }
    
    return totalCoins;
