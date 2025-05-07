#include "booking_scheduler.cpp"

class TestableBookingScheduler : public BookingScheduler {
public:
	TestableBookingScheduler(int capacityPerHour, tm dataTime) :
		BookingScheduler{ capacityPerHour },
		dataTime{ dataTime } {
	}

	time_t getNow() override {
		return mktime(&dataTime);
	}
private:
	tm dataTime;
};