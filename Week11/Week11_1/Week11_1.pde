// Week11-1 三角函數動畫

float a = 0; // 角度

void setup() {
  size(500, 500);
}

void draw() {
  background(#FFFFF2);

  rectMode(CENTER); // 以中心畫矩形

  for (int i = 0; i < 6; i++) {

    float x = 250 + 200 * cos(a + PI/3 * i);
    float y = 250 + 100 * sin(a + PI/3 * i);

    rect(x, y, 80, 100);
  }

  a += 0.03; // 角度持續增加 → 產生旋轉
}
