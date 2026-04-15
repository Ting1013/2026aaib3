// Week08-2 會跟著 mouse 移動的氣球

PImage img; // 圖片宣告
int x, y;   // 座標

void setup() {
  size(500, 500); // 視窗大小
  img = loadImage("balloon.png"); // 讀入圖片
}

void draw() {
  background(255); // 白色背景

  x = mouseX - 96/2; // 讓圖片中心對齊滑鼠
  y = mouseY - 132/2;

  image(img, x, y, 96, 132); // 畫圖片
}
