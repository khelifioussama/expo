// Copyright 2015-present 650 Industries. All rights reserved.

package expo.modules.sensors.services;

import android.content.Context;
import android.hardware.Sensor;

import java.util.Collections;
import java.util.List;

import expo.modules.core.interfaces.InternalModule;

import expo.modules.interfaces.sensors.services.BarometerServiceInterface;

public class BarometerService extends SubscribableSensorService implements InternalModule, BarometerServiceInterface {
  public BarometerService(Context reactContext) {
    super(reactContext);
  }

  @Override
  int getSensorType() {
    return Sensor.TYPE_PRESSURE;
  }

  @Override
  public List<Class> getExportedInterfaces() {
    return Collections.<Class>singletonList(BarometerServiceInterface.class);
  }
}
