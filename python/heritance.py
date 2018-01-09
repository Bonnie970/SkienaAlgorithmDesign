class A():
	def __init__(self):
		print("Enter A")
		print("Leave A")

class B(A):
	def __init__(self):
		print("Enter B")
		super().__init__()
		print("Leave B")
		
class C(A):
	def __init__(self):
		print("Enter C")
		super().__init__()
		print("Leave C")

class D(C,B):
	def __init__(self):
		print("Enter D")
		super().__init__()
		#C.__init__(self)
		print("Leave D")

b = B()
c = C()		
d = D()

