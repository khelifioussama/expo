// Copyright 2015-present 650 Industries. All rights reserved.

package expo.modules.sensors.modules;

import android.content.Context;
import android.hardware.Sensor;
import android.hardware.SensorEvent;
import android.hardware.SensorManager;
import android.os.Bundle;

import expo.modules.core.Promise;
import expo.modules.core.interfaces.ExpoMethod;

import expo.modules.interfaces.sensors.SensorServiceInterface;
import expo.modules.interfaces.sensors.services.MagnetometerUncalibratedServiceInterface;

public class MagnetometerUncalibratedModule extends BaseSensorModule {
  public MagnetometerUncalibratedModule(Context reactContext) {
    super(reactContext);
  }

  @Override
  public String getName() {
    return "ExponentMagnetometerUncalibrated";
  }

  @Override
  public String getEventName() {
    return "magnetometerUncalibratedDidUpdate";
  }

  @Override
  protected SensorServiceInterface getSensorService() {
    return getModuleRegistry().getModule(MagnetometerUncalibratedServiceInterface.class);
  }

  protected Bundle eventToMap(SensorEvent sensorEvent) {
    Bundle map = new Bundle();
    map.putDouble("x", sensorEvent.values[0]);
    map.putDouble("y", sensorEvent.values[1]);
    map.putDouble("z", sensorEvent.values[2]);
    return map;
  }

  @ExpoMethod
  public void startObserving(Promise promise) {
    super.startObserving();
    promise.resolve(null);
  }

  @ExpoMethod
  public void stopObserving(Promise promise) {
    super.stopObserving();
    promise.resolve(null);
  }

  @ExpoMethod
  public void setUpdateInterval(int updateInterval, Promise promise) {
    super.setUpdateInterval(updateInterval);
    promise.resolve(null);
  }

  @ExpoMethod
  public void isAvailableAsync(Promise promise) {
    SensorManager mSensorManager = (SensorManager) getContext().getSystemService(Context.SENSOR_SERVICE);
    boolean isAvailable = mSensorManager.getDefaultSensor(Sensor.TYPE_MAGNETIC_FIELD_UNCALIBRATED) != null;
    promise.resolve(isAvailable);
  }
}
