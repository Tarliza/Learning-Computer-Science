import json

CONTACTS_FILE = "contacts.json" # Define the contact file to store the contacts
contacts = [] # Add a list to capture

def load_contacts():
    global contacts

    try:
        with open(CONTACTS_FILE, 'r') as file:
            content = file.read()
            print("File read successfully")
            contacts = json.loads(content)
            print("Contacts successfully parsed and loaded")
    except FileNotFoundError:
        print("No existing contacts file found, starting with an empty list")
        contacts = []
    except json.JSONDecodeError:
        print("Error reading contacts file (corrupted data). Starting with an empty list")
        contacts = []
    except Exception as e:
        print(f"An unexpected error occurred: {e}. Starting with an empty list")
        contacts = []

def display_menu():
    print('-' * 30)
    print("1. Add New Contact")
    print("2. View All Contacts")
    print("3. Search for Contacts")
    print("4. Delete contact")
    print("5. Save & Exit")
    print('-' * 30)

def add_contact():
    global contacts 
    print("\n____ Add Contact ____\n")
    name = input("Enter the contact's name: ")
    number = input("Enter the contact's phone number: ")
    email = input("Enter the contact's email(optional): ")

    new_contact = { "name" : name,
                     "phone" : number,
                     "email" : email}
    contacts.append(new_contact)
    print(f"Contact {name} has been added successfully")

def view_contacts():
    print("\n____ View All Contacts ____\n")
    if not contacts: # This checks if the global list is empty
        print("No contacts found, you have to add some first!")
    for i, contact in enumerate(contacts):
        print(f"{i + 1}.")
        print(f"Name : {contact['name']}")
        print(f"Phone : {contact['phone']}")
        print(f"Email : {contact['email'] if contact['email'] else 'N/A'}")

def search_contact():
    print("\n____ Search Contact ____\n")
    search_term = input("Enter name, phone number, or email of the contact: ").lower()
    matching_contacts = []
    if not contacts:
        print("There are no contacts to search for, your contact list is empty")
        return
    for contact in contacts:
        lower_name = contact.get('name', '').lower()
        lower_number = contact.get('phone', '').lower()
        lower_email = contact.get('email', '').lower()
    if search_term  in lower_name or search_term in lower_number or search_term in lower_email:
        matching_contacts.append(contact)
    if not matching_contacts:
        print("No contact found!")
    else:
        print("\n____ Matching Contact ____\n")
        for i, person in enumerate(matching_contacts):
            print(f"{i + 1}.")
            print(f"Name : {person['name']}")
            print(f"Phone : {person['phone']}")
            print(f"Email : {person['email'] if person['email'] else 'N/A'}")

def delete_contact():
    global contacts 
    print("\n____ Delete Contact ____\n")
    if not contacts:
        print("There are no contacts to delete")
        return
    view_contacts()
    try:
        phone = int(input("Enter the number of the contact: "))
        list_index = phone - 1 # to convert the user's 1-based number to a 0-based list index
        if 0 <= list_index < len(contacts):
            deleted_contact = contacts.pop(list_index)
            print(f"Contact {deleted_contact['name']} has been deleted successfully")
        else:
            print("Invalid number! enter a number that's from the list")
    except ValueError:
        print("Invalid input! Enter a valid number")
    except Exception as e:
        print(f"Error! something unexpected occurred while trying to delete the contact: {e}")

def save_contact():
    global contacts
    try:
        with open(CONTACTS_FILE, 'w') as file:
            json.dump(contacts, file, indent=4)
            print(f"Contacts saved successfully to {CONTACTS_FILE}")
    except IOError as e:
        print(f"Error! Saving contacts: A file I/O Error occurred : {e}")
    except Exception as e:
        print(f"Something went wrong while saving : {e}")

def main():
    load_contacts()
    print("\n------ Welcome to the Command-line Contact Manager -------\n")
    print('-' * 30)
    program_running = True # TO control the main loop
    while program_running:
        try:
            choice = int(input("Enter a choice(1-5): "))
            if choice == 1:
                add_contact()
            elif choice == 2:
                view_contacts()
            elif choice == 3:
                search_contact()
            elif choice == 4:
                delete_contact()
            elif choice == 5:
                save_contact()
                program_running = False
        except ValueError:
            print("Invalid choice! Enter a valid choice from the menu")
        except Exception as e:
            print(f"Error! Unexpected error occurred : {e}")

if __name__=="__main__":
    main()