HOW TO USE-
Run the Program. The main menu displays seven options.
Option 1 — Show Movie Information:
Displays the list of movies from moviesinfo.txt.
After choosing a movie, its genre, duration, and rating are shown.
Option 2 — Display Visual Seat Maps:
Shows all available schedules.
After selecting one, the system loads the corresponding seat map file and displays a neatly aligned seat layout.
Option 3 — Display Ticket Pricings:
Shows base price, tax, and final price for Regular (R), Premium (P), and Wheelchair (W) seats.
Option 4 — Book Movie Ticket:
Enter a 3-digit Customer ID (e.g., 123).
Enter Customer Name
Select a schedule.
View seat map.
Enter the number of seats to book (1–10).
Input seat codes (e.g., R12).
The program validates all inputs, checks availability, applies loyalty points, updates seat maps, and prints a receipt.
Option 5 — Display Customer Booking History:
Shows all past bookings for the entered Customer ID.
Option 6 — Display Customer Loyalty Points:
Displays total points earned, redeemed, and currently available.
Option 7 — Exit:
Ends the system with a thank-you message

SETUP:
Place the following files in the same folder as the program executable:
moviesinfo.txt – Contains movie name, genre, duration, and rating (comma-separated).
movieschedule.txt – Contains scheduled shows in the format: Movie,Date,Time,Hall,Status
bookings.txt – Stores all customer booking records.
START
DISPLAY Main Menu
Seat map files (auto-generated) use the format: seats_<Movie>_<Date>_<Time>_<Hall>.txt
Each contains a comma-separated grid of seat codes (e.g., R12, P44, W1 or with “-Booked”).
Make sure all files follow proper comma-separated formatting, as the program relies on consistent
structure.

Features:
Strong Input Validation: Customer ID, seat codes, menu choices, and loyalty point usage are checked
carefully.
Automatic Seat Map Handling: Loads, updates, and saves seat maps dynamically based on schedule.
Loyalty System: Earn 10 points per ticket. Redeem 10 points = 100 PKR discount. System prevents
over-redemption.
Clear Error Messages: Handles missing files, invalid seat formats, unavailable seats, and invalid menu
choices.
Case-Insensitive Seat Input: Seat codes like r12, R12, or r12-booked are processed reliably.
Advanced Components:
Modular Functional Design: Organized into reusable functions such as:
generateSeatFilename()
loadSeatMap()
saveSeatMap()
displaySeatMapAligned()
isValidSeatFormat()
isBooked()
isHallFull()
computePrice()
updateScheduleStatus()
Robust Booking Engine (bookTickets()): Handles customer info, seat validation, file updates, price
calculations, discounts, and receipts.
Text File Database System: All data is managed through human-editable files, making debugging and
testing easy.
Seat Matching Logic: Space-tolerant and case-tolerant processing ensures flexible seat code input.
