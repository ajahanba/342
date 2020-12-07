//
// Created by Yusuf Pisan on 4/2/18.
//

#include "timespan.h"

ostream &operator<<(ostream &out, const TimeSpan &ts) { return out; }

// explicit TimeSpan(int Hour = 0, int Minute = 0, int Second = 0);
TimeSpan::TimeSpan(double hour, double minute, double second) {}

// hour component
int TimeSpan::getHour() const { return 0; }

// minute component
int TimeSpan::getMinute() const { return 0; }

// second component
int TimeSpan::getSecond() const { return 0; }

// true if timespan is 0 or larger
bool TimeSpan::isPositive() const { return true; }

// add
TimeSpan TimeSpan::operator+(const TimeSpan &ts) const {
  TimeSpan tsSum;
  return tsSum;
}

// subtract
TimeSpan TimeSpan::operator-(const TimeSpan &ts) const {
  TimeSpan tsSub;
  return tsSub;
}

// multiply with an integer
TimeSpan TimeSpan::operator*(unsigned int number) const {
  TimeSpan tsLarge;
  return tsLarge;
}

// equality ==
bool TimeSpan::operator==(const TimeSpan &ts) const { return true; }

// inequality !=
bool TimeSpan::operator!=(const TimeSpan &ts) const { return true; }
