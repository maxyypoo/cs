 cout << "Please input the amount of minutes talked: ";
     cin >> minutesUsed;
     totalCost = costOfUser + (costPerMin * (minutesUsed - packageMax));
     packageSave = ((minutesUsed - packageMax) * (packageNextRate)) + packageNextCost;
     if(minutesUsed > 44640)
       cout << "Please enter valid amount of minutes." << endl;
     else if(minutesUsed < packageMax)
     {
         cout << "Your total is $" << costOfUser << endl;
       cout << "You would have saved $" << costOfUser - packageNextCost << 
     
     }
      else if (minutesUsed > packageMax && minutesUsed <= packageNextMax)
      {
         cout << "Your total is $" << totalCost << endl;
         cout << "You would save $" << (totalCost) - packageSave << endl;
      }
      
     else if(minutesUsed > packageNextMax && minutesUsed > packageNextMax)
     {
       cout << "Your total is $" << totalCost << endl;
       cout << "You would save $" << (totalCost) - packageSave << endl; 
       cout << packageSave << endl;
     }