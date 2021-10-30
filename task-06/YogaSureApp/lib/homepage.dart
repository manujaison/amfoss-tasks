import 'package:flutter/material.dart';
import 'package:yogasureapp/main.dart';
import 'package:yogasureapp/introscreen.dart';

class HomePage extends StatelessWidget {
  @override
  Widget build(BuildContext context) => Scaffold(
    appBar: AppBar(
      title: Text(MyApp.title),
    ),
    body: Center(

      child: Column(
        mainAxisAlignment: MainAxisAlignment.center,
        children: [
          Image(
              image: AssetImage('assets/welcome.png')),
          Text(
            'Gopika Santhosh \n CSE Fresher \n',
            style: TextStyle(fontSize: 30),
          ),
        ],
      ),
    ),
  );
}