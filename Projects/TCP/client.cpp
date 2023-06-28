#include <iostream>
#include <string>
#include "httplib.h"

#define SERVER_IP "127.0.0.1"
#define SERVER_PORT 1000

// Function to serialize the JSON object
std::string serializeJSON(const std::string& filepath, const std::string& username, bool isAdmin) {
    std::string jsonString = R"({"filepath":")" + filepath + R"(","username":")" + username + R"(","admin":)" + std::string(isAdmin ? "true" : "false") + "}";
    return jsonString;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " <server_ip:server_port>" << std::endl;
        return 1;
    }

    std::string serverAddress = argv[1];
    size_t colonPos = serverAddress.find(":");
    if (colonPos == std::string::npos) {
        std::cout << "Invalid server address format. Please provide as <server_ip:server_port>." << std::endl;
        return 1;
    }

    std::string serverIP = serverAddress.substr(0, colonPos);
    int serverPort = std::stoi(serverAddress.substr(colonPos + 1));

    while (true) {
        try {
        httplib::Client client(serverIP, serverPort);

        // Prepare the JSON object
        std::string filepath = argv[0];  // Current filepath of the program
        std::string username = "Edmont";  // Current username
        bool isAdmin = false;  // Is he an admin?

        std::string jsonData = serializeJSON(filepath, username, isAdmin);

        // Send the JSON object to the server
        auto response = client.Post("/", jsonData, "application/json");

        if (response && response->status == 200) {
            std::cout << "Server response: " << response->body << std::endl;
            return 0;
        } else {
            std::cout << "Error: No response from the server." << std::endl;
        }

        return 0;
        } catch (const std::exception& e) {
        std::cout << "Server is offline. Retrying in 30 seconds..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(30));  // Wait for 30 seconds before retrying
        }
    }
}
