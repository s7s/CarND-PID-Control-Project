#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {
	is_initialized=false;
}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd, double cte) {
	this->Kp=Kp;
	this->Ki=Ki;
	this->Kd=Kd;
	p_error=Kp*cte;
	i_error=Ki*cte;
	d_error=0;
	last_cte=cte;
	is_initialized=true;
}

void PID::UpdateError(double cte) {
	p_error=Kp*cte;
	i_error+=Ki*cte;
	d_error=Kd*(cte-last_cte);
	last_cte=cte;

}

double PID::TotalError() {
	return -(p_error+i_error+d_error);
}

