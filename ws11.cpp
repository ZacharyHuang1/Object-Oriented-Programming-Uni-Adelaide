#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <stdexcept>

using namespace std;

// vector of int.
// used to store the records
typedef vector<int> Records;

// https://www.cplusplus.com/doc/tutorial/files/
class RecordsManager {
private:
    fstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            try {
                while (std::getline(_file, line)) {
                    records.push_back(stoi(line));
                }
            } catch (const std::invalid_argument &e) {
                _file.close();
                throw std::runtime_error("Wrong argument when reading the file: " + line);
            } catch (const std::out_of_range &e) {
                _file.close();
                throw std::runtime_error("Out of range when reading the file: " + line);
            }
            _file.close();
        }
    }
};

int main() {
    // RecordsManager receordM("test_clean.txt");
    // RecordsManager receordM("test_corrupt1.txt");
    RecordsManager receordM("test_corrupt2.txt");

    Records myRecords;
    try {
        // reads records
        receordM.read(myRecords);

        // calculate and print out the sum
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }
        cout << sum << endl;
    } catch (const std::exception &e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}