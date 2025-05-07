#include <iostream>
#include "sms_sender.cpp"

class TestableSmsSender : public SmsSender {
public:
	void send(Schedule* schedule) override {
		std::cout << "�׽�Ʈ�� SmsSender class�� send �޼��� �����\n";
		sendMothedIsCalled = true;
	}

	bool isSendMothedIsCalled() {
		return sendMothedIsCalled;
	}

private:
	bool sendMothedIsCalled;
};