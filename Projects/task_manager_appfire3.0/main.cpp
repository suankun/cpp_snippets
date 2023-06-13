#include <iostream>
#include <string>
#include <mysql.h>
using namespace std;

char HOST[] = "localhost";
char USER[] = "root";
char PASS[] = "admin";

// Execute SQL queries
bool executeQuery(MYSQL* dbConn, const std::string& query) {
    int status = mysql_query(dbConn, query.c_str());
    if (status != 0) {
        cout << "Query execution failed: " << mysql_error(dbConn) << endl;
        return false;
    }
    return true;
}

// Create a new task
void createTask(MYSQL* dbConn) {
    string name, description, status;
    cout << "\nEnter task name: ";
    getline(cin >> ws, name);
    cout << "Enter task description: ";
    getline(cin >> ws, description);
    cout << "Enter task status: ";
    getline(cin >> ws, status);

    string query = "INSERT INTO task (name, description, status) VALUES ('" + name + "', '" + description + "', '" + status + "')";
    if (executeQuery(dbConn, query)) {
        cout << "\nTask '" << name << "' created successfully!" << endl;
    }
}
// Edit a task
void editTask(MYSQL* dbConn) {
	string name, description, status;
	string query;
    cout << "\nEnter the name of the task you want to edit: ";
    getline(cin >> ws, name);

    cout << "Enter new task description: ";
    getline(cin >> ws, description);
    
    cout << "Enter new task status: ";
    getline(cin >> ws, status);

    query = "UPDATE task SET description = '" + description + "' WHERE name = '" + name + "'";
    if (executeQuery(dbConn, query)) {
        cout << "\nDescription of the task '" << name << "' updated successfully!" << endl;
    }
    
    query = "UPDATE task SET status = '" + status + "' WHERE name = '" + name + "'";
    if (executeQuery(dbConn, query)) {
        cout << "Status of the task '" << name << "' updated successfully!" << endl;
    }
}

// Delete a task
void deleteTask(MYSQL* dbConn) {
	string name;
    cout << "\nEnter the name of the task you want to delete: ";
    getline(cin >> ws, name);

    string query = "DELETE FROM task WHERE name = '" + name + "'";
    if (executeQuery(dbConn, query)) {
        cout << "Task '" << name << "' deleted successfully!" << endl;
    }
}

// List all task with status Active
void listUnfinishedTasks(MYSQL* dbConn) {
	string query = "SELECT * FROM task WHERE status = 'Active'";
    int status = mysql_query(dbConn, query.c_str());
    if (status != 0) {
        cout << "Query execution failed: " << mysql_error(dbConn) << endl;
        return;
    }

    MYSQL_RES* result = mysql_store_result(dbConn);
    if (result == NULL) {
        cout << "Failed to get result set: " << mysql_error(dbConn) << endl;
        return;
    }

    int numFields = mysql_num_fields(result);
    MYSQL_ROW row;

    cout << "\nUnfinished tasks:" << endl;
    while ((row = mysql_fetch_row(result))) {
        for (int i = 0; i < numFields; i++) {
            cout << mysql_fetch_field_direct(result, i)->name << ": " << row[i] << endl;
        }
        cout << endl;
    }

    mysql_free_result(result);
}

int main() {
	// Create MySQL session.
    MYSQL* dbConn = mysql_init(NULL);
    if (dbConn == NULL) {
        cout << "Failed to initialize MySQL connection" << endl;
        return 1;
    }

    if (mysql_real_connect(dbConn, HOST, USER, PASS, "tasks", 0, NULL, 0) == NULL) {
        cout << "Failed to connect to MySQL server: " << mysql_error(dbConn) << endl;
        return 1;
    }

    // Create the "task" table in the "tasks" database if it doesn't exist
    string createTableQuery = "CREATE TABLE IF NOT EXISTS task (id INT AUTO_INCREMENT PRIMARY KEY, name VARCHAR(100), description TEXT, status TEXT)";
    if (!executeQuery(dbConn, createTableQuery)) {
        mysql_close(dbConn);
        return 1;
    }

    // User menu
    int choice;
    while (true) {
        cout << "1. Create Task" << endl;
        cout << "2. Edit Task" << endl;
        cout << "3. Delete Task" << endl;
        cout << "4. List Unfinished Tasks" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: createTask(dbConn); 		   break;
            case 2: editTask(dbConn);   		   break;
            case 3: deleteTask(dbConn); 		   break;
            case 4: listUnfinishedTasks(dbConn);   break;
            case 5: 
            	cout << "\nSuccessfully exit from the app!" << endl;
				mysql_close(dbConn);  
				return 0; // Clean up and exit the program
            default: cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    }
	
	return 0;
}

