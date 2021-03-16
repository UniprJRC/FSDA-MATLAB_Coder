function [mmd,Un,BB]=FSMmmd_wrapper(Y,bsb,   bsbsteps,init,msg,nocheck)

% Required input arguments

% Y: an array of doubles of any dimension
assert(isa(Y,'double'));
assert(all(size(Y) <= [Inf Inf]));

% bsb: a column vector of doubles of any length
assert(isa(bsb,'double'));
assert(size(bsb,2) == 1);

% bsbsteps: a missing value, a scalar or a column vector of doubles of any length
assert(isa(bsbsteps,'double'));
assert(all(size(bsbsteps) <=[Inf 1]));

% init a scalar double
assert(isa(init, 'double'));
assert(isscalar(init));

% msg is a scalar boolean
assert(isa(msg, 'logical'));

% nocheck is a boolean
assert(isa(nocheck, 'logical'));

[mmd,Un,BB] = FSMmmd(Y,bsb,   'bsbsteps',bsbsteps,...
    'init',init,'msg',msg,'nocheck',nocheck);
end