#pragma once
enum class AppStates { RUN, EXIT };
class KeyToggle {
public:
	KeyToggle(int key) :mKey(key), mActive(false) {}
	operator bool() {
		if (GetAsyncKeyState(mKey)) {
			if (!mActive) {
				mActive = true;
				return true;
			}
		}
		else
			mActive = false;
		return false;
	}
private:
	int mKey;
	bool mActive;
	AppStates _AppState;
};