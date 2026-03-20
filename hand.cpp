#include "./hand.hpp"

Hand::Hand(int capacity){
    // TODO: implement this constructor
}
    


// Sorting function
void Hand::sort_by_rank(Card* copy) const{
    // Sort the hand by rank using selection sort
    // Given to you: do not change this.
    for(int i = 0; i < this->num_cards - 1; i++){
        int minIndex = i;
        for(int j = i + 1; j < this->num_cards; j++){
            if(copy[j].getRank() < copy[minIndex].getRank()){
                minIndex = j;
            }
        }
        Card temp = copy[i];
        copy[i] = copy[minIndex];
        copy[minIndex] = temp;
    }
}