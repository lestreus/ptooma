var ptooma = require('./ptooma');
var chalk = require('chalk');
while(ptooma.pull(1) == ptooma.pull(1))
  ;

var success = true;

if(success)
  console.log(chalk.green("All tests passed!"));
else
  console.log(chalk.red("No tests passed!"));
