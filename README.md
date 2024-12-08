# Decimal to ASCII

The program itself is rather simple, just converts a decimal value to a ascii value in little endian. It will also output the hex value of the decimal value.

This is mainly intended for CTF challenges where you need to convert a decimal value to a ascii value for a buffer overflow, or any other reason where you need to make an ascii value equal toa decimal value.

## How to compile

You can use the following command:

```shell
gcc -o decimal_to_ascii.exe decimal_to_ascii.c
```

This will create a executable file called `decimal_to_ascii.exe` that you can run, or you can name it whatever you want.

## Ways to run
> Note: im using decimal_to_ascii.exe as the name of the executable, you can name it whatever you want.

Just running the executable will prompt you to enter a decimal value to convert to a ascii value.

```shell
./decimal_to_ascii.exe
Enter a decimal number: 
```

You can also run the program with a command line argument to convert a decimal value to a ascii value.

```shell
./decimal_to_ascii.exe 26984
```

## Example Output

```shell
Decimal: 26984
HEX: 0x6968
ASCII: 'hi'
```

## Notes
I created this tool since I have found that a decent bit of CTF challenges especially in REV require a really specific decimal value that you can only change from a buffer overflow.

I was getting annoyed at going to websites, coverting a decimal to a hex, and then translatting the hex to a decimal value and reversing the string for it to be little endian.

So this program aims to cut out all of that with just one step of running this program.

The output will always be in little endian, as with most things it needs to be in little endian to get the correct value.

## Limitations

The program will break if the input is too large, you might get a garbage value as an output.

This is semi purposeful as most programs won't use long variables, and will just use a int variable, which is what I am using.

It will also not handle negative values