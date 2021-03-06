
package Sender;

import java.util.ArrayList;
import java.util.List;
import org.junit.Test;
import static org.junit.Assert.assertEquals;


public class TestSender {
	@Test
	public void testsimulateData() {
		List<Float> Sensor1Data = SensorSimulatorUtil.simulateData(0, 40);
		assertEquals(50, Sensor1Data.size());
	}
	
	@Test 
	public void printSensorDataToConsoleOutput() {
		List<Float> Sensor1Data = SensorSimulatorUtil.simulateData(0, 40);
		List<Float> Sensor2Data = SensorSimulatorUtil.simulateData(0, 40);
		String errmsg = SensorSimulatorUtil.printSensorDataToConsoleOutput(Sensor1Data, Sensor2Data);
		assertEquals(errmsg, "DATA TRANSFER SUCCESSFULLY");
	}

}
