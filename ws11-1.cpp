#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <exception>  // For handling exceptions

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
            while (getline(_file, line)) {
                try {
                    records.push_back(stoi(line));
                } catch (const invalid_argument &e) {
                    cerr << "Invalid argument when reading the file: " << _filename << " - Line: \"" << line << "\" is not a valid number." << endl;
                } catch (const out_of_range &e) {
                    cerr << "Out of range error when reading the file: " << _filename << " - Line: \"" << line << "\" is out of integer range." << endl;
                }
            }
            _file.close();
        } else {
            cerr << "Error opening the file: " << _filename << endl;
        }
    }
};

int main() {
    // Change the filename here to test with different files
    RecordsManager recordM("test_clean.txt");
    // RecordsManager recordM("test_corrupt1.txt");
    // RecordsManager recordM("test_corrupt2.txt");
    Records myRecords;

    // reads records
    recordM.read(myRecords);

    // calculate and print out the sum
    int sum = 0;
    for (int i = 0; i < myRecords.size(); i++) {
        sum += myRecords[i];
    }
    cout << "Sum: " << sum << endl;

    return 0;
}
