// Week04-2 好玩的程式設計 for for 迴圈 + if 判斷

void setup() { // 設定
  size(600, 400); // 視窗大小
}

void draw() { // 畫圖

  for (int y = 0; y < 400; y += 50) { // 外層 (列)
    for (int x = 0; x < 600; x += 50) { // 內層 (行)

      if (x < mouseX && mouseX < x + 50)
        fill(#74FFE4);
      else if (y < mouseY && mouseY < y + 50)
        fill(#74FFE4);
      else
        fill(#FFFFF2);

      rect(x, y, 50, 50);
    }
  }

}
