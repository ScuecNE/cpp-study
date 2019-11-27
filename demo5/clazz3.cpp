#include <iostream>

using namespace std;

class DomainClazz {
    private:
        int value;
    public:
        DomainClazz();
        ~DomainClazz();
        friend void printValue(DomainClazz domainClazz);
        friend class FriendClazz;
        void setValue(int val);
};

DomainClazz::DomainClazz() {}

DomainClazz::~DomainClazz() {}

void DomainClazz::setValue(int val) {
    value = val;
}

void printValue(DomainClazz domainClazz) {
    cout << "value:" << domainClazz.value << endl;
}

class FriendClazz {
    private:
        /* data */
    public:
        void print(int val, DomainClazz &domainClazz);
        FriendClazz();
        ~FriendClazz();
};

void FriendClazz::print(int val, DomainClazz &domainClazz) {
    domainClazz.setValue(val);
    cout << "value:" << domainClazz.value << endl;
}

FriendClazz::FriendClazz(){}

FriendClazz::~FriendClazz() {}


int main() {
    DomainClazz domainClazz;
    FriendClazz friendClazz;

    domainClazz.setValue(100);
    printValue(domainClazz);
    friendClazz.print(200, domainClazz);
    return 0;
}