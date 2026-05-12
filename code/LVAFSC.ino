#include "driver/i2s.h"

#define BCLK 14
#define LRC 15
#define DIN 32

void setup() {

  Serial.begin(115200);

  i2s_config_t config = {
    .mode = (i2s_mode_t)(I2S_MODE_MASTER | I2S_MODE_TX),
    .sample_rate = 2000,   // VERY LOW TEST TONE
    .bits_per_sample = I2S_BITS_PER_SAMPLE_16BIT,
    .channel_format = I2S_CHANNEL_FMT_ONLY_LEFT,
    .communication_format = I2S_COMM_FORMAT_I2S,
    .intr_alloc_flags = 0,
    .dma_buf_count = 8,
    .dma_buf_len = 64,
    .use_apll = false,
    .tx_desc_auto_clear = true
  };

  i2s_pin_config_t pins = {
    .bck_io_num = BCLK,
    .ws_io_num = LRC,
    .data_out_num = DIN,
    .data_in_num = -1
  };

  i2s_driver_install(I2S_NUM_0, &config, 0, NULL);
  i2s_set_pin(I2S_NUM_0, &pins);

  Serial.println("Audio INIT DONE");
}

void loop() {
  // generate simple waveform
  int16_t sample = 1000;
  i2s_write(I2S_NUM_0, &sample, sizeof(sample), NULL, portMAX_DELAY);
}