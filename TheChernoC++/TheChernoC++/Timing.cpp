#include<iostream>
#include<thread>
#include<chrono>

struct Timer {
	std::chrono::steady_clock::time_point start, end;
	std::chrono::duration<float> duration;
	Timer() {
		start = std::chrono::high_resolution_clock::now();
		
	}

	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;

		float ms = duration.count() * 1000.0f;
		std::cout << "Timer took " << ms << "ms " << '\n';
	}
};

static void function() {
	Timer timer;
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << "Hello" << '\n';
	}
}
//int main() {
//	/*using namespace std::literals::chrono_literals;
//
//	auto start = std::chrono::high_resolution_clock::now();
//
//	std::this_thread::sleep_for(1s);
//
//	auto end = std::chrono::high_resolution_clock::now();
//
//	std::chrono::duration<float> duration = end - start;
//
//	std::cout << duration.count() << '\n';*/
//
//	function();
//}