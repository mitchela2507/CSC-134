## Flag 1
flag{th3_b1nary_t0ld_m3}
Evidence: `strings vault | grep -i -E "flag|cool"` printed
"Access granted. flag{th3_b1nary_t0ld_m3}" and the password "cooldude420". (R)
Confirmed by running `./vault` and entering `cooldude420`, which printed "Access granted." (R)

## Flag 2
flag{sums_are_not_secrets}
Evidence: `./gym cVVVVX` printed "correct — flag{sums_are_not_secrets}".
The sum check: `python3 -c "print(sum(ord(c) for c in 'cVVVVX'))"` printed 531. (R)
I read the three rules in `check()` in gym.cpp (length 6, first char 'c', sum 531). (C)

