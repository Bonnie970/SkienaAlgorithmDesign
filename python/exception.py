# raise error
#raise ZeroDivisionError("Divided by zero.")

# error catch
# when the first error caught, try ends -> divide by zero caught only when open file passes
try: 
	# with open will take care of f.close
	with open("lambda.py") as f:
		f.readlines()
	a = 1 + 'a'
	raise ZeroDivisionError("Divided by zero.")
except (OSError,TypeError,ZeroDivisionError) as r: 
	print(r)
else: 
	print("No error raised.")
# code in finally always run
finally: 
	print("finally")


# assertion error 
try:
	assert 1 > 2
except AssertionError as r:
	print(r)

# AttributeError, IndexError, KeyError, NameError, SyntaxError