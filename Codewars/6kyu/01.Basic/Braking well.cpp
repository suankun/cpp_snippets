// https://www.codewars.com/kata/565c0fa6e3a7d39dee000125/train/cpp

// Braking distance d1 is the distance a vehicle will go from the point when it brakes to when it comes to a complete stop. It depends on the original speed v and on the coefficient of friction mu between the tires and the road surface.

// The braking distance is one of two principal components of the total stopping distance. The other component is the reaction distance, which is the product of the speed and the perception-reaction time of the driver.

// The kinetic energy E is 0.5*m*v**2, the work W given by braking is mu*m*g*d1. Equalling E and W gives the braking distance: d1 = v*v / 2*mu*g where g is the gravity of Earth and m the vehicle's mass.

// We have v in km per hour, g as 9.81 m/s/s and in the following we suppose that the reaction time is constant and equal to 1 s. The coefficient mu is dimensionless.

// Tasks.
// The first one is to calculate the total stopping distance in meters given v, mu (and the reaction time t = 1).

// dist(v, mu) -> d = total stopping distance

// The second task is to calculate v in km per hour knowing d in meters and mu with the supposition that the reaction time is still t = 1.

// speed(d, mu) -> v such that dist(v, mu) = d.

// Examples:
// dist(100, 0.7) -> 83.9598760937531

// speed(83.9598760937531, 0.7) -> 100.0

// Notes:
// Remember to convert the velocity from km/h to m/s or from m/s in km/h when necessary.

// Don't forget the reaction time t: t = 1

// Don't truncate or round your results. See in "RUN SAMPLE TESTS" the function assertFuzzyEquals or dotest or ....

// Shell: only dist is tested.

#include <cmath>

const double g = 9.81;

class Braking
{
public:
  
    static double dist(double v, double mu) {
        v = v * 1000 / 3600;
        double d1 = (v * v) / (2 * mu * g);
        double d2 = v * 1;
        return d1 + d2;
    }
  
    static double speed(double d, double mu) {
        double a = 1 / (2 * mu * g);
        double b = 1;
        double c = -d;
        double discriminant = b * b - 4 * a * c;

        if (discriminant >= 0) {
            double r1 = ((-b + std::sqrt(discriminant)) / (2 * a)) * 3.6;
            double r2 = ((-b - std::sqrt(discriminant)) / (2 * a)) * 3.6;
            return (r1 >= 0) ? r1 : r2;
        } else {
            return -1;
        }
    }
};
//
#include <cmath>

class Braking
{
public:
    static double dist(double v, double mu);
    static double speed(double d, double mu);
    
private:
    static const double KMH;
    static const double g;
    static double toKMH(double v);
    static double toMS(double v);
};

double Braking::dist(double v, double mu)
{
    v = toMS(v);
    double d = v*v / (2*mu*g) + v;
    return d;
}

double Braking::speed(double d, double mu)
{
    double v = mu * g * (-1 + sqrt(1 + 2 * d / (mu * g)));
    v = toKMH(v);
    return v;
}

const double Braking::KMH = 3.6;
const double Braking::g = 9.81;

double Braking::toKMH(double v) { return v * KMH; }
double Braking::toMS(double v) { return v / KMH; }
