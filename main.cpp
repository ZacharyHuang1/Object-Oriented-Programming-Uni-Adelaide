#include "UnitTest.h"
#include "InvoiceTest.h"
#include "EquivalenceTests.h"

int main() {
    UnitTest unitTest;
    unitTest.runTests();

    EquivalenceTests equivalenceTests;
    equivalenceTests.runTests();

    InvoiceTest invoiceTest;
    invoiceTest.runTests();

    return 0;
}