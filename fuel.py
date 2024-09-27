while True:
    try:
        fuel = input("Fraction: ")
        x , y = fuel.split("/")

        x = int(x)
        y = int(y)
        final_fuel = (x / y) * 100
        final_fuel = round(final_fuel)
    except (ValueError, ZeroDivisionError):
        None
    try:
        if x > y:
            continue
        if final_fuel <= 1:
            print("E")
        elif final_fuel >= 99:
            print("F")
        else:
            print(f"{final_fuel}%")
    except (TypeError, NameError):
        None
    else:
        break
