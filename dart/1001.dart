import 'dart:io';
 
void main()
{
  int a,b, soma;
  a = int.parse(stdin.readLineSync());
  b = int.parse(stdin.readLineSync());
  soma = a + b;
  print("X = $soma");
}