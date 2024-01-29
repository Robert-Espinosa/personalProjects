import time

from booking.booking import Booking

# running our booking object as a bot we can open the page
with Booking() as bot:
    bot.land_first_page()
    bot.login()
    bot.loginInfo()
    bot.bookProcess()

    bot.numPeople()
    bot.timeSlot()
    bot.numHoles()

    bot.bookTime()
    print('exiting ...')
