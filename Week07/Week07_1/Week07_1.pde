// Week07-1 好玩的程式設計黑白棋

void setup() {
  size(620, 620); // 視窗大小 600+20 x 600+20
  background(245, 216, 142); // 木板色

  for (int i = 0; i < 10; i++) { // 左手i (y)
    for (int j = 0; j < 10; j++) { // 右手j (x)

      int x = 10 + j * 60;
      int y = 10 + i * 60;

      fill(245, 216, 142); // 木板色
      strokeWeight(2); // 線條粗細

      rect(x, y, 60, 60); // 畫格子
    }
  }
}
