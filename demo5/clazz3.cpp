#include <iostream>

using namespace std;

class DomainClazz {
    private:
        int value;
    public:
        DomainClazz();
        ~DomainClazz();
        friend void printValue(DomainClazz domainClazz);
        bool compare(DomainClazz domainClazz);
        friend class FriendClazz;
        void setValue(int val);
        int getValue();
};

DomainClazz::DomainClazz() {}

DomainClazz::~DomainClazz() {}

void DomainClazz::setValue(int val) {
    value = val;
}

int DomainClazz::getValue() {
    return this -> value;
}

void printValue(DomainClazz domainClazz) {
    cout << "value:" << domainClazz.value << endl;
}

bool DomainClazz::compare(DomainClazz domainClazz) {
    return this -> getValue() > domainClazz.getValue();
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

    DomainClazz domainClazz1;
    domainClazz1.setValue(300);

    // this指针
    cout << "domainClazz1:" << domainClazz1.getValue() << endl;
    cout << "domainClazz" << domainClazz.getValue() << endl;
    if (domainClazz1.compare(domainClazz)) {
        cout << "domainClazz1 bigger than domainClazz" << endl;
    } else {
        cout << "domainClazz1 smaller than domainClazz" << endl;
    }

    // 类指针
    DomainClazz *ptr;
    ptr = &domainClazz1;

    cout << "domainClazz1.getValue():" << ptr -> getValue();
    
    return 0;
}