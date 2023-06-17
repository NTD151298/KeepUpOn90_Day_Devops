def my_fun_sum(a, b): # Hàm cộng hai biến đầu vào là a và b
    c = a + b # giá trị c sẽ = a + b
    return c # hàm trả lại c
def my_fun_min(a, b): # Hàm trừ hai biến đầu vào a và b
    c = a - b 
    return c # Hàm trả lại giá trị c
def my_fun_nhan(a, b): # Hàm nhân 2 phần tử a và b
    c = a * b
    return c 
def my_fun_chia(a, b):  # Hàm chia 2 phần tử a và b
    if b == 0: # Nếu mẫu là = 0 
        c = "Wrong" # thì trả c là sai
    else: c = a / b 
    return c

while(1): # Hàm lặp
    input_to_exit = input("Input 0 to exit else <+ - * />: ") # biến đầu vào nếu là 0 thì sẽ thoát
    if input_to_exit == "0": # kiểm tra là 0
        break
    else: # nếu không thì tiếp tục
        a = int(input("a = ")) # Input giá trị a đầu vào và phải là interger
        b = int(input("b = ")) # Input giá trị b đầu vào và phải là interger
        if a < b: # Hàm kiểm tra nếu a > b
            temp = a
            a = b
            b = temp  # thế chỗ a và b để a luôn luôn lớn hơn b
        print(f"Output sum:     {a} + {b}  =  {my_fun_sum(a,b)}") # in ra giá trị hàm cộng
        print(f"Output min:     {a} - {b}  =  {my_fun_min(a,b)}") # in ra giá trị hàm trừ
        print(f"Output nhan:    {a} * {b}  =  {my_fun_nhan(a,b)}") # in ra giá trị hàm nhân
        print(f"Output chia:    {a} / {b}  =  {my_fun_chia(a,b)}") # in ra giá trị hàm chia
