import 'dart:io';

void helper() {
  int n = int.parse(stdin.readLineSync()!);
  List<int> arr = List<int>.generate(n, (index) => 0);
  int ans = 0;

  for (int i = 0; i < n; i++) {
    arr[i] = int.parse(stdin.readLineSync()!);
    ans ^= arr[i];
  }

  for (int i = 0; i < n; i++) {
    if (arr[i] == ans) {
      print('${i + 1}');
      break;
    }
  }
}

void main() {
  int tc = int.parse(stdin.readLineSync()!);

  for (int t = 1; t <= tc; t++) {
    // stdout.write('Case #$t: ');
    helper();
  }
}
