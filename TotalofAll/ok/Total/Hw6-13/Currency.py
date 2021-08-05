YEN_PER_DOLLAR = 110.18
EURO_PER_DOLLAR = 0.85
dollars = input('Please enter the dollars: ')
euro = EURO_PER_DOLLAR * dollars
yens = YEN_PER_DOLLAR * dollars
print "$", dollars, " is worth ", yens, " in yens and ", euro, " in euros"