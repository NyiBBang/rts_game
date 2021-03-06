#include "Chronometer.h"

using namespace std::chrono;

Chronometer::Chronometer()
{}

void Chronometer::restart()
{
    last_ = system_clock::now();
}

TimeQuantity Chronometer::count() const
{
    if (last_.time_since_epoch().count() == 0) return 0;
    const auto elapsed = duration_cast<milliseconds>(system_clock::now() - last_);
    return TimeQuantity(elapsed.count() * milli * si::seconds);
}

