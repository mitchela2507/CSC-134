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

## Second Sum-Gate passphrase
cWVVVW
Evidence: `./gym cWVVVW` printed "correct — flag{sums_are_not_secrets}".
Sum check: 99 + 87 + 86 + 86 + 86 + 87 = 531. (R)

## Stretch
`name` is an array of 8 characters, so it can hold only 7 letters plus the end marker. `strcpy` copies the input without checking the array's size, so if the input is longer than 7 characters, the extra characters are written past the end of `name` into nearby memory, possibly the `unlocked` variable. C++ arrays have no built-in bounds checking, so nothing stops this write, though the exact result varies by compiler and system.

## Write-up
`strings` beats the Vault because the password `cooldude420` was stored as plain text inside the compiled program, so `strings` could read it without running anything. Compiling doesn't hide or encrypt it, it just copies it into the file. A sum check is a weak lock because many different inputs add up to the same total. I proved this by finding two passphrases, `cVVVVX` and `cWVVVW`, that both passed, so an attacker doesn't need the "real" password, only any input that satisfies the rule.

