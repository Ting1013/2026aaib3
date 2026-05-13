// Week12-1 好玩的地鼠（圖片會動）

PImage img; // 圖片變數

float a = 0; // 角度

void setup() {

  size(300, 300);

  // 讀入圖片
  img = loadImage("gopher.png");
}

void draw() {

  a += 0.03;

  background(128); // 灰色背景

  // 三角函數座標
  float x = 100 + 50 * cos(a);
  float y = 250 + 50 * sin(a);

  // 畫圖片
  image(img, x, y, 100, 100);
}
