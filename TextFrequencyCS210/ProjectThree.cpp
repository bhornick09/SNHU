// Brandon Hornick
// 2/08/2024
// Chada Tech Grocery Tracker

#include <iostream>
#include <fstream>
#include <map>
#include <string>

using namespace std;

// Class with private and public sections
class GroceryTracker {
private:
    map<string, int> purchaseFrequency; // Used to map purchase frequencies
    ofstream dataFile; // Used to create/open/write to output file

    // Function to open files
    void openFiles(ifstream& readFile) {
        dataFile.open("frequency.dat"); // Create file for writing
        if (!dataFile.is_open()) {
            cout << "Error creating file." << endl;
            exit(1); // Exit with error code
        }

        readFile.open("CS210_Project_Three_Input_File.txt"); // Open file for reading
        if (!readFile.is_open()) {
            cout << "Error opening file." << endl;
            exit(1); // Exit with error code
        }
    }

    // Function to write data to output file
    void writeToOutputFile() {
        for (const auto& pair : purchaseFrequency) {
            dataFile << pair.first << " " << pair.second << endl;
        }
    }

public:
    // Constructor to initialize the class
    GroceryTracker() {
        ifstream readFile;
        openFiles(readFile); // Open files
        string productName; // Used to store product name temporarily

        // Read sales data file and create map
        while (!readFile.fail()) {
            readFile >> productName; // Attempt to read string
            auto exists = purchaseFrequency.find(productName); // Check if product already exists in the purchaseFrequency map

            if (exists != purchaseFrequency.end()) {
                // Add one to frequency if the product exists in the map
                exists->second++;
            } else {
                // If product does not exists, add the product to the map with frequency 1
                purchaseFrequency[productName] = 1;
            }

            // Attempt to read next item
            getline(readFile, productName);
        }
        writeToOutputFile(); // Write data to output file
        dataFile.close(); // Close the output file
    }

    // Print the main menu
    void printMenu() {
        cout << "\n******************* Main Menu *******************" << endl;
        cout << "Please select an option below:" << endl;
        cout << "1. Select Item for Purchase Frequency Information" << endl;
        cout << "2. All Items Purchased Frequency" << endl;
        cout << "3. All Items Purchased Frequency (Histogram)" << endl;
        cout << "4. Exit Program" << endl;
        cout << "**************************************************" << endl;
    }

    // Menu option one
    void optionOne() {
        string itemKey;
        char yesOrNo = 'y'; // Initialize with 'y'
    
        while(yesOrNo == 'y'){ // Use == for comparison
            cout << "Please enter the item you are looking for: ";
            getline(cin, itemKey);

            if (purchaseFrequency.count(itemKey)) {
                // If item has been found, Print frequency
                cout << "Item frequency: " << purchaseFrequency[itemKey] << endl;
                yesOrNo = 'n';
            } else {
                // If product does not exist, print Item not found
                cout << "Item not found, please ensure entry starts with a capital letter." << endl;
                cout << "Would you like to try again? y/n" << endl;
                cin >> yesOrNo;
                cin.ignore(); // Ignore newline character from previous input
            }
        }
        // Allow user to press enter to move forward
        cout << "Press enter to continue...";
        cin.get(); // Wait for user input to continue
    }


    // Menu option two
    void optionTwo() {
        for (const auto& pair : purchaseFrequency) {
            cout << pair.first << " " << pair.second << endl;
        }
        // Allow user to press enter to move forward
        cout << "Press enter to continue...";
        cin.get(); // Wait for user input to continue
    }

    // Menu option three
    void optionThree() {
        for (const auto& pair : purchaseFrequency) {
            cout << pair.first << " "; // Print Product Name
            for (int i = 0; i < pair.second; i++) {
                cout << "*"; // Print histogram in size of pair.second (the frequency of the product)
            }
            cout << endl;
        }
        // Allow user to press enter to move forward
        cout << "Press enter to continue...";
        cin.get(); // Wait for user input to continue
    }

    // Function for Menu selection
    int menuSelection() {
        int option;
        cin >> option;
        cin.ignore();
        cin.clear();

        switch (option) {
        case 1:
            optionOne();
            return 0;
            break;

        case 2:
            optionTwo();
            return 0;
            break;

        case 3:
            optionThree();
            return 0;
            break;

        case 4:
            return 4;
            break;

        default:
            cout << "Invalid option, Please try again!";
            return 0;
            break;
        }
    }
};

int main() {
    GroceryTracker tracker; // Initialize the GroceryTracker class
    int quit = 0; // Used to stop menu loop

    // Loop until user selects 4 to quit the application
    while (quit != 4) {
        tracker.printMenu();
        quit = tracker.menuSelection();
    }

    return 0;
}
