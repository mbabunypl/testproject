

def encode(s):
    result = ''
    current_char = s[0]
    count = 1

    for char in s[1:]:
        if char == current_char:
            count += 1
        else:
            result += current_char + str(count)
            current_char = char
            count = 1

    result += current_char + str(count)
    return result

def decode(s):
    result = ''
    i = 0

    while i < len(s):
        char = s[i]
        count_str = ''
        i += 1

        while i < len(s) and s[i].isdigit():
            count_str += s[i]
            i += 1

        count = int(count_str)
        result += char * count

    return result

# Example usage:
original_string = 'aabbbbaaaaaaabbbbb'
encoded_string = encode(original_string)
decoded_string = decode(encoded_string)

x = "0"*1000 + "3" *130 + "2"*120 + "0"*10 + "01"*10
y = encode(x)
#print(x,y)
print(len(x),len(y))