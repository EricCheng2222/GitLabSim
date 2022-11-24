






#include "Node.hpp"

void Node::connect(Node* node){
    Transac_queue *queue;
    queue = new Transac_queue();
    this->output_queue.push_back(queue);
    node->input_queue.push_back(queue);
    this->next_nodes.push_back(node);
}