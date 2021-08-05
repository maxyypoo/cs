 
  //Processing
  monthlyInterestRate = monthlyInterestRate / 100;
  compundingRate = pow(((monthlyInterestRate / 12) + 1 ) , numberOfPayments);
  monthlyPayment = loanAmount * compundingRate - loanAmount;
  amountPaidBack = monthlyPayment * numberOfPayments;
  interestPaid = amountPaidBack * monthlyInterestRate;
  