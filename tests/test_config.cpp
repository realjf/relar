#include "relar/config.hpp"
#include "relar/log.hpp"

relar::ConfigVar<int>::ptr g_int_value_config = relar::Config::Lookup("system.port", (int)8080, "system port");

int main(int argc, char **argv){
    RELAR_LOG_INFO(RELAR_LOG_ROOT()) << g_int_value_config->getValue();
    RELAR_LOG_INFO(RELAR_LOG_ROOT()) << g_int_value_config->toString();
    return 0;
}
