#pragma config(Motor,  motorA,          M,             tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorB,          L,             tmotorEV3_Large, PIDControl, encoder)
#pragma config(Motor,  motorC,          R,             tmotorEV3_Large, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(1)
	{
		moveMotorTarget(motorB, 360, 50);
		moveMotorTarget(motorB, 360, 50);
		wait1Msec(1000);
	}
}
