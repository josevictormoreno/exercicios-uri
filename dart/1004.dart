import 'dart:io';

void main(){
  int a, b;
  a = int.parse(stdin.readLineSync());
  b = int.parse(stdin.readLineSync());
  print('PROD = ${a*b}');
}