








#include "Simulator.hpp"
#include <queue>
void Simulator::run(){
    std::queue<Node*> starting_nodes;
    for (auto node : nodes){
        if (node->is_source()){
            starting_nodes.push(node);
        }
    }
    while(!starting_nodes.empty()){
        Node* node = starting_nodes.front();
        starting_nodes.pop();
        //unsigned int run_count = node->run();
        for (auto next_node : node->next_nodes){
            starting_nodes.push(next_node);
        }
    }
}