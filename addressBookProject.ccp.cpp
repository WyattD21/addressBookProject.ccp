
#include <iostream>
#include <string>

using namespace std;

class addressType {
private:
    string streetAddress;
    string city;
    string state;
    int zipCode;

public:
    // Constructor with default values
    addressType(string street = "", string cityName = "", string stateCode = "XX", int zip = 10000) {
        setAddress(street);
        setCity(cityName);
        setState(stateCode);
        setZipcode(zip);
    }

    // Mutator (setter) for street address
    void setAddress(string street) {
        streetAddress = street;
    }

    // Mutator (setter) for city
    void setCity(string cityName) {
        city = cityName;
    }

    // Mutator (setter) for state with two-character restriction
    void setState(string stateCode) {
        if (stateCode.length() == 2) {
            state = stateCode;
        }
        else {
            state = "XX"; // Default if not valid
        }
    }

    // Mutator (setter) for zip code with value range restriction
    void setZipcode(int zip) {
        if (zip >= 11111 && zip <= 99999) {
            zipCode = zip;
        }
        else {
            zipCode = 10000; // Default if not valid
        }
    }

    // Accessor (getter) for street address
    string getStreetAddress() const {
        return streetAddress;
    }

    // Accessor (getter) for city
    string getCity() const {
        return city;
    }

    // Accessor (getter) for state
    string getState() const {
        return state;
    }

    // Accessor (getter) for zip code
    int getZipCode() const {
        return zipCode;
    }

    // Function to print the address in the correct format
    void print() const {
        cout << streetAddress << endl
            << city << ", " << state << " " << zipCode << endl;
    }
};

