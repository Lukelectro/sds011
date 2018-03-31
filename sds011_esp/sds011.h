#include <stdbool.h>
#include <stdint.h>

typedef struct {
    float pm2_5;
    float pm10;
    uint16_t id;
} sds_meas_t;

void SdsInit(void);
bool SdsProcess(uint8_t b);
void SdsParse(sds_meas_t *meas);
int SdsCreateCmd(uint8_t *buf, int size, uint8_t cmd, uint16_t data);


