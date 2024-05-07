// InvoiceTest.h
#ifndef INVOICETEST_H
#define INVOICETEST_H

#include <iostream>
#include "Invoice.h"

class InvoiceTest {
public:
    void runTests() {
        testConstructor();
        testAddServiceCost();
        testGetDollarsOwed();
        testGetInvoiceId();
    }

private:
    void testConstructor() {
        std::cout << "Testing constructor..." << std::endl;
        Invoice invoice("INV001");
        if (invoice.getDollarsOwed() != 0.0) {
            std::cout << "Constructor test failed!" << std::endl;
        } else {
            std::cout << "Constructor test passed!" << std::endl;
        }
    }

    void testAddServiceCost() {
        std::cout << "Testing addServiceCost..." << std::endl;
        Invoice invoice("INV001");
        invoice.addServiceCost(10.0);
        if (invoice.getDollarsOwed() != 10.0) {
            std::cout << "addServiceCost test 1 failed!" << std::endl;
        }

        invoice.addServiceCost(20.0);
        if (invoice.getDollarsOwed() != 30.0) {
            std::cout << "addServiceCost test 2 failed!" << std::endl;
        }

        invoice.addServiceCost(-5.0);
        if (invoice.getDollarsOwed() != 30.0) {
            std::cout << "addServiceCost test 3 failed!" << std::endl;
        } else {
            std::cout << "addServiceCost tests passed!" << std::endl;
        }
    }

    void testGetDollarsOwed() {
        std::cout << "Testing getDollarsOwed..." << std::endl;
        Invoice invoice("INV001");
        invoice.addServiceCost(10.0);
        invoice.addServiceCost(20.0);
        if (invoice.getDollarsOwed() != 30.0) {
            std::cout << "getDollarsOwed test failed!" << std::endl;
        } else {
            std::cout << "getDollarsOwed test passed!" << std::endl;
        }
    }

    void testGetInvoiceId() {
        std::cout << "Testing getInvoiceId..." << std::endl;
        Invoice invoice("INV001");
        if (invoice.getInvoiceId() != "INV001") {
            std::cout << "getInvoiceId test failed!" << std::endl;
        } else {
            std::cout << "getInvoiceId test passed!" << std::endl;
        }
    }
};

#endif