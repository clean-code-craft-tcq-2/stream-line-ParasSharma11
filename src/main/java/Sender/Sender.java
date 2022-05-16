package Sender;
import java.util.List;

public class Sender {
	
  private static final float MAX_TEMP_FOR_SENSOR1 = 45;
  private static final float MIN_TEMP_FOR_SENSOR1 = 0;
  private static final float MAX_CURRENT_FOR_SENSOR2 = 15;
  private static final float MIN_TEMP_FOR_SENSOR2 = -15;

  public static void main(final String[] args) {

    List<Float> Sensor1Data = SensorSimulatorUtil.simulateData(MIN_TEMP_FOR_SENSOR1, MAX_TEMP_FOR_SENSOR1);
    List<Float> Sensor2Data = SensorSimulatorUtil.simulateData(MIN_TEMP_FOR_SENSOR2, MAX_CURRENT_FOR_SENSOR2);
    SensorSimulatorUtil.printSensorDataToConsoleOutput(Sensor1Data, Sensor2Data);
  }
 
}
