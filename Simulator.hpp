





#include "Node.hpp"

class Simulator{
private:
    std::vector<Node*> nodes;
    unsigned int timestamp;

public:
    void parse_json(std::string filename);
    void build_env();
    bool is_finished();
    void run();
    void set_transaction(std:string filename);
};