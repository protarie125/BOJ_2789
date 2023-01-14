#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto& x = "CAMBRIDGE"s;

	string s;
	cin >> s;

	const auto& n = s.length();

	auto oss = ostringstream{};
	for (auto i = 0; i < n; ++i) {
		const auto& w = s[i];
		auto isCon = bool{ false };
		for (const auto& y : x) {
			if (w == y) {
				isCon = true;
				break;
			}
		}

		if (!isCon) {
			oss << w;
		}
	}

	cout << oss.str();

	return 0;
}