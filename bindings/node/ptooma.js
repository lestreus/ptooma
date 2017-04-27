var ffi = require('ffi');
var Ptooma = ffi.Library("../../libptooma", {
    'pull': [ 'int', ["int"] ],
});

var pull= function(digits) {
    return Ptooma.pull(digits);
}

module.exports = {
    pull: pull
}
