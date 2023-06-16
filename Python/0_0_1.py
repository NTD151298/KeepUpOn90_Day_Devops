def my_fun_sum(a, b): # Hàm cộng hai biến đầu vào là a và b
    c = a + b # giá trị c sẽ = a + b
    return c # hàm trả lại c
def my_fun_min(a, b): # Hàm trừ hai biến đầu vào a và b
    c = a - b 
    return c # Hàm trả lại giá trị c
def my_fun_nhan(a, b):
    c = a * b
    return c 
def my_fun_chia(a, b): 
    if b == 0:
        c = "Wrong"
    else: c = a / b 
    return c

while(1):
    input_to_exit = input("Input 0 to exit else continus: ")
    if input_to_exit == "0":
        break
    else:
        a = int(input("a = ")) # Input giá trị a đầu vào và phải là interger
        b = int(input("b = ")) # Input giá trị b đầu vào và phải là interger
        if a < b: # Hàm kiểm tra nếu a > b
            temp = a
            a = b
            b = temp  
        print(f"Output sum:     {a} + {b}  =  {my_fun_sum(a,b)}")
        print(f"Output min:     {a} - {b}  =  {my_fun_min(a,b)}")
        print(f"Output nhan:    {a} * {b}  =  {my_fun_nhan(a,b)}")
        print(f"Output chia:    {a} / {b}  =  {my_fun_chia(a,b)}")
