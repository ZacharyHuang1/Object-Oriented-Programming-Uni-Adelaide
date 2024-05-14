#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>

class USBConnection {
private:
    int ID;
    static std::stack<int>& ids() {
        static std::stack<int> instance({3, 2, 1});
        return instance;
    }

    USBConnection(int id) : ID(id) {}

public:
    ~USBConnection() {
        ids().push(ID);
    }

    int get_id() const {
        return ID;
    }

    static USBConnection* CreateUsbConnection() {
        if (!ids().empty()) {
            int id = ids().top();
            ids().pop();
            return new USBConnection(id);
        }
        return nullptr;
    }
};

#endif