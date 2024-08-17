// https://www.codewars.com/kata/5792e2e93467db66a000009f/train/cpp
#include <string>
class IDuck
{
public:
    virtual std::string Quack() = 0;
    virtual void Fly() = 0;
    virtual ~IDuck() = default;  // Virtual destructor for proper cleanup
};

class Goose
{
public:
    std::string Honk() {
        return "Honk";
    }
    
    void Fly() {
        // Implementation for flying
    }
};

class GooseToIDuckAdapter : public IDuck
{
private:
    Goose* goose;  // Composition: the adapter holds an instance of Goose

public:
    GooseToIDuckAdapter(Goose* goose) : goose(goose) { }

    std::string Quack() override {
        return goose->Honk();
    }
    
    void Fly() override {
        goose->Fly();
    }
};
