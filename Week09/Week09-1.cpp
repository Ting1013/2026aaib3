// Week09-1 好玩的程式設計（打地鼠）

void setup() { // 執行一次
  size(300, 300); // 視窗大小 300 x 300
}

void draw() { // 每秒執行
  background(#FFFFF2); // 淡黃色背景

  for (int i = 0; i < 3; i++) { // 左手：控制列（上下）
    for (int j = 0; j < 3; j++) { // 右手：控制行（左右）

      int x = 50 + j * 100;
      int y = 50 + i * 100;

      ellipse(x, y, 90, 90); // 畫地鼠洞
    }
  }
}
