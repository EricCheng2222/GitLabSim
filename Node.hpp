



/*
  -------------             ------           --------------
 | input queue |    ---->  | node |  ---->  | output queue |
  -------------             ------           --------------
*/

/*
when node connects to node (A --> B)
we implicitly create a queue so the graph becomes
A --> queue --> B

*/

#include "Transac_queue.hpp"

class Node{

private:
    std::vector<Transac_queue> input_queue;
    std::vector<Transac_queue> output_queue;

public:
    void connect(Node* node);
    unsigned int run(); // run will return the number of time it runs
};