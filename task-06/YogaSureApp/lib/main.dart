
import 'package:flutter/material.dart';
import 'package:yogasureapp/introscreen.dart';


void main() => runApp(MyApp());

class MyApp extends StatelessWidget {
  static const String title = 'Welcome';

  @override
  Widget build(BuildContext context) => MaterialApp(
    debugShowCheckedModeBanner: false,
    title: title,
    home: OnBoardingPage(),
  );
}
