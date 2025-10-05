def get_card_number() -> str:
    """Prompt user for a card number and return it cleaned (no spaces or dashes)."""
    card_number = input("Please enter your card number: ").strip()
    card_translation = str.maketrans({' ': '', '-': ''})
    return card_number.translate(card_translation)


def luhn_check(card_number: str) -> bool:
    """Verify a card number using the Luhn algorithm."""
    digits = [int(d) for d in card_number[::-1]]  # reverse and convert to int
    total = 0
    
    for i, digit in enumerate(digits):
        if i % 2 == 1:  # double every second digit
            doubled = digit * 2
            total += doubled - 9 if doubled > 9 else doubled
        else:
            total += digit
            
    return total % 10 == 0


def verify_card_number():
    card_number = get_card_number()
    
    if not card_number.isdigit():
        print("\nInvalid input! Card number must contain only digits.\n")
        return
    
    if luhn_check(card_number):
        print("\n✅ Card number is valid.\n")
    else:
        print("\n❌ Card number is invalid.\n")


if __name__ == "__main__":
    verify_card_number()