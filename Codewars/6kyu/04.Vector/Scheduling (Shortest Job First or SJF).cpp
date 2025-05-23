// https://www.codewars.com/kata/550cc572b9e7b563be00054f/train/cpp

// Scheduling is how the processor decides which jobs(processes) get to use the processor and for how long. This can cause a lot of problems. Like a really long process taking the entire CPU and freezing all the other processes. One solution is Shortest Job First(SJF), which today you will be implementing.

// SJF works by, well, letting the shortest jobs take the CPU first. If the jobs are the same size then it is First In First Out (FIFO). The idea is that the shorter jobs will finish quicker, so theoretically jobs won't get frozen because of large jobs. (In practice they're frozen because of small jobs).

// You will be implementing:

//   function SJF(jobs, index)
// It takes in:

// "jobs" a non-empty array of positive integers. They represent the clock-cycles(cc) needed to finish the job.
// "index" a positive integer. That represents the job we're interested in.
// SJF returns:

// A positive integer representing the cc it takes to complete the job at index.
// Here's an example:

// SJF([3, 10, 20, 1, 2], 0)
// at 0cc [3, 10, 20, 1, 2] jobs[3] starts
// at 1cc [3, 10, 20, 0, 2] jobs[3] finishes, jobs[4] starts
// at 3cc [3, 10, 20, 0, 0] jobs[4] finishes, jobs[0] starts
// at 6cc [0, 10, 20, 0, 0] jobs[0] finishes
// so:

// SJF([3,10,20,1,2], 0) == 6

#include <vector>
#include <numeric>

int SJF(std::vector<int> jobs, int index) {
    int saved = jobs[index];
    int sum = 0;

    std::vector<int> arr(jobs.size(), 0);
    for (size_t i = 0; i < jobs.size(); ++i) {
        if (jobs[i] < saved) {
            sum += jobs[i];
        } else if (jobs[i] == saved) {
            arr[i] = jobs[i];
        }
    }

    int partialSum = std::accumulate(arr.begin(), arr.begin() + index + 1, 0);
    return partialSum + sum;
}
//
int SJF(std::vector <int> jobs, int index) {
    long long int sum = 0;
    for (int i = 0; i < jobs.size(); ++i) {
        if (jobs[i] < jobs[index]) sum += jobs[i];
        if (jobs[i] == jobs[index] && i <= index) sum += jobs[i];
    }
    return sum;
}
