// Week06-1 好玩的程式設計（2D陣列）

int[][] b = new int[10][16]; // 10列(y) × 16行(x)

void setup() {
  size(800, 500); // 視窗大小
}

void draw() {
  background(255); // 背景白色

  // 外層：控制列（y）
  for (int i = 0; i < 10; i++) {

    // 內層：控制行（x）
    for (int j = 0; j < 16; j++) {

      if (b[i][j] == 1)
        fill(#F5CBFF); // 紫色
      else
        fill(255);     // 白色

      rect(j * 50, i * 50, 50, 50); // 畫格子
    }
  }
}

void mousePressed() {
  // 把滑鼠位置轉成格子座標
  int i = mouseY / 50; // 對應 y（列）
  int j = mouseX / 50; // 對應 x（行）

  // 防止點到外面
  if (i >= 0 && i < 10 && j >= 0 && j < 16) {
    b[i][j] = 1; // 設為1 → 變紫色
  }
}
