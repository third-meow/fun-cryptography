import math
import fractions
from primefactors import factorize


#==============================================================================

def phi_method_1(num):
    phi_count = 1;
    for i in range(2,num):
        if fractions.gcd(i, num) == 1:
            phi_count += 1

    return phi_count

#==============================================================================

#for a num with (only) 2 different prime factors
def phi_method_2(num):
    factors = factorize(num)
    phi_count = 1
    for factor in factors:
        phi_count = phi_count * (factor - 1)

    return phi_count

#==============================================================================

# check both methods agree


print('Calculating...')
all_agreed = True
for i in range(9999):

    # if has 2 factors
    if len(factorize(i)) == 2:
        # if two factors are not same
        if factorize(i)[0] != factorize(i)[1]:
            # if methods disagree
            if phi_method_1(i) != phi_method_2(i):
                print(f'{i} - method 1: {phi_method_1(i)} - method 2: {phi_method_2(i)}')
                all_agreed = False


if all_agreed:
    print('Both methods agreed :)')

