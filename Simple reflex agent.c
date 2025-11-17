#include <stdio.h>

void simple_reflex_agent(int condition) {
    if (condition == 1) {
        printf("Action: Turn ON
");
    } else {
        printf("Action: Turn OFF
");
    }
}

int main() {
    int sensor_input = 1;
    simple_reflex_agent(sensor_input);
    return 0;
}
