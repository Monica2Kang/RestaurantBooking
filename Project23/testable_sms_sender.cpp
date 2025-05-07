#include <iostream>
#include "sms_sender.cpp"

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "테스트용 SmsSender class의 send 메서드 실행됨\n";
		sendMothedIsCalled = true;
	}

	bool isSendMothedIsCalled() {
		return sendMothedIsCalled;
	}

private:
	bool sendMothedIsCalled;
};