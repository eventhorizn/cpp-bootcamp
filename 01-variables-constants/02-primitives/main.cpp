#include <iostream>

using namespace std;

int main() {
    char middlie_initial {'J'};
    cout << middlie_initial;

    unsigned short int exam_score {55};
    cout << exam_score;

    int countries_represented {65};
    cout << countries_represented;

    long ppl_in_fl {20610000};
    cout << ppl_in_fl;

    // This is 'list intialization' which will throw an overflow error
    // You could do: long ppl_on_earth = 7'600'000'000
    // This would cause an overflow w/ no error
    //long ppl_on_earth {7'600'000'000};
    
    long long ppl_on_earth {7'600'000'000};
    cout << ppl_on_earth;

    long long dist_to_alpha_centauri {9'461'000'000'000};
    cout << dist_to_alpha_centauri;

    float car_payment {401.23};
    cout << car_payment;

    double pi {3.141549};
    cout << pi;

    long double large_amt {1.7e120};
    cout << large_amt;

    bool game_over {false};
    cout << game_over;

    // Overflow
    // short val1 {300000};

    return 0;
}