void printRecord(float loanAmount, float monthlyInterestRate, float monthlyPayment, float compundingRate, float amountPaidBack, float interestPaid, int numberOfPayments)
{
  //File streaming declaration
  ofstream fout;
  fout.open("Records.txt");
  
  //Output
  fout << setw(40) << left << "Loan Amount:" << "$" << loanAmount << "\n";
  fout << setw(40) << left << "Monthly Interest Rate: " << monthlyInterestRate * 100 << "%\n";
  fout << setw(40) << left << "Number Of Payments: " << numberOfPayments << "\n";
  fout << setw(40) << left << "Monthly Payment:" << "$" << monthlyPayment << "\n";
  fout << setw(40) << left << "Total Amount Paid:" << "$" << amountPaidBack << "\n";
  fout << setw(40) << left <<"Interest Paid:" << "$" << interestPaid << "\n";
}
