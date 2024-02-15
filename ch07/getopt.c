#include <unistd.h>

int
main(int argc, char *argv[])
{
  int opt;

  // パラメータを取るオプションの場合、後ろに:をつける（この場合はf）
  while ((opt = getopt(argc, argv, "af:tx")) != -1) {
    switch (opt) {
      case 'a':
        // オプション-aを処理するコード
        break;
      case 'f':
        // オプション-fを処理するコード
        break;
      
      // 必要なだけ続ける

      case '?':
        // 不正なオプションを渡された場合のコード
        break;
    }
  }
}
