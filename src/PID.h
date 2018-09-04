#ifndef PID_H
#define PID_H

class PID {
public:
  /*
  * Errors
  */
  double p_error;
  double i_error;
  double d_error;
  double prev_cte;

  /**
   * Error counter
  **/
  long counter;
  double errorSum;
  double minError;
  double maxError;

  /*
  * Coefficients
  */ 
  double Kp;
  double Ki;
  double Kd;

  /*
  * Constructor
  */
  PID();

  /*
  * Destructor.
  */
  virtual ~PID();

  /*
  * Initialize PID.
  */
  void Init(double Kp, double Ki, double Kd);

  /*
  * Update the PID error variables given cross track error.
  */
  void UpdateError(double cte);

  /*
  * Calculate the total PID error.
  */
  double TotalError();

  /*
  *  Get the average error.
  */
  double AverageError();

  /*
  * Get the minimum error.
  */
  double MinimumError();

  /*
  * Get the maximum error.
  */
  double MaximumError();
};

#endif /* PID_H */
