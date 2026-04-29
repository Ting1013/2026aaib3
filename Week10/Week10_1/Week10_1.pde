// Week10-1 打地鼠（滑鼠打地鼠）

int[][] a = {
  {0, 0, 0},
  {0, 0, 0},
  {0, 0, 0}
};

void setup() {
  size(300, 300);
}

void mousePressed() {
  // 左手 i 對應 Y
  // 右手 j 對應 X
  int i = mouseY / 100;
  int j = mouseX / 100;

  // 打到地鼠
  if (a[i][j] > 0) {
    a[i][j] = -60; // 負數代表死掉 + 流血
  }
}

void draw() {
  background(#FFFFF2);

  // 每 1 秒生一隻地鼠
  if (frameCount % 60 == 0) {
    int i = int(random(3));
    int j = int(random(3));

    a[i][j] = 60;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {

      int x = 50 + j * 100;
      int y = 50 + i * 100;

      if (a[i][j] < 0) {
        fill(0); // 黑色（血）
        a[i][j]++; // -60 → -59 → -58...
      }
      else if (a[i][j] > 0) {
        fill(#C61616, a[i][j] * 4); // 紅色地鼠
        a[i][j]--; // 慢慢消失
      }
      else {
        fill(#FFFFF2); // 空洞
      }

      ellipse(x, y, 90, 90);
    }
  }
}
