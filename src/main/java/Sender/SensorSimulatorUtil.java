package Sender;
import java.util.ArrayList;
import java.util.List;


public class SensorSimulatorUtil {
	private static final int NO_OF_READINGS = 50;

    public static List<Float> simulateData(final float min, final float max) {
        List<Float> sensorData = new ArrayList<>();
        for (int i = 0; i < NO_OF_READINGS; i++) {
          sensorData.add(genrateSingleReading(min, max));
        }
        return sensorData;
      }
    public static Float genrateSingleReading(final float min, final float max) {
        return (float) (Math.random() * (max - min)) + min;
      }
    
    public static String printSensorDataToConsoleOutput(final List<Float> curSensorData, final List<Float> tempSensorData) {
        String errmsg = "";
        try {
          for (int i = 0; i < NO_OF_READINGS; i++) {
            System.out.println(curSensorData.get(i) + " , " + tempSensorData.get(i));
          }
          errmsg = "DATA TRANSFER SUCCESSFULLY";
          System.out.println("DATA TRANSFER SUCCESSFULLY");
        }
        catch (Exception e) {
        	errmsg = "DATA TRANSFER FAILED";
        }
        return errmsg;
      }
}
