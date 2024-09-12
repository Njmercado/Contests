/*
  Given an array of objects with a date and a value prop, extend the array with the missing
  dates between the lowest and largest dates adding the value 0 to the missing dates.
*/

const DATES = [
  { date: new Date('2021-01-04').toISOString(), value: 100 },
  { date: new Date('2021-01-20').toISOString(), value: 300 },
  { date: new Date('2021-01-15').toISOString(), value: 200 },
  { date: new Date('2021-01-12').toISOString(), value: 200 },
]

const ONE_DAY = 1000 * 60 * 60 * 24;

const getDaysOfDifference = (initialDate, nextDate) => {
  const datesDifference = Math.abs(new Date(initialDate) - new Date(nextDate));
  const daysOfDifference = datesDifference / ONE_DAY;
  return daysOfDifference;
}

const addOneDay = (date) => {
  return new Date(new Date(date).getTime() + ONE_DAY);
}

const main = () => {
  var sortedDates = DATES.sort((initial, next) => new Date(initial.date) - new Date(next.date));
  const extendedDatesArray = [sortedDates[0]];
  var index = 1
  while(sortedDates.length >= 1) {
    const previousDate = extendedDatesArray[index - 1];
    const currentDate = sortedDates[0];
    const daysOfDifference = getDaysOfDifference(previousDate.date, currentDate.date); 

    if(daysOfDifference  === 1) { extendedDatesArray.push({ ...sortedDates.shift() }) }
    else {
      const newDate = addOneDay(previousDate.date);
      extendedDatesArray.push({ date: newDate.toISOString(), value: 0 })
    }

    index += 1
  }

  console.log(extendedDatesArray);
}

main();