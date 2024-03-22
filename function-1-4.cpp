#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList newPl = pl;
    return newPl;
}