def main():
    text = input("Text: ")

    letters = count_letters(text)
    words = count_words(text)
    sentences = count_sentences(text)

    L = letters / words * 100
    S = sentences / words * 100
    index = round(0.0588 * L - 0.296 * S - 15.8)

    if index >= 16:
        print("Grade 16+")


    elif index < 1:
        print("Before grade 1")


    else:
        print(f"Grade {index}")


def count_letters(text):
    count = 0
    for letter in text:
        if letter.isalpha():
            count += 1

    return count


def count_sentences(text):
    count = 0
    for character in text:
        if character == '.' or character == '!' or character == '?':
            count += 1

    return count


def count_words(text):
    words = text.split()
    return len(words)


main()
