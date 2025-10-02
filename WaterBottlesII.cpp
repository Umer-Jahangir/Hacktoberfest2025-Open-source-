class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int DrankBottles = numBottles;
        int empty = numBottles;

        while(empty >= numExchange){
            empty = empty - numExchange;
            DrankBottles++;
            empty++;
            numExchange++;
        }
        return DrankBottles;
    }
};
