






// define a transaction class
// output/driver node transfers a transaction to queue
// input/drivven node takes a transaction from queue
class Transaction{

private:
    unsigned ref_cnt;
    unsigned int timestamp;

public:
    Transaction();
    Transaction(unsigned int timestamp);
    unsigned int getTimestamp();
    void setTimestamp(unsigned int timestamp);
};