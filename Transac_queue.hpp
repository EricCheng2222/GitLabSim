






#include <vector>
#include "transaction.hpp"

class Transac_queue{
private:
    std::vector<Transaction> queue;

public:
    void push(Transaction t);
    void pop();
};