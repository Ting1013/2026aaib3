// Week08-4 很多會飛的氣球

PImage img;

float[] x = new float[100];
float[] y = new float[100];
float[] s = new float[100];

int N = 0;     // 現在氣球數量
float s2 = 0.1; // 新氣球大小

void setup() {
  size(500, 500);
  img = loadImage("balloon.png");
}

void draw() {
  background(255);

  // 滑鼠按住 → 放大氣球
  if (mousePressed) {
    s2 *= 1.05;

    image(img,
          mouseX - (96 * s2) / 2,
          mouseY - (132 * s2) / 2,
          96 * s2,
          132 * s2);
  } else {
    s2 = 0.1; // 放開後重設大小
  }

  // 畫出所有氣球 + 往上飛
  for (int i = 0; i < N; i++) {
    image(img, x[i], y[i], 96 * s[i], 132 * s[i]);

    y[i] -= 1; // ⭐ 往上飛
  }
}

// 放開滑鼠 → 新增一顆氣球
void mouseReleased() {
  s[N] = s2;
  x[N] = mouseX - (96 * s2) / 2;
  y[N] = mouseY - (132 * s2) / 2;

  N++;
}
