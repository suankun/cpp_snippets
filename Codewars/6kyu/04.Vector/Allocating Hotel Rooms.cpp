// https://www.codewars.com/kata/6638277786032a014d3e0072/train/cpp

// Task
// Allocate customers to hotel rooms based on their arrival and departure days. Each customer wants their own room, so two customers can stay in the same room only if the departure day of the first customer is earlier than the arrival day of the second customer. The number of rooms used should be minimized.

// Input
// A list or array of n customers, 1 ≤ n ≤ 1000. Each customer is represented by (arrival_day, departure_day), which are positive integers satisfying arrival_day ≤ departure_day.

// Output
// A list or array of size n, where element i indicates the room that customer i was allocated. Rooms are numbered 1,2, ..., k for some 1 ≤ k ≤ n. Any allocation that minimizes the number of rooms k is a valid solution.

// Example:
// Suppose customers is [(1,5), (2,4), (6,8), (7,7)].
// Clearly customers 1 and 2 cannot get the same room. Customer 3 can use the same room as either of them, because they both leave before customer 3 arrives. Then customer 4 can be given the other room.
// So any of [1,2,1,2], [1,2,2,1], [2,1,2,1], [2,1,1,2] is a valid solution.

// NOTE: The list of customers is not necessarily ordered by arrival_time.

#include <vector>
#include <algorithm>
#include <tuple>

std::vector<int> allocateRooms(const std::vector<std::vector<int>>& customers) {
    std::vector<int> allocatedRooms(customers.size(), 0);

    struct Customer {
        int index;
        int arrival;
        int departure;
    };

    std::vector<Customer> sortedCustomers;
    for (int i = 0; i < customers.size(); ++i) {
        sortedCustomers.push_back({i, customers[i][0], customers[i][1]});
    }

    std::sort(sortedCustomers.begin(), sortedCustomers.end(), [](const Customer& a, const Customer& b) {
        if (a.arrival == b.arrival) {
            return a.departure < b.departure;
        }
        return a.arrival < b.arrival;
    });

    std::vector<std::pair<int, int>> rooms;

    int roomCount = 0;

    for (const auto& customer : sortedCustomers) {
        int arrival = customer.arrival;
        int departure = customer.departure;
        int index = customer.index;

        auto it = std::find_if(rooms.begin(), rooms.end(), [arrival](const std::pair<int, int>& room) {
            return room.first < arrival;
        });

        if (it == rooms.end()) {
            roomCount++;
            rooms.emplace_back(departure, roomCount);
            allocatedRooms[index] = roomCount;
        } else {
            int roomNumber = it->second;
            *it = {departure, roomNumber};
            allocatedRooms[index] = roomNumber;
        }

        std::sort(rooms.begin(), rooms.end());
    }

    return allocatedRooms;
}
