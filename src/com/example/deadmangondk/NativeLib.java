
package com.example.deadmangondk;
public class NativeLib {

	
	static 
	{
		System.loadLibrary("DeadmangoNDK");
	}
	public native int addthem( int no1, int no2);
	
}
