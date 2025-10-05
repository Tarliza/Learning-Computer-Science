def add_expenses(expenses, amount, category):
    expenses.append({'amount' : amount, 'category' : category})
    
def print_expenses(expenses):
    for expense in expenses:
        print(f'Amount : {expense["amount"]} \nCategory : {expense["category"]}')

def total_expenses(expenses):
    return sum(map(lambda expense : expense["amount"], expenses))
    
def filter_expenses_by_category(expenses, category):
    return filter(lambda expense : expense["category"] == category, expenses)

if __name__ =='__main__':
    expenses = []
    print('*' * 10, 'YOUR EXPENSE TRACKER', '*' * 10)
    while True:
        print('\n1. Add expense')
        print('2. list all expense')
        print('3. Show total expenses')
        print('4. Filter expense by category')
        print('5. Exit')
        
        choice = input("\nEnter your choice: ")
        
        if choice == '1':
            print('\n Add an expense')
            amount = float(input("Enter amount: "))
            category  = input("Enter category: ")
            add_expenses(expenses, amount, category)
        elif choice == '2':
            print('\nListing all your expenses:')
            print_expenses(expenses)
        elif choice == '3':
            print("\nThe total of your expenses:" , total_expenses(expenses))
            
        elif choice == '4':
            category = input("Enter category  to filter: ")
            print(f'\nExpense for {category}: ')
            expense_from_category = filter_expenses_by_category(expenses, category)
            print(expense_from_category)
        
        elif choice == '5':
            print("\nExiting...")
            break