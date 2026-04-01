// Week06-2 好玩的程式設計（拖曳 + 漸淡效果）

int[][] b = new int[10][16]; // 2D陣列

void setup() {
  size(800, 500); // 視窗大小
}

void draw() {
  background(255); // 背景白色

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 16; j++) {

      if (b[i][j] > 0) {
        fill(#F5CBFF, b[i][j] * 4); // 紫色 + 透明度
        b[i][j]--; // ⭐ 讓數值慢慢變小（會變淡）
      } else {
        fill(255); // 白色
      }

      rect(j * 50, i * 50, 50, 50); // 畫格子
    }
  }
}

void mouseDragged() {
  // 滑鼠拖曳時觸發

  int i = mouseY / 50;
  int j = mouseX / 50;

  // 防止超出範圍
  if (i >= 0 && i < 10 && j >= 0 && j < 16) {
    b[i][j] = 60; // 設成60 → 會慢慢倒數變淡
  }
}
