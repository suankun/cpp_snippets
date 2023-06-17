#include <iostream>
#include <sstream>
#include <string>
#include <mysql.h>

char HOST[] = "localhost";
char USER[] = "root";
char PASS[] = "admin";

// Function to establish MySQL connection
MYSQL* mysqlConnect() {
    MYSQL* conn = mysql_init(NULL);
    if (!conn) {
        std::cout << "MySQL initialization failed" << std::endl;
        return NULL;
    }

    conn = mysql_real_connect(conn, HOST, USER, PASS, "car_database", 0, NULL, 0);
    if (conn) {
        std::cout << "Connected to MySQL database" << std::endl;
        return conn;
    } else {
        std::cout << "Connection failed: " << mysql_error(conn) << std::endl;
        return NULL;
    }
}


// Function to execute MySQL queries
void executeQuery(MYSQL* conn, const std::string& query) {
    if (mysql_query(conn, query.c_str()) != 0) {
        std::cout << "Query execution error: " << mysql_error(conn) << std::endl;
    } else {
        std::cout << "Query executed successfully" << std::endl;
    }
}

// Function to convert an integer to a string
std::string intToString(int value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

// Function to convert a double to a string
std::string doubleToString(double value) {
    std::stringstream ss;
    ss << value;
    return ss.str();
}

// Function to update car data
void updateCarData(MYSQL* conn, int carId, const std::string& brand, const std::string& model, int year) {
    std::string updateQuery = "UPDATE cars SET brand = '" + brand + "', model = '" + model + "', year = " +
                              intToString(year) + " WHERE id = " + intToString(carId);
    executeQuery(conn, updateQuery);
}

// Function to delete car data
void deleteCarData(MYSQL* conn, int carId) {
    std::string deleteQuery = "DELETE FROM cars WHERE id = " + intToString(carId);
    executeQuery(conn, deleteQuery);
}

// Function to enter reparation data
void enterReparationData(MYSQL* conn, int carId, const std::string& description, double cost) {
    std::string insertReparationQuery =
        "INSERT INTO reparations (car_id, description, cost) VALUES (" + intToString(carId) + ", '" + description +
        "', " + doubleToString(cost) + ")";
    executeQuery(conn, insertReparationQuery);
}

int main() {
    // Connect to the MySQL database
    MYSQL* conn = mysqlConnect();
    if (!conn) {
        return 1;
    }

    // Create table if it doesn't exist
    std::string createTableQuery = "CREATE TABLE IF NOT EXISTS cars ("
                                   "id INT PRIMARY KEY AUTO_INCREMENT,"
                                   "brand VARCHAR(100) NOT NULL,"
                                   "model VARCHAR(100) NOT NULL,"
                                   "year INT NOT NULL)";
    executeQuery(conn, createTableQuery);

    // Create table for reparations if it doesn't exist
    std::string createReparationTableQuery = "CREATE TABLE IF NOT EXISTS reparations ("
                                             "id INT PRIMARY KEY AUTO_INCREMENT,"
                                             "car_id INT NOT NULL,"
                                             "description VARCHAR(100) NOT NULL,"
                                             "cost DECIMAL(10,2) NOT NULL)";
    executeQuery(conn, createReparationTableQuery);

    // Insert data into the table
    std::string insertDataQuery = "INSERT INTO cars (brand, model, year) VALUES "
                                  "('Toyota', 'Corolla', 2020),"
                                  "('Honda', 'Civic', 2019),"
                                  "('Ford', 'Mustang', 2021)";
    executeQuery(conn, insertDataQuery);

    // Retrieve data from the table
    std::string retrieveDataQuery = "SELECT * FROM cars";
    executeQuery(conn, retrieveDataQuery);

    MYSQL_RES* result = mysql_store_result(conn);
    if (result) {
        MYSQL_ROW row;
        while ((row = mysql_fetch_row(result))) {
            std::cout << "ID: " << row[0] << ", Brand: " << row[1] << ", Model: " << row[2] << ", Year: " << row[3]
                      << std::endl;
        }
        mysql_free_result(result);
    }

    // Update car data
    updateCarData(conn, 1, "Toyota", "Camry", 2022);

    // Delete car data
    deleteCarData(conn, 2);

    // Enter reparation data
    enterReparationData(conn, 1, "Oil Change", 50.0);

    // Close the MySQL connection
    mysql_close(conn);

    return 0;
}

