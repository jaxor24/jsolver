#define CATCH_CONFIG_RUNNER
#include "catch.hpp"
#include "logging.h"

int main(int argc, char* argv[]) {
	logging::init_logging(true);

	int result = Catch::Session().run(argc, argv);

	return result;
}