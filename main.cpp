// main.cpp

#include <QApplication>
#include <QTimer>

#include "traffic_light.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  TrafficLight light;
  int ret;

  QTimer timer;

  QObject::connect(&timer, &QTimer::timeout,
                   &light, &TrafficLight::light_update);

  timer.start(500);

  light.show();
  ret = app.exec();
    
  return ret;
}

